package com.scandit.datacapture.idcapturesurvey.scan

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import com.scandit.datacapture.idcapturesurvey.databinding.FragmentScanBinding
import com.scandit.datacapture.idcapturesurvey.navigation.navigateToFragment
import com.scandit.datacapture.idcapturesurvey.result.ResultFragment

class ScanFragment private constructor(): Fragment() {

    private lateinit var binding: FragmentScanBinding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?,
    ): View = FragmentScanBinding.inflate(inflater, container, false)
        .also { binding = it }
        .root

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        setUpIdCapture()
    }

    override fun onResume() {
        super.onResume()

        // TODO: Switch camera on to start streaming frames
        // TODO: Enable IdCapture
    }

    override fun onPause() {
        super.onPause()

        // TODO: Switch camera off to stop streaming frames
        // TODO: Disable IdCapture
    }

    private fun setUpIdCapture() {
        // TODO: Initialize Scandit SDK and ID Capture
    }

    private fun navigateToResult() {
        requireActivity().navigateToFragment(ResultFragment.create(), ResultFragment.TAG)
    }

    companion object {
        const val TAG = "scan_fragment"

        fun create() = ScanFragment()
    }
}