/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditCaptureCore/SDCDataCaptureMode.h>

@class SDCLabelCaptureSession;
@class SDCLabelCapture;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.0.0
 *
 * Protocol to be implemented by listeners that want to observe a label capture mode and get informed whenever new labels have been captured, existing labels have been updated or lost.
 */
NS_SWIFT_NAME(LabelCaptureListener)
@protocol SDCLabelCaptureListener <NSObject>

@required

/**
 * Added in version 6.0.0
 *
 * Invoked after label capture has completed to process a frame. The session contains a list of the currently captured labels. The list may be empty in case no label is currently present.
 */
- (void)labelCapture:(SDCLabelCapture *)labelCapture
    didUpdateSession:(SDCLabelCaptureSession *)session
           frameData:(id<SDCFrameData>)frameData;

@optional

/**
 * Added in version 6.0.0
 *
 * Invoked when the listener starts observing the label capture instance.
 */
- (void)didStartObservingLabelCapture:(SDCLabelCapture *)labelCapture;

/**
 * Added in version 6.0.0
 *
 * Invoked when the listener stops observing the label capture instance.
 */
- (void)didStopObservingLabelCapture:(SDCLabelCapture *)labelCapture;

@end

NS_ASSUME_NONNULL_END
