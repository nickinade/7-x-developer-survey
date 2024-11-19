/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

@class SDCFeedback;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.19.0
 *
 * Determines what feedback (vibration, sound) should be emitted during the ID Capture process.
 *
 * The feedback is specified for each SDCIdCapture instance separately and can be changed
 * through the SDCIdCapture.feedback property by either modifying an existing instance of this class, or by assigning a new one.
 */
NS_SWIFT_NAME(IdCaptureFeedback)
SDC_EXPORTED_SYMBOL
@interface SDCIdCaptureFeedback : NSObject

/**
 * Added in version 6.21.0
 *
 * Construct a new id capture feedback with the provided JSON serialization.
 */
+ (nullable instancetype)feedbackFromJSON:(nonnull SDCJSONValue *)JSONValue
                                    error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.19.0
 *
 * Returns an id capture feedback with default configuration:
 *
 *   • default beep sound is loaded,
 *
 *   • beeping for the id captured event is enabled,
 *
 *   • vibration for the id captured event is enabled,
 *
 *   • beeping for the id rejected event is disabled,
 *
 *   • vibration for the id rejected event is disabled,
 *
 *   • beeping for the id capture timeout event is disabled,
 *
 *   • vibration for the id capture timeout event is disabled.
 */
@property (class, nonatomic, readonly) SDCIdCaptureFeedback *defaultFeedback;
/**
 * Added in version 6.19.0
 *
 * Returns the default success sound
 */
@property (class, nonatomic, readonly) SDCSound *defaultSuccessSound;
/**
 * Added in version 6.19.0
 *
 * Returns the default failure sound
 */
@property (class, nonatomic, readonly) SDCSound *defaultFailureSound;

/**
 * Added in version 6.19.0
 *
 * A feedback that is emitted when SDCIdCaptureListener.idCapture:didCapture: event is triggered.
 */
@property (nonatomic, strong, nonnull) SDCFeedback *idCaptured;
/**
 * Added in version 6.19.0
 *
 * A feedback that is emitted when SDCIdCaptureListener.idCapture:didReject:reason: event is triggered.
 */
@property (nonatomic, strong, nonnull) SDCFeedback *idRejected;

/**
 * Added in version 6.21.0
 *
 * Returns the JSON representation of the feedback.
 */
@property (nonatomic, nonnull, readonly) NSString *JSONString;

@end

NS_ASSUME_NONNULL_END
