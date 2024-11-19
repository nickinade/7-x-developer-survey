/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditLabelCapture/SDCBarcodeField.h>
#import <ScanditLabelCapture/SDCLabelFieldLocationType.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.21.0
 */
NS_SWIFT_NAME(CustomBarcode)
SDC_EXPORTED_SYMBOL
@interface SDCCustomBarcode : SDCBarcodeField

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.21.0
 */
- (instancetype)initWithName:(NSString *)name
           symbologySettings:(NSArray<SDCSymbologySettings *> *)symbologySettings;
/**
 * Added in version 6.21.0
 */
+ (instancetype)fieldWithName:(NSString *)name
            symbologySettings:(NSArray<SDCSymbologySettings *> *)symbologySettings;

/**
 * Added in version 6.21.0
 */
- (instancetype)initWithName:(NSString *)name symbologies:(NSSet<NSNumber *> *)symbologies;
/**
 * Added in version 6.21.0
 */
+ (instancetype)fieldWithName:(NSString *)name symbologies:(NSSet<NSNumber *> *)symbologies;

/**
 * Added in version 6.21.0
 */
- (instancetype)initWithName:(NSString *)name symbology:(SDCSymbology)symbology;
/**
 * Added in version 6.21.0
 */
+ (instancetype)fieldWithName:(NSString *)name symbology:(SDCSymbology)symbology;

/**
 * Added in version 6.21.0
 */
- (void)setLocationWithRect:(CGRect)rect NS_SWIFT_NAME(setLocation(rect:));
/**
 * Added in version 6.21.0
 */
- (void)setLocationWithLeft:(CGFloat)left
                        top:(CGFloat)top
                      right:(CGFloat)right
                     bottom:(CGFloat)bottom NS_SWIFT_NAME(setLocation(left:top:right:bottom:));
/**
 * Added in version 6.21.0
 */
- (void)setLocationWithType:(SDCLabelFieldLocationType)location NS_SWIFT_NAME(setLocation(type:));

/**
 * Added in version 6.21.0
 */
@property (nonatomic, copy, nullable) NSArray<NSString *> *dataTypePatterns;

@end

NS_ASSUME_NONNULL_END
