package com.scandit.datacapture.idcapturesurvey.home

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import com.scandit.datacapture.idcapturesurvey.databinding.FragmentHomeBinding
import com.scandit.datacapture.idcapturesurvey.navigation.navigateToFragment
import com.scandit.datacapture.idcapturesurvey.scan.ScanFragment

class HomeFragment : Fragment() {

    private lateinit var binding: FragmentHomeBinding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?,
    ): View = FragmentHomeBinding.inflate(inflater, container, false)
        .also { binding = it }
        .root

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        binding.scanButton.setOnClickListener {
            navigateToScanner()
        }
    }

    private fun navigateToScanner() {
        requireActivity().navigateToFragment(ScanFragment.create(), ScanFragment.TAG)
    }
}