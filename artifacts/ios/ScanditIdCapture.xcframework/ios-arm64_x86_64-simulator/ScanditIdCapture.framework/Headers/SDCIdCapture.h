/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <ScanditCaptureCore/ScanditCaptureCore.h>
#import <ScanditIdCapture/SDCRejectionReason.h>

@class SDCDataCaptureMode;
@class SDCIdCaptureFeedback;
@class SDCIdCapture;
@class SDCCapturedId;
@class SDCIdCaptureSettings;
@class SDCCameraSettings;
@class SDCDataCaptureContext;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.5.0
 */
typedef NS_CLOSED_ENUM(NSInteger, SDCIdCaptureErrorCode) {
/**
     * Added in version 6.5.0
     *
     * Undefined error.
     */
    SDCIdCaptureErrorCodeUndefined,
/**
     * Added in version 6.5.0
     *
     * IdCapture Initialization error.
     */
    SDCIdCaptureErrorCodeInitializationError,
/**
     * Added in version 6.5.0
     *
     * Parsing document fields failed.
     */
    SDCIdCaptureErrorCodeParsingError
} NS_SWIFT_NAME(IdCaptureErrorCode);

/**
 * Added in version 6.2.0
 *
 * Delegate protocol for id capture.
 */
NS_SWIFT_NAME(IdCaptureListener)
@protocol SDCIdCaptureListener <NSObject>

@required

/**
 * Added in version 7.0.0
 *
 * Called whenever a document is recognized and parsed.
 */
- (void)idCapture:(SDCIdCapture *)idCapture didCapture:(SDCCapturedId *)capturedId;

/**
 * Added in version 7.0.0
 *
 * Called whenever a personal identification document or its part is recognized in a frame, but rejected. A document is rejected if (a) it’s not enabled in the settings, (b) it’s a barcode of a correct symbology or a Machine Readable Zone (MRZ), but the data is encoded in an unexpected/incorrect format, (c) it’s a voided document and “RejectVoidedIds” is enabled.
 */
- (void)idCapture:(SDCIdCapture *)idCapture
        didReject:(nullable SDCCapturedId *)capturedId
           reason:(SDCRejectionReason)rejectionReason;

@optional

/**
 * Added in version 6.2.0
 *
 * Called when the listener starts observing the id capture instance.
 */
- (void)didStartObservingIdCapture:(SDCIdCapture *)idCapture;

/**
 * Added in version 6.2.0
 *
 * Called when the listener stops observing the id capture instance.
 */
- (void)didStopObservingIdCapture:(SDCIdCapture *)idCapture;

@end

/**
 * Added in version 6.2.0
 */
NS_SWIFT_NAME(IdCapture)
SDC_EXPORTED_SYMBOL
@interface SDCIdCapture : NSObject <SDCDataCaptureMode>

/**
 * Added in version 6.2.0
 *
 * Creates the recommended camera settings to use with this mode.
 */
@property (class, nonatomic, nonnull, readonly) SDCCameraSettings *recommendedCameraSettings;
/**
 * Added in version 6.2.0
 *
 * Implemented from SDCDataCaptureMode. See SDCDataCaptureMode.enabled.
 */
@property (nonatomic, assign, getter=isEnabled) BOOL enabled;
/**
 * Added in version 6.2.0
 *
 * Implemented from SDCDataCaptureMode. See SDCDataCaptureMode.context.
 */
@property (nonatomic, nullable, readonly) SDCDataCaptureContext *context;
/**
 * Added in version 6.19.0
 *
 * Instance of SDCIdCaptureFeedback, determines what feedback (vibration, sound) should be emitted during the ID Capture process.
 */
@property (nonatomic, strong, nonnull) SDCIdCaptureFeedback *feedback;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.2.0
 *
 * Constructs a new SDCIdCapture with the provided settings. When dataCaptureContext is not nil, the mode is automatically added to it.
 */
+ (instancetype)idCaptureWithContext:(nullable SDCDataCaptureContext *)context
                            settings:(nonnull SDCIdCaptureSettings *)settings;

/**
 * Added in version 6.2.0
 *
 * Adds the listener to this id capture instance.
 *
 * In case the same listener is already observing this instance, calling this method will not add the listener again. The listener is stored using a weak reference and must thus be retained by the caller for it to not go out of scope.
 */
- (void)addListener:(nonnull id<SDCIdCaptureListener>)listener NS_SWIFT_NAME(addListener(_:));

/**
 * Added in version 6.2.0
 *
 * Removes listener from this id capture instance.
 *
 * In case the listener is not currently observing this instance, calling this method has no effect.
 */
- (void)removeListener:(nonnull id<SDCIdCaptureListener>)listener NS_SWIFT_NAME(removeListener(_:));

/**
 * Added in version 6.6.0
 *
 * Constructs a new SDCIdCapture with the provided JSON serialization. The capture mode is automatically added to the context.
 */
+ (nullable instancetype)idCaptureFromJSONString:(nonnull NSString *)JSONString
                                         context:(nonnull SDCDataCaptureContext *)context
                                           error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.6.0
 *
 * Resets the ongoing scanning process. This method can be used to abandon scanning the back side of a document.
 */
- (void)reset;
/**
 * Added in version 6.18.0
 *
 * Asynchronously Applies the new settings to the ID Capture. If the scanner is currently running, the task will complete when the next frame is processed, and will use the new settings for that frame. If the scanner is currently not running, the task will complete as soon as the settings have been stored and won’t wait until the next frame is going to be processed.
 */
- (void)applySettings:(nonnull SDCIdCaptureSettings *)settings;

@end

NS_ASSUME_NONNULL_END
