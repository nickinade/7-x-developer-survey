/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>

@class SDCCapturedLabel;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.0.0
 *
 * Holds the ongoing state of capturing data contained in one or more labels. An instance of this class is passed to SDCLabelCaptureListener.labelCapture:didUpdateSession:frameData: when new labels are captured, or existing labels are updated or lost.
 *
 * The capture session should only be accessed from within labelCapture:didUpdateSession:frameData: to which it is provided as an argument. It is not safe to be accessed from anywhere else since it may be concurrently modified.
 *
 * Specifically no reference to capturedLabels should be kept and traversed outside of labelCapture:didUpdateSession:frameData:. Instead a copy of the list should be made to avoid concurrent modification. The individual labels can be referenced without copying as they are not further modified.
 */
NS_SWIFT_NAME(LabelCaptureSession)
SDC_EXPORTED_SYMBOL
@interface SDCLabelCaptureSession : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.0.0
 *
 * The identifier of the last processed frame.
 */
@property (nonatomic, readonly) NSInteger lastProcessedFrameId;
/**
 * Added in version 6.1.0
 *
 * The identifier of the current frame sequence.
 *
 * As long as there is no interruptions of frames coming from the camera, the frameSequenceId will stay the same, whereas the lastProcessedFrameId will be incremented for every processed frame.
 */
@property (nonatomic, readonly) NSInteger frameSequenceId;
/**
 * Added in version 6.0.0
 *
 * List of currently captured labels.
 */
@property (nonatomic, nonnull, readonly) NSArray<SDCCapturedLabel *> *capturedLabels;
/**
 * Added in version 6.4.0
 *
 * Returns the JSON representation of the label capture session.
 */
@property (nonatomic, nonnull, readonly) NSString *JSONString;

@end

NS_ASSUME_NONNULL_END
