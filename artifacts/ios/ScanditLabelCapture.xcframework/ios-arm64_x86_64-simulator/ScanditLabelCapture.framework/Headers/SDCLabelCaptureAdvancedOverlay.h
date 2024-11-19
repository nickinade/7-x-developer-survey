/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <UIKit/UIKit.h>

#import <ScanditCaptureCore/ScanditCaptureCore.h>
#import <ScanditLabelCapture/ScanditLabelCapture.h>

@class SDCCapturedLabel;
@class SDCDataCaptureView;
@class SDCLabelCapture;
@protocol SDCLabelCaptureAdvancedOverlayDelegate;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.16.0
 *
 * An overlay for SDCDataCaptureView that allows anchoring a single user-provided View to each captured label.
 *
 * The provided view is visible on top of the camera preview as long as its captured label is, and during time it retains its relative position to it. This is useful when additional information should be provided to the captured label in real time. For instance, a user may overlay the price of an item or its expiration date for each corresponding label.
 *
 * To display the views, this overlay must be attached to a SDCDataCaptureView. This may be done either by creating it with overlayWithLabelCapture:forDataCaptureView: with a non-null view parameter or by passing this overlay to SDCDataCaptureView.addOverlay:.
 *
 * A user of this class may configure what view is displayed for the given label and the relative position between the two by implementing SDCLabelCaptureAdvancedOverlayDelegate.
 */
NS_SWIFT_NAME(LabelCaptureAdvancedOverlay)
SDC_EXPORTED_SYMBOL
@interface SDCLabelCaptureAdvancedOverlay : UIView <SDCDataCaptureOverlay>

/**
 * Added in version 6.16.0
 *
 * The delegate which is called whenever a view, an anchor point and an offset must be defined for a tracked SDCCapturedLabel.
 */
@property (nonatomic, weak, nullable) id<SDCLabelCaptureAdvancedOverlayDelegate> delegate;
/**
 * Added in version 6.16.0
 *
 * Whether to show scan area guides on top of the preview. This property is useful during development to visualize the current scan areas on screen. It is not meant to be used for production. By default this property is NO.
 */
@property (nonatomic, assign) BOOL shouldShowScanAreaGuides;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithFrame:(CGRect)frame NS_UNAVAILABLE;
- (instancetype)initWithCoder:(NSCoder *)decoder NS_UNAVAILABLE;

/**
 * Added in version 6.16.0
 *
 * Constructs a new overlay to visualize the process of label capture. When view is non-nil, the overlay is automatically added to the view. Otherwise, the overlay needs to be added through a call to SDCDataCaptureView.addOverlay:.
 */
+ (instancetype)overlayWithLabelCapture:(nonnull SDCLabelCapture *)labelCapture
                     forDataCaptureView:(nullable SDCDataCaptureView *)view
    NS_SWIFT_NAME(init(labelCapture:view:));

/**
 * Added in version 6.16.0
 *
 * Constructs a new label capture advanced overlay with the provided JSON serialization.
 *
 * For the overlay to be displayed on screen, it must be added to a SDCDataCaptureView.
 */
+ (nullable instancetype)labelCaptureAdvancedOverlayFromJSONString:(nonnull NSString *)JSONString
                                                              mode:(nonnull SDCLabelCapture *)mode
                                                             error:(NSError *_Nullable *_Nullable)error
    NS_SWIFT_NAME(init(jsonString:labelCapture:));

/**
 * Added in version 6.16.0
 *
 * Updates the overlay according to a JSON serialization.
 */
- (BOOL)updateFromJSONString:(nonnull NSString *)JSONString
                       error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.16.0
 *
 * The method can be called to change the view drawn for the given tracked label. Setting the view to nil will unset the view from the tracked label and will effectively remove it from the overlay.
 * This method is thread-safe, it can be called from any thread.
 * The view set via this method will take precedence over the one set via SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:viewForCapturedLabel:: in case a view is set before SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:viewForCapturedLabel: got called, no call to SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:viewForCapturedLabel: will happen.
 *
 * @remark The method no longer supports rendering any kind of images. For further details about this backwards incompatible change, contact support@scandit.com.
 */
- (void)setView:(nullable UIView *)view forCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;
/**
 * Added in version 6.16.0
 *
 * The method can be called to change the anchor point for the view associated with the given tracked label. This method is thread-safe, it can be called from any thread.
 * The anchor set via this method will take precedence over the one set via SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:anchorForCapturedLabel:: in case a view is set before SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:anchorForCapturedLabel: got called, no call to SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:anchorForCapturedLabel: will happen.
 */
- (void)setAnchor:(SDCAnchor)anchor forCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;
/**
 * Added in version 6.16.0
 *
 * The method can be called to change the offset for the view associated with the given tracked label. This method is thread-safe, it can be called from any thread.
 * The offset set via this method will take precedence over the one set via SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:offsetForCapturedLabel:: in case a view is set before SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:offsetForCapturedLabel: got called, no call to SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:offsetForCapturedLabel: will happen.
 * If the SDCMeasureUnit of the offset is SDCMeasureUnitFraction, the offset is calculated relative to view’s dimensions.
 */
- (void)setOffset:(SDCPointWithUnit)offset
    forCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

/**
 * Added in version 6.17.0
 *
 * The method can be called to change the view drawn for the given tracked field of the captured label. Setting the view to nil will unset the view from the tracked field of the captured label and will effectively remove it from the overlay.
 * This method is thread-safe, it can be called from any thread.
 * The view set via this method will take precedence over the one set via SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:viewForField:ofCapturedLabel:: in case a view is set before SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:viewForField:ofCapturedLabel: got called, no call to SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:viewForField:ofCapturedLabel: will happen.
 *
 * @remark Requires a special license key to support rendering any kind of images since this feature is available only in limited countries. Please contact support@scandit.com for details
 */
- (void)setView:(nullable UIView *)view
           forField:(nonnull SDCLabelField *)field
    ofCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;
/**
 * Added in version 6.17.0
 *
 * The method can be called to change the anchor point for the view associated with the given tracked field of the captured label. This method is thread-safe, it can be called from any thread.
 * The anchor set via this method will take precedence over the one set via SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:anchorForField:ofCapturedLabel:: in case a view is set before SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:anchorForField:ofCapturedLabel: got called, no call to SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:anchorForField:ofCapturedLabel: will happen.
 */
- (void)setAnchor:(SDCAnchor)anchor
           forField:(nonnull SDCLabelField *)field
    ofCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;
/**
 * Added in version 6.17.0
 *
 * The method can be called to change the offset for the view associated with the given tracked field of the captured label. This method is thread-safe, it can be called from any thread.
 * The offset set via this method will take precedence over the one set via SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:offsetForField:ofCapturedLabel:: in case a view is set before SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:offsetForField:ofCapturedLabel: got called, no call to SDCLabelCaptureAdvancedOverlayDelegate.labelCaptureAdvancedOverlay:offsetForField:ofCapturedLabel: will happen.
 * If the SDCMeasureUnit of the offset is SDCMeasureUnitFraction, the offset is calculated relative to view’s dimensions.
 */
- (void)setOffset:(SDCPointWithUnit)offset
           forField:(nonnull SDCLabelField *)field
    ofCapturedLabel:(nonnull SDCCapturedLabel *)capturedLabel;

/**
 * Added in version 6.16.0
 *
 * Clears all the views for the currently tracked labels from this overlay.
 * This method is thread-safe, it can be called from any thread.
 */
- (void)clearTrackedCapturedLabelViews;

@end

NS_ASSUME_NONNULL_END
