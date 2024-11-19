/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditLabelCapture/SDCLabelFieldDefinition.h>

@class SDCSymbologySettings;
typedef NS_CLOSED_ENUM(NSUInteger, SDCSymbology);

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.20.0
 */
NS_SWIFT_NAME(BarcodeField)
SDC_EXPORTED_SYMBOL
@interface SDCBarcodeField : SDCLabelFieldDefinition

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.21.0
 */
@property (nonatomic, nonnull, readonly) NSArray<SDCSymbologySettings *> *symbologySettings;

@end

NS_ASSUME_NONNULL_END
