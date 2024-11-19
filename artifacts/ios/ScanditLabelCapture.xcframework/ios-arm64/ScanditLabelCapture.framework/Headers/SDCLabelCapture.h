/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditCaptureCore/SDCDataCaptureMode.h>

@class SDCLabelCaptureSettings;
@class SDCDataCaptureContext;
@class SDCCameraSettings;

NS_ASSUME_NONNULL_BEGIN

@protocol SDCLabelCaptureListener;

/**
 * Added in version 6.0.0
 *
 * Data capture mode to scan labels, e.g. groups of barcodes, or a combination of text and barcode in a fixed spatial arrangement.
 */
NS_SWIFT_NAME(LabelCapture)
SDC_EXPORTED_SYMBOL
@interface SDCLabelCapture : NSObject <SDCDataCaptureMode>

/**
 * Added in version 6.1.0
 *
 * Returns the recommended camera settings for use with label capture.
 */
@property (class, nonatomic, nonnull, readonly) SDCCameraSettings *recommendedCameraSettings;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.0.0
 *
 * Construct a new label capture mode with the provided context and settings. When the context is not nil, the capture mode is automatically added to the context.
 */
+ (instancetype)labelCaptureWithContext:(nullable SDCDataCaptureContext *)context
                               settings:(nonnull SDCLabelCaptureSettings *)settings;

/**
 * Added in version 6.0.0
 *
 * Asynchronously apply the new settings to label capture. If label capture is currently running, the task will complete when the next frame is processed, and will use the new settings for that frame. If label capture is currently not running, the task will complete as soon as the settings have been stored and won’t wait until the next frame is going to be processed.
 */
- (void)applySettings:(nonnull SDCLabelCaptureSettings *)settings
    completionHandler:(nullable void (^)(void))completionHandler;

/**
 * Added in version 6.0.0
 *
 * Adds the listener to this label capture instance to observe the label capture mode and get notified when a label or some of its fields got scanned.
 *
 * In case the same listener is already observing this instance, calling this method will not add the listener again. The listener is stored using a weak reference and must thus be retained by the caller for it to not go out of scope.
 */
- (void)addListener:(nonnull id<SDCLabelCaptureListener>)listener NS_SWIFT_NAME(addListener(_:));
/**
 * Added in version 6.0.0
 *
 * Removes a previously added listener from this label capture instance.
 *
 * In case the listener is not currently observing this instance, calling this method has no effect.
 */
- (void)removeListener:(nonnull id<SDCLabelCaptureListener>)listener
    NS_SWIFT_NAME(removeListener(_:));

/**
 * Added in version 6.0.0
 *
 * Implemented from SDCDataCaptureMode. See SDCDataCaptureMode.context.
 */
@property (nonatomic, nullable, readonly) SDCDataCaptureContext *context;
/**
 * Added in version 6.0.0
 *
 * Implemented from SDCDataCaptureMode. See SDCDataCaptureMode.enabled.
 */
@property (nonatomic, assign, getter=isEnabled) BOOL enabled;

/**
 * Added in version 6.4.0
 *
 * Construct a new label capture mode with the provided JSON serialization. The capture mode is automatically added to the context.
 */
+ (nullable instancetype)labelCaptureFromJSONString:(nonnull NSString *)JSONString
                                            context:(nonnull SDCDataCaptureContext *)context
                                              error:(NSError *_Nullable *_Nullable)error;
/**
 * Added in version 6.4.0
 *
 * Updates the mode according to a JSON serialization.
 */
- (BOOL)updateFromJSONString:(nonnull NSString *)JSONString
                       error:(NSError *_Nullable *_Nullable)error;

@end

NS_ASSUME_NONNULL_END
