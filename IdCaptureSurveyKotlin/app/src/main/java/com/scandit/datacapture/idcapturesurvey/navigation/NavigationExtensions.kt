package com.scandit.datacapture.idcapturesurvey.navigation

import androidx.fragment.app.Fragment
import androidx.fragment.app.FragmentActivity
import com.scandit.datacapture.idcapturesurvey.R


fun FragmentActivity.navigateToFragment(fragment: Fragment, tag: String) {
    supportFragmentManager.beginTransaction()
        .replace(R.id.scan_fragment_container, fragment, tag)
        .addToBackStack(tag)
        .commit()
}