/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <ScanditCaptureCore/ScanditCaptureCore.h>
#import <ScanditIdCapture/SDCIdCaptureDocument.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 7.0.0
 *
 * ID card identification document.
 */
NS_SWIFT_NAME(IdCard)
SDC_EXPORTED_SYMBOL
@interface SDCIdCard : SDCIdCaptureDocument

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 7.0.0
 *
 * Creates a new SDCIdCard instance.
 */
+ (instancetype)documentWithRegion:(SDCIdCaptureRegion)region;
/**
 * Added in version 7.0.0
 *
 * Creates a new SDCIdCard instance.
 */
- (instancetype)initWithRegion:(SDCIdCaptureRegion)region;

@end

NS_ASSUME_NONNULL_END
