/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

@class SDCDateResult;

/**
 * Added in version 6.25.0
 */
NS_SWIFT_NAME(DrivingLicenseCategory)
SDC_EXPORTED_SYMBOL
@interface SDCDrivingLicenseCategory : NSObject

/**
 * Added in version 6.25.0
 *
 * Driver’s license code representing type of vehicle.
 */
@property (nonatomic, nonnull, readonly) NSString *code;
/**
 * Added in version 6.25.0
 *
 * The date of issue for the accompanying driver’s license code.
 */
@property (nonatomic, nullable, readonly) SDCDateResult *dateOfIssue;
/**
 * Added in version 6.25.0
 *
 * The date of expiry for the accompanying driver’s license code.
 */
@property (nonatomic, nullable, readonly) SDCDateResult *dateOfExpiry;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
