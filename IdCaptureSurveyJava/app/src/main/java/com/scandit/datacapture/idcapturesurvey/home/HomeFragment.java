package com.scandit.datacapture.idcapturesurvey.home;


import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;

import com.scandit.datacapture.idcapturesurvey.navigation.NavigationUtils;
import com.scandit.datacapture.idcapturesurvey.scan.ScanFragment;
import com.scandit.datacapture.idcapturesurveyjava.databinding.FragmentHomeBinding;


public class HomeFragment extends Fragment {

    private FragmentHomeBinding binding;

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container,
                             @Nullable Bundle savedInstanceState) {
        binding = FragmentHomeBinding.inflate(inflater, container, false);
        return binding.getRoot();
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);

        binding.scanButton.setOnClickListener(v -> navigateToScanner());
    }

    private void navigateToScanner() {
        NavigationUtils.navigateToFragment(requireActivity(), ScanFragment.create(),
                ScanFragment.TAG);
    }
}
