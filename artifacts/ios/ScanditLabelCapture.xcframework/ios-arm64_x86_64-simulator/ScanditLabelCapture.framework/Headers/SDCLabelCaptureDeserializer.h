/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditCaptureCore/SDCDataCaptureModeDeserializer.h>

@class SDCDataCaptureContext;
@class SDCLabelCapture;
@class SDCLabelCaptureBasicOverlay;
@class SDCLabelCaptureAdvancedOverlay;
@class SDCLabelCaptureDeserializer;
@class SDCLabelCaptureSettings;
@class SDCJSONValue;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.4.0
 *
 * The listener for the label capture deserializer.
 */
NS_SWIFT_NAME(LabelCaptureDeserializerDelegate)
@protocol SDCLabelCaptureDeserializerDelegate <NSObject>

/**
 * Added in version 6.4.0
 *
 * Called before the deserialization of label capture started. This is the point to overwrite defaults before the deserialization is performed.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
       didStartDeserializingMode:(SDCLabelCapture *)mode
                   fromJSONValue:(SDCJSONValue *)JSONValue;
/**
 * Added in version 6.4.0
 *
 * Called when the deserialization of label capture finished. This is the point to do additional deserialization.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
      didFinishDeserializingMode:(SDCLabelCapture *)mode
                   fromJSONValue:(SDCJSONValue *)JSONValue;

/**
 * Added in version 6.4.0
 *
 * Called before the deserialization of the label capture settings started. This is the point to overwrite defaults before the deserialization is performed.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
    didStartDeserializingSettings:(SDCLabelCaptureSettings *)settings
                    fromJSONValue:(SDCJSONValue *)JSONValue;
/**
 * Added in version 6.4.0
 *
 * Called when the deserialization of the label capture settings finished. This is the point to do additional deserialization.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
    didFinishDeserializingSettings:(SDCLabelCaptureSettings *)settings
                     fromJSONValue:(SDCJSONValue *)JSONValue;

/**
 * Added in version 6.4.0
 *
 * Called before the deserialization of the label capture basic overlay started. This is the point to overwrite defaults before the deserialization is performed.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
    didStartDeserializingBasicOverlay:(SDCLabelCaptureBasicOverlay *)overlay
                        fromJSONValue:(SDCJSONValue *)JSONValue;
/**
 * Added in version 6.4.0
 *
 * Called when the deserialization of the label capture basic overlay finished. This is the point to do additional deserialization.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
    didFinishDeserializingBasicOverlay:(SDCLabelCaptureBasicOverlay *)overlay
                         fromJSONValue:(SDCJSONValue *)JSONValue;

/**
 * Added in version 6.16.0
 *
 * Called before the deserialization of the label capture advanced overlay started. This is the point to overwrite defaults before the deserialization is performed.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
    didStartDeserializingAdvancedOverlay:(SDCLabelCaptureAdvancedOverlay *)overlay
                           fromJSONValue:(SDCJSONValue *)JSONValue;
/**
 * Added in version 6.16.0
 *
 * Called when the deserialization of the label capture advanced overlay finished. This is the point to do additional deserialization.
 */
- (void)labelCaptureDeserializer:(SDCLabelCaptureDeserializer *)deserializer
    didFinishDeserializingAdvancedOverlay:(SDCLabelCaptureAdvancedOverlay *)overlay
                            fromJSONValue:(SDCJSONValue *)JSONValue;

@end

/**
 * Added in version 6.4.0
 *
 * A deserializer to construct label capture from JSON. For most use cases it is enough to use SDCLabelCapture.labelCaptureFromJSONString:context:error: which internally uses this deserializer. Using the deserializer gives the advantage of being able to listen to the deserialization events as they happen and potentially influence them. Additionally warnings can be read from the deserializer that would otherwise not be available.
 */
NS_SWIFT_NAME(LabelCaptureDeserializer)
SDC_EXPORTED_SYMBOL
@interface SDCLabelCaptureDeserializer : NSObject <SDCDataCaptureModeDeserializer>

/**
 * Added in version 6.4.0
 *
 * The object informed about deserialization events.
 */
@property (nonatomic, weak, nullable) id<SDCLabelCaptureDeserializerDelegate> delegate;
/**
 * Added in version 6.4.0
 *
 * The warnings produced during deserialization, for example which properties were not used during deserialization.
 */
@property (nonatomic, readonly) NSArray<NSString *> *warnings;

/**
 * Added in version 6.4.0
 *
 * Creates a new deserializer object.
 */
+ (instancetype)labelCaptureDeserializer;

/**
 * Added in version 6.4.0
 *
 * Deserializes label capture from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCapture *)modeFromJSONString:(NSString *)JSONString
                                     withContext:(SDCDataCaptureContext *)context
                                           error:(NSError *_Nullable *_Nullable)error;
/**
 * Added in version 6.4.0
 *
 * Takes an existing label capture and updates it by deserializing new or changed properties from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCapture *)updateMode:(SDCLabelCapture *)labelCapture
                          fromJSONString:(NSString *)JSONString
                                   error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.4.0
 *
 * Deserializes label capture settings from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCaptureSettings *)settingsFromJSONString:(NSString *)JSONString
                                                       error:(NSError *_Nullable *_Nullable)error;
/**
 * Added in version 6.4.0
 *
 * Takes existing label capture settings and updates them by deserializing new or changed properties from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCaptureSettings *)updateSettings:(SDCLabelCaptureSettings *)settings
                                      fromJSONString:(NSString *)JSONString
                                               error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.4.0
 *
 * Deserializes a label capture overlay from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCaptureBasicOverlay *)basicOverlayFromJSONString:(NSString *)JSONString
                                                            withMode:(SDCLabelCapture *)mode
                                                               error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.4.0
 *
 * Takes an existing label capture overlay and updates it by deserializing new or changed properties from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCaptureBasicOverlay *)updateBasicOverlay:(SDCLabelCaptureBasicOverlay *)overlay
                                              fromJSONString:(NSString *)JSONString
                                                       error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.16.0
 *
 * Deserializes a label capture advanced overlay from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCaptureAdvancedOverlay *)advancedOverlayFromJSONString:(NSString *)JSONString
                                                                  withMode:(SDCLabelCapture *)mode
                                                                     error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.16.0
 *
 * Takes an existing label capture advanced overlay and updates it by deserializing new or changed properties from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCLabelCaptureAdvancedOverlay *)updateAdvancedOverlay:(SDCLabelCaptureAdvancedOverlay *)overlay
                                                    fromJSONString:(NSString *)JSONString
                                                             error:(NSError *_Nullable *_Nullable)error;

@end

NS_ASSUME_NONNULL_END
