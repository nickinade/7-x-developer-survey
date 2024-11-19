/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>

NS_ASSUME_NONNULL_BEGIN

@protocol SDCLocationSelection;
@class SDCLabelDefinition;

extern NSString *_Nonnull const SDCLabelCaptureSettingsErrorDomain;

/**
 * Added in version 6.0.0
 */
NS_SWIFT_NAME(LabelCaptureSettings)
SDC_EXPORTED_SYMBOL
@interface SDCLabelCaptureSettings : NSObject <NSCopying>

/**
 * Added in version 6.9.0
 *
 * Defines the strategy with which to select one out of many visible labels. By default, this property is nil and label selection is disabled.
 *
 * Currently only SDCRectangularLocationSelection is supported.
 */
@property (nonatomic, strong, nullable) id<SDCLocationSelection> locationSelection;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.21.0
 *
 * Load the settings from an array of SDCLabelDefinition
 */
- (nullable instancetype)initWithLabelDefinitions:(NSArray<SDCLabelDefinition *> *)definitions
                                            error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.21.0
 *
 * Load the settings from an array of SDCLabelDefinition with optional hidden properties
 */
- (nullable instancetype)initWithLabelDefinitions:(NSArray<SDCLabelDefinition *> *)definitions
                                 hiddenProperties:(nullable NSDictionary *)dictionary
                                            error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.21.0
 *
 * Load the settings from an array of SDCLabelDefinition
 */
+ (nullable instancetype)settingsFromLabelDefinitions:(NSArray<SDCLabelDefinition *> *)definitions
                                                error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.21.0
 *
 * Load the settings from an array of SDCLabelDefinition with optional hidden properties
 */
+ (nullable instancetype)settingsFromLabelDefinitions:(NSArray<SDCLabelDefinition *> *)definitions
                                     hiddenProperties:(nullable NSDictionary *)dictionary
                                                error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.3.0
 *
 * Sets a property to the provided value. Use this method to set properties that are not yet part of a stable API. Properties set through this method may change in a future release.
 */
- (void)setValue:(nullable id)value
     forProperty:(nonnull NSString *)property NS_SWIFT_NAME(set(value:forProperty:));
/**
 * Added in version 6.3.0
 *
 * Retrieves the value of a previously set property. In case the property does not exist, nil is returned. Use this method to get properties that are not yet part of a stable API. These properties may change in a future release.
 */
- (nullable id)valueForProperty:(nonnull NSString *)property;

@end

NS_ASSUME_NONNULL_END
