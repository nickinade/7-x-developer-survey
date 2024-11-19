/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

@class SDCDataCaptureOverlay;
@class SDCIdCapture;
@class SDCDataCaptureView;
@class SDCBrush;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.8.0
 *
 * The layout style of the SDCIdCaptureOverlay.
 */
typedef NS_CLOSED_ENUM(NSUInteger, SDCIdLayoutStyle) {
/**
     * Added in version 6.8.0
     *
     * Layout style with rounded corners.
     */
    SDCIdLayoutStyleRounded,
/**
     * Added in version 6.8.0
     *
     * Layout style with square corners.
     */
    SDCIdLayoutStyleSquare,
} NS_SWIFT_NAME(IdLayoutStyle);

/**
 * Added in version 6.8.0
 *
 * Serialize the layout style in a JSON string.
 *
 * Deprecated since version 6.26.0: This function will be removed in the future.
 */
SDC_EXTERN NSString *_Nonnull NSStringFromIdLayoutStyle(SDCIdLayoutStyle style) DEPRECATED_MSG_ATTRIBUTE("This function will be removed in the future") NS_SWIFT_NAME(getter:SDCIdLayoutStyle.jsonString(self:));
/**
 * Added in version 6.8.0
 *
 * Deserialize the layout style from a JSON string.
 *
 * Deprecated since version 6.26.0: This function will be removed in the future.
 */
SDC_EXTERN BOOL SDCIdLayoutStyleFromJSONString(NSString *_Nonnull JSONString,
                                               SDCIdLayoutStyle *_Nonnull style) DEPRECATED_MSG_ATTRIBUTE("This function will be removed in the future");

/**
 * Added in version 6.8.0
 *
 * The style of the lines drawn as part of the IdLayout.
 */
typedef NS_CLOSED_ENUM(NSUInteger, SDCIdLayoutLineStyle) {
/**
     * Added in version 6.8.0
     *
     * Draws lines with a width of 5 dips/points.
     */
    SDCIdLayoutLineStyleBold,
/**
     * Added in version 6.8.0
     *
     * Draws lines with a width of 3 dips/points.
     */
    SDCIdLayoutLineStyleLight,
} NS_SWIFT_NAME(IdLayoutLineStyle);

/**
 * Added in version 6.22.0
 *
 * Sets the position of the textual hints.
 */
typedef NS_CLOSED_ENUM(NSUInteger, SDCTextHintPosition) {
/**
     * Added in version 6.22.0
     *
     * Places the text hint above viewfinder.
     */
    SDCTextHintPositionAboveViewfinder,
/**
     * Added in version 6.22.0
     *
     * Places the text hint below viewfinder.
     */
    SDCTextHintPositionBelowViewfinder
} NS_SWIFT_NAME(TextHintPosition);

/**
 * Added in version 6.8.0
 *
 * Serialize the layout line style in a JSON string.
 *
 * Deprecated since version 6.26.0: This function will be removed in the future.
 */
SDC_EXTERN NSString *_Nonnull NSStringFromIdLayoutLineStyle(SDCIdLayoutLineStyle style) DEPRECATED_MSG_ATTRIBUTE("This function will be removed in the future") NS_SWIFT_NAME(getter:SDCIdLayoutLineStyle.jsonString(self:));
/**
 * Added in version 6.8.0
 *
 * Deserialize the layout line style from a JSON string.
 *
 * Deprecated since version 6.26.0: This function will be removed in the future.
 */
SDC_EXTERN BOOL SDCIdLayoutLineStyleFromJSONString(NSString *_Nonnull JSONString,
                                                   SDCIdLayoutLineStyle *_Nonnull style) DEPRECATED_MSG_ATTRIBUTE("This function will be removed in the future");

SDC_EXTERN NSString *_Nonnull NSStringFromTextHintPosition(SDCTextHintPosition position) DEPRECATED_MSG_ATTRIBUTE("This function will be removed in the future") NS_SWIFT_NAME(getter:SDCTextHintPosition.jsonString(self:));
SDC_EXTERN BOOL SDCTextHintPositionFromJSONString(NSString *_Nonnull JSONString,
        SDCTextHintPosition *_Nonnull position);

/**
 * Added in version 6.6.0
 *
 * Overlay that guides the user through the SDCIdCapture process.
 *
 * In order to display this overlay, add it to data capture view.
 *
 * This overlay shows a viewfinder, automatically selected based on IdCaptureSettings.AcceptedDocuments and IdCaptureSettings.Scanner, along with animations and textual hints, that allow the user to capture smoothly and avoid common pitfalls. It is designed to work out-of-the-box for a wide range of use-cases.
 *
 * You can tweak the look of the viewfinder by setting idLayoutStyle and idLayoutLineStyle. Additionally you can configure the brush used to highlight localized, captured, or rejected documents.
 *
 * You can translate the texts used by the viewfinder into various languages by adding adding string resources with the following ids to your app:
 *
 * Resource id
 *
 * Comment
 *
 * scandit_id_capture_camera_too_far
 *
 * Document cannot be captured, because the camera is too far.
 *
 * scandit_id_capture_document_partially_visible
 *
 * Document cannot be captured, because it’s only partially visible - either covered or not fully fitting the frame of the camera.
 *
 * scandit_id_capture_tap_shutter_to_scan
 *
 * Ask the user to tap the shutter button to let SDCIdCapture start capturing a document
 *
 * scandit_id_capture_looking_for_document
 *
 * Tell the user that SDCIdCapture is looking for a document to capture
 *
 * scandit_id_capture_hold_still
 *
 * Ask the user to hold still the device so that the document can be captured
 *
 * scandit_id_capture_show_document
 *
 * Ask the user to show a document, front of card capture scenario or multiple document types selected.
 *
 * scandit_id_capture_show_passport
 *
 * Ask the user to show the passport.
 *
 * scandit_id_capture_show_front_of_document
 *
 * Ask the user to show the front side of a document in the front & back capture scenario.
 *
 * scandit_id_capture_show_back_of_document
 *
 * Ask the user to show the back side of a document in the front & back capture scenario.
 *
 * scandit_id_capture_show_barcode_on_document
 *
 * Ask the user to show the barcode on a document, either when a barcode type is selected or the back side of a document in the front & back capture scenario contains only a barcode.
 *
 * scandit_id_capture_show_visa
 *
 * Ask the user to show the visa.
 *
 * The default texts can also be replaced with custom messages by calling setFrontSideTextHint: and setBackSideTextHint:. setFrontSideTextHint: replaces texts displayed asking the user for the front side of a document, in the front & back capture scenario, but also when only a single side or a part of a document is being captured. setBackSideTextHint: replaces texts displayed asking the user for the back side of the document in the front & back capture scenario. These methods take precedence over the texts set using string resources.
 */
NS_SWIFT_NAME(IdCaptureOverlay)
SDC_EXPORTED_SYMBOL
@interface SDCIdCaptureOverlay : NSObject <SDCDataCaptureOverlay>

/**
 * Added in version 6.8.0
 *
 * The ID layout style of the overlay. By default this is defaultIdLayoutStyle.
 */
@property (nonatomic, assign) SDCIdLayoutStyle idLayoutStyle;
/**
 * Added in version 6.8.0
 *
 * The ID layout line style. By default this is defaultIdLayoutLineStyle.
 */
@property (nonatomic, assign) SDCIdLayoutLineStyle idLayoutLineStyle;
/**
 * Added in version 6.22.0
 *
 * The text hint position of the overlay. By default this is SDCTextHintPositionAboveViewfinder.
 */
@property (nonatomic, assign) SDCTextHintPosition textHintPosition;
/**
 * Added in version 6.22.0
 *
 * Indicates whether text hints are shown or not. True by default.
 */
@property (nonatomic, assign) BOOL showTextHints;
/**
 * Added in version 6.10.0
 *
 * The default brush used to draw rectangular highlights around captured personal identification documents or their parts such as barcodes or Machine Readable Zones (MRZs). By default, the stroke of a highlight is 3dp white and the fill is transparent.
 */
@property (class, nonatomic, nonnull, readonly) SDCBrush *defaultCapturedBrush;
/**
 * Added in version 6.10.0
 *
 * The default brush used to draw rectangular highlights around localized personal identification documents or their parts such as barcodes or Machine Readable Zones (MRZs). A document or its part is considered localized when it’s detected in a frame, but its data is not yet extracted. By default, the fill of the highlight is white (alpha 50%) and the border is transparent.
 */
@property (class, nonatomic, nonnull, readonly) SDCBrush *defaultLocalizedBrush;
/**
 * Added in version 6.10.0
 *
 * The default brush used to draw rectangular highlights around personal identification documents or their parts (such as barcodes), which were detected in a frame, but rejected. For example, data encoded in a barcode may have an unsupported format. By default, the fill of the highlight is white (alpha 50%) and the border is transparent.
 */
@property (class, nonatomic, nonnull, readonly) SDCBrush *defaultRejectedBrush;
/**
 * Added in version 6.10.0
 *
 * The brush used to draw rectangular highlights around captured personal identification documents or their parts such as barcodes or Machine Readable Zones (MRZs). By default it equals defaultCapturedBrush.
 *
 * To disable highlights use SDCBrush.transparentBrush.
 */
@property (nonatomic, strong, nonnull) SDCBrush *capturedBrush;
/**
 * Added in version 6.10.0
 *
 * The brush used to draw rectangular highlights around localized personal identification documents or their parts such as barcodes or Machine Readable Zones (MRZs). A document or its part is considered localized when it’s detected in a frame, but its data is not yet extracted. By default it equals defaultLocalizedBrush.
 *
 * To disable highlights use SDCBrush.transparentBrush.
 */
@property (nonatomic, strong, nonnull) SDCBrush *localizedBrush;
/**
 * Added in version 6.10.0
 *
 * The brush used to draw rectangular highlights around personal identification documents or their parts (such as barcodes), which were detected in a frame but rejected. For example, data encoded in a barcode may have an unsupported format. By default it equals defaultRejectedBrush.
 *
 * To disable highlights use SDCBrush.transparentBrush.
 */
@property (nonatomic, strong, nonnull) SDCBrush *rejectedBrush;
/**
 * Added in version 6.14.0
 *
 * Returns the default value for the ID layout style of the overlay.
 */
@property (class, nonatomic, readonly) SDCIdLayoutStyle defaultIdLayoutStyle;
/**
 * Added in version 6.14.0
 *
 * Returns the default value for the ID layout line style of the overlay.
 */
@property (class, nonatomic, readonly) SDCIdLayoutLineStyle defaultIdLayoutLineStyle;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.6.0
 *
 * Constructs a new id capture overlay for the provided id capture instance. For the overlay to be displayed on screen, it must be added to a SDCDataCaptureView.
 */
+ (instancetype)overlayWithIdCapture:(nonnull SDCIdCapture *)idCapture
    NS_SWIFT_NAME(init(idCapture:));
;
/**
 * Added in version 6.6.0
 *
 * Constructs a new id capture overlay for the provided id capture instance. When passing a non-nil view instance, the overlay is automatically added to the view.
 */
+ (instancetype)overlayWithIdCapture:(nonnull SDCIdCapture *)idCapture
                  forDataCaptureView:(nullable SDCDataCaptureView *)view
    NS_SWIFT_NAME(init(idCapture:view:));

/**
 * Added in version 6.17.0
 *
 * Sets text for textual hint displayed when scanning the front of document.
 */
- (void)setFrontSideTextHint:(nonnull NSString *)text;
/**
 * Added in version 6.17.0
 *
 * Sets text for textual hint displayed when scanning the back of document.
 */
- (void)setBackSideTextHint:(nonnull NSString *)text;

@end

NS_ASSUME_NONNULL_END
