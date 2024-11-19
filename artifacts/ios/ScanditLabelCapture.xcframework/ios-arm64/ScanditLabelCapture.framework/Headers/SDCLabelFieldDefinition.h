/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditLabelCapture/SDCLabelFieldLocationType.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.21.0
 */
NS_SWIFT_NAME(LabelFieldDefinition)
SDC_EXPORTED_SYMBOL
@interface SDCLabelFieldDefinition : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.21.0
 */
@property (nonatomic, nonnull, readonly) NSString *name;
/**
 * Added in version 6.21.0
 */
@property (nonatomic, copy, nonnull) NSArray<NSString *> *patterns;
/**
 * Added in version 6.21.0
 */
@property (nonatomic, assign) BOOL optional;
/**
 * Added in version 6.21.0
 */
@property (nonatomic, copy) NSDictionary *hiddenProperties;

/**
 * Added in version 6.21.0
 */
- (void)setPattern:(NSString *)pattern;

@end

NS_ASSUME_NONNULL_END
