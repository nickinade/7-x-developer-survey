/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

/**
 * Added in version 6.5.0
 *
 * This enum class is used to specify what documents can be scanned in ID Capture. Documents are set in IdCaptureSettings.SupportedDocuments method.
 */
typedef NS_OPTIONS(NSUInteger, SDCIdDocumentType) {
/**
     * Added in version 6.5.0
     *
     * Allows to scan the front page of Driver License document. The result would be of type SDCVizResult.
     */
    SDCIdDocumentTypeDLVIZ NS_SWIFT_NAME(dlVIZ) = 1 << 0,
/**
     * Added in version 6.6.0
     *
     * Allows to scan back page of AAMVA Driver License documents that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeAAMVABarcode = 1 << 1,
/**
     * Added in version 6.5.0
     *
     * Allows to scan MRZ zone of the visa card. The result would be of type SDCMrzResult.
     */
    SDCIdDocumentTypeVisaMRZ = 1 << 2,
/**
     * Added in version 6.5.0
     *
     * Allows to scan MRZ zone of the passport. The result would be of type SDCMrzResult.
     */
    SDCIdDocumentTypePassportMRZ = 1 << 3,
/**
     * Added in version 6.5.0
     *
     * Allows to scan MRZ zone of the Swiss driver’s license. The result would be of type SDCMrzResult.
     */
    SDCIdDocumentTypeSwissDLMRZ NS_SWIFT_NAME(swissDLMRZ) = 1 << 4,
/**
     * Added in version 6.5.0
     *
     * Allows to scan MRZ zone of ID card. The result would be of type SDCMrzResult.
     */
    SDCIdDocumentTypeIdCardMRZ NS_SWIFT_NAME(idCardMRZ) = 1 << 5,
/**
     * Added in version 6.5.0
     *
     * Allows to scan ID documents. The result would be of type SDCVizResult.
     */
    SDCIdDocumentTypeIdCardVIZ NS_SWIFT_NAME(idCardVIZ) = 1 << 6,
/**
     * Added in version 6.5.0
     *
     * Allows to scan back page of US Uniformed Services documents that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeUSUSIdBarcode = 1 << 7,
/**
     * Added in version 6.8.0
     *
     * Allows to scan back page of Colombia ID (Cédula de Ciudadanía) that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeColombiaIdBarcode = 1 << 8,
/**
     * Added in version 6.8.0
     *
     * Allows to scan back page of Argentina ID (Documento Nacional de Identidad) that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeArgentinaIdBarcode = 1 << 9,
/**
     * Added in version 6.8.0
     *
     * Allows to scan back page of South Africa Driver’s License that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeSouthAfricaDLBarcode = 1 << 10,
/**
     * Added in version 6.8.0
     *
     * Allows to scan back page of South Africa Smart ID Card that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeSouthAfricaIdBarcode = 1 << 11,
/**
     * Added in version 6.13.0
     *
     * Allows to scan back page of Colombia Driver’s License (Licencia de Conducción) that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeColombiaDlBarcode = 1 << 12,
/**
     * Added in version 6.14.0
     *
     * Allows to scan MRZ zone of Chinese Mainland Travel Permits. The result would be of type id.ChinaMainlandTravelPermitMrzResult.
     */
    SDCIdDocumentTypeChinaMainlandTravelPermitMRZ = 1 << 13,
/**
     * Added in version 6.14.0
     *
     * Allows to capture information from a Machine Readable Zone (MRZ) of an Exit-Entry Permit for Travelling to and from Hong Kong and Macau (往来港澳通行证) or an Exit-Entry Permit for Travelling to and from Taiwan (往来台灣通行证) issued by People’s Republic of China. The result would be of type id.ChinaExitEntryPermitMrzResult.
     */
    SDCIdDocumentTypeChinaExitEntryPermitMRZ = 1 << 14,
/**
     * Added in version 6.16.0
     *
     * Allows capture of information from a Machine Readable Zone (MRZ) of the back of a One-Way Permit to Hong Kong/Macau issued by the People’s Republic of China. The result would be of type id.ChinaOneWayPermitBackMrzResult.
     */
    SDCIdDocumentTypeChinaOneWayPermitBackMRZ = 1 << 15,
/**
     * Added in version 6.16.0
     *
     * Allows capture of information from a Machine Readable Zone (MRZ) of the front of a One-Way Permit to Hong Kong/Macau issued by the People’s Republic of China. The result would be of type id.ChinaOneWayPermitFrontMrzResult.
     */
    SDCIdDocumentTypeChinaOneWayPermitFrontMRZ = 1 << 16,
/**
     * Added in version 6.16.0
     *
     * Allows capture of information from a Machine Readable Zone (MRZ) of the back of an APEC (Asia-Pacific Economic Cooperation) Business Travel Card. The result would be of type id.ApecBusinessTravelCardMrzResult.
     */
    SDCIdDocumentTypeApecBusinessTravelCardMRZ = 1 << 17,
/**
     * Added in version 6.18.0
     *
     * Allows capture of information from both the Visual Inspection Zone (VIZ) and the Machine Readable Zone (MRZ) of a passport. The result would be of type SDCVizResult and SDCMrzResult.
     */
    SDCIdDocumentTypePassportVIZ = 1 << 18,
/**
     * Added in version 6.18.0
     *
     * Allows to scan barcode on Common Access Card that contains PDF417 with the data. The result would be of type SDCBarcodeResult.
     */
    SDCIdDocumentTypeCommonAccessCardBarcode = 1 << 19,
/**
     * Added in version 6.25.0
     *
     * Allows capture of information from the Visual Inspection Zone (VIZ) of a Health Insurance Card. The result would be of type SDCVizResult.
     */
    SDCIdDocumentTypeHealthInsuranceCardVIZ = 1 << 20,
} NS_SWIFT_NAME(IdDocumentType);

/**
 * Added in version 6.10.0
 *
 * Returns all document types that can be scanned in ID Capture.
 */
SDC_EXTERN NSArray<NSNumber *> *_Nonnull SDCAllIdDocumentTypes(void);
