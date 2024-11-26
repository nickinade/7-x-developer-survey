//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied
// See the License for the specific language governing permissions and
// limitations under the License.
//

import UIKit

import ScanditCaptureCore
import ScanditIdCapture

private struct Constants {
    static let licenseKey = ""
}

class ScanningViewController: UIViewController {
    
    
    let camera = Camera.default
    let context = DataCaptureContext(licenseKey: Constants.licenseKey)
    let idCaptureSettings: IdCaptureSettings = {
        let idCaptureSettings = IdCaptureSettings()
        idCaptureSettings.acceptedDocuments = [
            Passport(region: .any),
            IdCard(region: .euAndSchengen)
        ]
        idCaptureSettings.rejectedDocuments = [
            Passport(region: .vietnam),
        ]
        
        idCaptureSettings.scannerType = SingleSideScanner(enablingBarcode: true, machineReadableZone: true, visualInspectionZone: true)
        
        return idCaptureSettings
    }()
    lazy var idCapture = IdCapture(context: context, settings: idCaptureSettings)
        
    override func viewDidLoad() {
        super.viewDidLoad()
        setupIdCapture()
    }

    override func viewWillAppear(_ animated: Bool) {
        super.viewWillAppear(animated)
        
        // Switch camera on to start streaming frames
        camera?.switch(toDesiredState: .on)
        
        // Enable IdCapture
        idCapture.addListener(self)
    }

    override func viewWillDisappear(_ animated: Bool) {
        super.viewWillDisappear(animated)
        
        // Switch camera off to stop streaming frames
        camera?.switch(toDesiredState: .off)
        
        // Disable IdCapture
        idCapture.removeListener(self)
        
        // Reset IdCapture to discard front side captures when using Front & Back mode
    }

    private func setupIdCapture() {
        
        // initialize ScanditSDK and IdCapture here
        context.setFrameSource(camera, completionHandler: nil)

        // Use the recommended camera settings for the IdCapture mode.
        let recommendedCameraSettings = IdCapture.recommendedCameraSettings
        camera?.apply(recommendedCameraSettings)
        
        let captureView = DataCaptureView(context: context, frame: view.bounds)
        captureView.context = context
        captureView.autoresizingMask = [.flexibleWidth, .flexibleHeight]
        view.addSubview(captureView)
        
        _ = IdCaptureOverlay(idCapture: idCapture, view: captureView)
    }

    private func openResultViewController(resultText: String) {
        let resultVC = ResultViewController()
        resultVC.setResultLabel(text: resultText)
        navigationController?.pushViewController(resultVC, animated: true)
    }
    
    private func showError() {
        let vc = UIAlertController(title: nil, message: "Scanning failed. Make sure the document is well-lit and free from glare.", preferredStyle: .alert)
        vc.addAction(UIAlertAction(title: "Try Again", style: .default, handler: { [weak self] _ in
            guard let self else { return }
            self.idCapture.addListener(self)
        }))
        vc.addAction(UIAlertAction(title: "Cancel", style: .cancel, handler: { [weak self] _ in
            self?.navigationController?.popViewController(animated: true)
        }))
        present(vc, animated: true)
    }
}

extension ScanningViewController: IdCaptureListener {
    func idCapture(_ idCapture: IdCapture, didCapture capturedId: CapturedId) {
        print("didCapture: \(capturedId)")

        idCapture.removeListener(self)
        DispatchQueue.main.async { [weak self] in
            let resultText = [
                "fullName:",
                capturedId.fullName,
                "dateOfBirth:",
                capturedId.dateOfBirth?.utcDate.ISO8601Format(.iso8601Date(timeZone: .current)) ?? "",
                "documentNumber:",
                capturedId.documentNumber ?? "",
                "dateOfExpiry:",
                capturedId.dateOfExpiry?.utcDate.ISO8601Format(.iso8601Date(timeZone: .current)) ?? ""
            ].joined(separator: "\n")
            self?.openResultViewController(resultText: resultText)
        }
    }
    
    func idCapture(_ idCapture: IdCapture, didReject capturedId: CapturedId?, reason rejectionReason: RejectionReason) {
        print("didReject: \(String(describing: capturedId)), reason: \(rejectionReason)")
        
        idCapture.removeListener(self)
        if capturedId?.issuingCountry == .vietnam {
            // need to get back to the main thread for updating UI
            DispatchQueue.main.async { [weak self] in
                let errorText = "This ID is not accepted. Please try again with another document"
                self?.openResultViewController(resultText: errorText)
            }
        } else {
            // need to get back to the main thread for updating UI
            DispatchQueue.main.async { [weak self] in
                self?.showError()
            }
        }
    }
}
