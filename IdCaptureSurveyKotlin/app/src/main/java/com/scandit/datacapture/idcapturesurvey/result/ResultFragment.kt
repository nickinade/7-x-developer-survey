package com.scandit.datacapture.idcapturesurvey.result

import android.os.Bundle
import android.view.LayoutInflater
import android.view.View
import android.view.ViewGroup
import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentManager
import com.scandit.datacapture.idcapturesurvey.databinding.FragmentResultBinding
import com.scandit.datacapture.idcapturesurvey.scan.ScanFragment

class ResultFragment : Fragment() {

    private lateinit var binding: FragmentResultBinding

    override fun onCreateView(
        inflater: LayoutInflater, container: ViewGroup?, savedInstanceState: Bundle?,
    ): View = FragmentResultBinding.inflate(inflater, container, false)
        .also { binding = it }
        .root

    override fun onViewCreated(view: View, savedInstanceState: Bundle?) {
        super.onViewCreated(view, savedInstanceState)

        binding.restartButton.setOnClickListener {
            restartFlow()
        }
    }

    private fun restartFlow() {
        requireActivity().supportFragmentManager.popBackStack(
            ScanFragment.TAG, FragmentManager.POP_BACK_STACK_INCLUSIVE
        )
    }

    companion object {
        const val TAG = "result_fragment"

        fun create() = ResultFragment()
    }
}