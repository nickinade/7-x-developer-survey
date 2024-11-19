/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <ScanditCaptureCore/ScanditCaptureCore.h>

@class UIView;
@class SDCLabelCaptureAdvancedOverlay;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.16.0
 */
NS_SWIFT_NAME(LabelCaptureAdvancedOverlayDelegate)
@protocol SDCLabelCaptureAdvancedOverlayDelegate <NSObject>

/**
 * Added in version 6.16.0
 *
 * View to be drawn corresponding to the given SDCCapturedLabel.
 * This method will be called before labelCaptureAdvancedOverlay:anchorForCapturedLabel: and labelCaptureAdvancedOverlay:offsetForCapturedLabel:.
 * Called from the main thread.
 * Beware that this view can be overridden with SDCLabelCaptureAdvancedOverlay.setView:forCapturedLabel: method.
 * This method will only be called for new tracked labels that do not have a view yet, e.g. a view set by a call to SDCLabelCaptureAdvancedOverlay.setView:forCapturedLabel:.
 *
 * @remark The method no longer supports rendering any kind of images. For further details about this backwards incompatible change, contact support@scandit.com.
 */
- (nullable UIView *)labelCaptureAdvancedOverlay:(nonnull SDCLabelCaptureAdvancedOverlay *)overlay
                            viewForCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

/**
 * Added in version 6.16.0
 *
 * Anchor point that should be used for the view corresponding to the given SDCCapturedLabel.
 * This method will be called after labelCaptureAdvancedOverlay:viewForCapturedLabel: and before labelCaptureAdvancedOverlay:offsetForCapturedLabel:.
 * Called from the main thread.
 * Beware that this anchor can be overridden with SDCLabelCaptureAdvancedOverlay.setAnchor:forCapturedLabel: method.
 * This method will only be called for new tracked labels that do not have an anchor yet, e.g. an anchor set by a call to SDCLabelCaptureAdvancedOverlay.setAnchor:forCapturedLabel:.
 */
- (SDCAnchor)labelCaptureAdvancedOverlay:(nonnull SDCLabelCaptureAdvancedOverlay *)overlay
                  anchorForCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

/**
 * Added in version 6.16.0
 *
 * Offset to be set to the view corresponding to the given SDCCapturedLabel. The offset is relative to the anchor point of the tracked label.
 * This method will be called after labelCaptureAdvancedOverlay:viewForCapturedLabel: and labelCaptureAdvancedOverlay:anchorForCapturedLabel:.
 * Called from the main thread.
 * Beware that this offset can be overridden with SDCLabelCaptureAdvancedOverlay.setOffset:forCapturedLabel: method.
 * This method will only be called for new tracked labels that do not have an offset yet, e.g. an offset set by a call to SDCLabelCaptureAdvancedOverlay.setOffset:forCapturedLabel:.
 */
- (SDCPointWithUnit)labelCaptureAdvancedOverlay:(nonnull SDCLabelCaptureAdvancedOverlay *)overlay
                         offsetForCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

@optional
/**
 * Added in version 6.17.0
 *
 * View to be drawn corresponding to the given SDCLabelField.
 * This method will be called before labelCaptureAdvancedOverlay:anchorForField:ofCapturedLabel: and labelCaptureAdvancedOverlay:offsetForField:ofCapturedLabel:.
 * Called from the main thread.
 * Beware that this view can be overridden with SDCLabelCaptureAdvancedOverlay.setView:forField:ofCapturedLabel: method.
 * This method will only be called for new tracked fields that do not have a view yet, e.g. a view set by a call to SDCLabelCaptureAdvancedOverlay.setView:forField:ofCapturedLabel:.
 *
 * @remark Requires a special license key to support rendering any kind of images since this feature is available only in limited countries. Please contact support@scandit.com for details
 */
- (nullable UIView *)labelCaptureAdvancedOverlay:(nonnull SDCLabelCaptureAdvancedOverlay *)overlay
                                    viewForField:(nonnull SDCLabelField *)capturedField
                                 ofCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

@optional
/**
 * Added in version 6.17.0
 *
 * Anchor point that should be used for the view corresponding to the given SDCLabelField.
 * This method will be called after labelCaptureAdvancedOverlay:viewForField:ofCapturedLabel: and before labelCaptureAdvancedOverlay:offsetForField:ofCapturedLabel:.
 * Called from the main thread.
 * Beware that this anchor can be overridden with SDCLabelCaptureAdvancedOverlay.setAnchor:forField:ofCapturedLabel: method.
 * This method will only be called for new tracked fields that do not have an anchor yet, e.g. an anchor set by a call to SDCLabelCaptureAdvancedOverlay.setAnchor:forField:ofCapturedLabel:.
 */
- (SDCAnchor)labelCaptureAdvancedOverlay:(nonnull SDCLabelCaptureAdvancedOverlay *)overlay
                          anchorForField:(nonnull SDCLabelField *)capturedField
                         ofCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

@optional
/**
 * Added in version 6.17.0
 *
 * Offset to be set to the view corresponding to the given SDCLabelField. The offset is relative to the anchor point of the tracked field.
 * This method will be called after labelCaptureAdvancedOverlay:viewForField:ofCapturedLabel: and labelCaptureAdvancedOverlay:anchorForField:ofCapturedLabel:.
 * Called from the main thread.
 * Beware that this offset can be overridden with SDCLabelCaptureAdvancedOverlay.setOffset:forField:ofCapturedLabel: method.
 * This method will only be called for new tracked fields that do not have an offset yet, e.g. an offset set by a call to SDCLabelCaptureAdvancedOverlay.setOffset:forField:ofCapturedLabel:.
 */
- (SDCPointWithUnit)labelCaptureAdvancedOverlay:(nonnull SDCLabelCaptureAdvancedOverlay *)overlay
                                 offsetForField:(nonnull SDCLabelField *)capturedField
                                ofCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

@end

NS_ASSUME_NONNULL_END
