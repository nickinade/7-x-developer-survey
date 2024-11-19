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
 *
 * The professional driving permit (PrDP) of the Driver’s License holder.
 */
NS_SWIFT_NAME(ProfessionalDrivingPermit)
SDC_EXPORTED_SYMBOL
@interface SDCProfessionalDrivingPermit : NSObject

/**
 * Added in version 6.8.0
 *
 * The categories of the permit. Check the information printed on the Driver’s License for the list of valid PrDP categories.
 */
@property (nonatomic, nonnull, readonly) NSArray<NSString *> *codes;
/**
 * Added in version 6.8.0
 *
 * The date when this permit expires.
 */
@property (nonatomic, nonnull, readonly) SDCDateResult *dateOfExpiry;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
