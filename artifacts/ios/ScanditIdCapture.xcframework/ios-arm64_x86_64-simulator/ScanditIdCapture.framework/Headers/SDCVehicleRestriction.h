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
 * Added in version 6.8.0
 */
NS_SWIFT_NAME(VechicleRestriction)
SDC_EXPORTED_SYMBOL
@interface SDCVehicleRestriction : NSObject
/**
 * Added in version 6.8.0
 *
 * The category of motor vehicle the Driver’s License is valid for. Check the information printed on the Driver’s License for the list of valid codes.
 */
@property (nonatomic, nonnull, readonly) NSString *vehicleCode;
/**
 * Added in version 6.8.0
 *
 * The restriction that applies to the motor vehicle category. Check the information printed on the Driver’s License for the list of possible restrictions.
 */
@property (nonatomic, nonnull, readonly) NSString *vehicleRestriction;
/**
 * Added in version 6.8.0
 *
 * The date when this vehicle restriction starts to apply.
 */
@property (nonatomic, nonnull, readonly) SDCDateResult *dateOfIssue;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
