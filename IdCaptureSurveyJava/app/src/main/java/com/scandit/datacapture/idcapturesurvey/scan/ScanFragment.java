package com.scandit.datacapture.idcapturesurvey.scan;


import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.scandit.datacapture.idcapturesurvey.navigation.NavigationUtils;
import com.scandit.datacapture.idcapturesurvey.result.ResultFragment;
import com.scandit.datacapture.idcapturesurveyjava.databinding.FragmentScanBinding;


public class ScanFragment extends Fragment {

    public static String TAG = "scan_fragment";

    @NonNull
    public static ScanFragment create() {
        return new ScanFragment();
    }

    private FragmentScanBinding binding;

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container,
                             @Nullable Bundle savedInstanceState) {
        binding = FragmentScanBinding.inflate(inflater, container, false);
        return binding.getRoot();
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);

        setUpIdCapture();
    }

    @Override
    public void onResume() {
        super.onResume();

        // TODO: Switch camera on to start streaming frames
        // TODO: Enable IdCapture
    }

    @Override
    public void onPause() {
        super.onPause();

        // TODO: Switch camera off to stop streaming frames
        // TODO: Disable IdCapture
    }

    private void setUpIdCapture() {
        // TODO: Initialize Scandit SDK and ID Capture
    }

    private void navigateToResult() {
        NavigationUtils.navigateToFragment(requireActivity(), ResultFragment.create(),
                ResultFragment.TAG);
    }
}
