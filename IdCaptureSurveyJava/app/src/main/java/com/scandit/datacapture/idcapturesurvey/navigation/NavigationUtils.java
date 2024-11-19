package com.scandit.datacapture.idcapturesurvey.navigation;

import androidx.fragment.app.Fragment;
import androidx.fragment.app.FragmentActivity;

import com.scandit.datacapture.idcapturesurveyjava.R;

public final class NavigationUtils {
    public static void navigateToFragment(FragmentActivity activity, Fragment fragment, String tag) {
        activity.getSupportFragmentManager().beginTransaction()
                .replace(R.id.scan_fragment_container, fragment, tag)
                .addToBackStack(tag)
                .commit();
    }
}
