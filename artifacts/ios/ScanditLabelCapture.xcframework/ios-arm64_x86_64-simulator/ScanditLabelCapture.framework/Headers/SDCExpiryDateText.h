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
NS_SWIFT_NAME(ExpiryDateText)
SDC_EXPORTED_SYMBOL
@interface SDCExpiryDateText : SDCTextField

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

@end

NS_ASSUME_NONNULL_END
