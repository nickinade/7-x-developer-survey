/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <ScanditLabelCapture/SDCBarcodeField.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.21.0
 */
NS_SWIFT_NAME(IMEITwoBarcode)
SDC_EXPORTED_SYMBOL
@interface SDCIMEITwoBarcode : SDCBarcodeField

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.21.0
 */
- (instancetype)initWithName:(NSString *)name;
/**
 * Added in version 6.21.0
 */
+ (instancetype)fieldWithName:(NSString *)name;

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

@end

NS_ASSUME_NONNULL_END
