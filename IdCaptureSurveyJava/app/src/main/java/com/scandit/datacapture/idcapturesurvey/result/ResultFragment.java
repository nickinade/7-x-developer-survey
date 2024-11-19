package com.scandit.datacapture.idcapturesurvey.result;


import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentManager;

import com.scandit.datacapture.idcapturesurvey.scan.ScanFragment;
import com.scandit.datacapture.idcapturesurveyjava.databinding.FragmentResultBinding;


public class ResultFragment extends Fragment {

    public static String TAG = "result_fragment";

    @NonNull
    public static ResultFragment create() {
        return new ResultFragment();
    }

    private FragmentResultBinding binding;

    @Nullable
    @Override
    public View onCreateView(@NonNull LayoutInflater inflater, @Nullable ViewGroup container,
                             @Nullable Bundle savedInstanceState) {
        binding = FragmentResultBinding.inflate(inflater, container, false);
        return binding.getRoot();
    }

    @Override
    public void onViewCreated(@NonNull View view, @Nullable Bundle savedInstanceState) {
        super.onViewCreated(view, savedInstanceState);

        binding.restartButton.setOnClickListener(v -> restartFlow());
    }

    private void restartFlow() {
        requireActivity().getSupportFragmentManager()
                .popBackStack(ScanFragment.TAG, FragmentManager.POP_BACK_STACK_INCLUSIVE);
    }
}
