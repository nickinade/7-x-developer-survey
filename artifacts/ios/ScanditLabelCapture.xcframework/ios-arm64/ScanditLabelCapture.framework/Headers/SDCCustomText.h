/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditLabelCapture/SDCTextField.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.21.0
 */
NS_SWIFT_NAME(CustomText)
SDC_EXPORTED_SYMBOL
@interface SDCCustomText : SDCTextField

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
