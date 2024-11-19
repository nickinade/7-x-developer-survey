/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditCaptureCore/SDCQuadrilateral.h>

@class SDCLabelFieldDefinition;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.21.0
 */
NS_SWIFT_NAME(LabelDefinition)
SDC_EXPORTED_SYMBOL
@interface SDCLabelDefinition : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.21.0
 */
- (instancetype)initWithName:(nonnull NSString *)name
                      fields:(nullable NSArray<SDCLabelFieldDefinition *> *)fields;
/**
 * Added in version 6.21.0
 */
+ (instancetype)definitionWithName:(nonnull NSString *)name
                            fields:(nullable NSArray<SDCLabelFieldDefinition *> *)fields;

/**
 * Added in version 6.20.0
 */
- (void)addField:(SDCLabelFieldDefinition *)field;
/**
 * Added in version 6.20.0
 */
- (void)addFields:(NSArray<SDCLabelFieldDefinition *> *)fields;

/**
 * Added in version 6.21.0
 */
@property (nonatomic, copy) NSDictionary *hiddenProperties;
/**
 * Added in version 6.21.0
 */
@property (nonatomic, readonly) NSArray<SDCLabelFieldDefinition *> *fields;
/**
 * Added in version 6.21.0
 */
@property (nonatomic, nonnull, readonly) NSString *name;

@end

NS_ASSUME_NONNULL_END
