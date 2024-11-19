/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

@class SDCDrivingLicenseCategory;

/**
 * Added in version 6.25.0
 */
NS_SWIFT_NAME(DrivingLicenseDetails)
SDC_EXPORTED_SYMBOL
@interface SDCDrivingLicenseDetails : NSObject

/**
 * Added in version 6.25.0
 *
 * Additional information from driver licenses such as vehicle categories.
 */
@property (nonatomic, readonly) NSArray<SDCDrivingLicenseCategory *> *drivingLicenseCategories;
/**
 * Added in version 6.26.0
 *
 * The restrictions to driving privileges for the driver license owner.
 */
@property (nonatomic, nullable, readonly) NSString *restrictions;
/**
 * Added in version 6.26.0
 *
 * The additional privileges granted to the driver license owner.
 */
@property (nonatomic, nullable, readonly) NSString *endorsements;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
