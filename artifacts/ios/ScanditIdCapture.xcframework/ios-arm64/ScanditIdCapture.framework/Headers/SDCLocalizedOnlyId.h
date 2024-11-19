/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.0.0
 *
 * Polygon represented by 4 corners.
 */
struct SDCQuadrilateral;

/**
 * Added in version 6.10.0
 *
 * An information about a personal identification document or its part localized within a frame. A document or its part is considered localized when it’s detected in a frame, but its data is not yet extracted.
 */
NS_SWIFT_NAME(LocalizedOnlyId)
SDC_EXPORTED_SYMBOL
@interface SDCLocalizedOnlyId : NSObject

/**
 * Added in version 6.10.0
 *
 * The location of a document or its part within the frame.
 */
@property (nonatomic, readonly) SDCQuadrilateral location;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
