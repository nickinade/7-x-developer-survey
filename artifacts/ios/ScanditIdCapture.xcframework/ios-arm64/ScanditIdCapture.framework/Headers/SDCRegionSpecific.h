/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <ScanditCaptureCore/ScanditCaptureCore.h>
#import <ScanditIdCapture/SDCIdCaptureDocument.h>
#import <ScanditIdCapture/SDCRegionSpecificSubtype.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 7.0.0
 *
 * Region specific identification document.
 */
NS_SWIFT_NAME(RegionSpecific)
SDC_EXPORTED_SYMBOL
@interface SDCRegionSpecific : SDCIdCaptureDocument

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 7.0.0
 *
 * Creates a new SDCRegionSpecific instance.
 */
+ (instancetype)documentWithSubtype:(SDCRegionSpecificSubtype)subtype;
/**
 * Added in version 7.0.0
 *
 * Creates a new SDCRegionSpecific instance.
 */
- (instancetype)initWithSubtype:(SDCRegionSpecificSubtype)subtype;

/**
 * Added in version 7.0.0
 *
 * Enum SDCRegionSpecificSubtype indicating the region-specific subtype associated with this instance.
 */
@property (nonatomic, readonly) SDCRegionSpecificSubtype subtype;

@end

NS_ASSUME_NONNULL_END
