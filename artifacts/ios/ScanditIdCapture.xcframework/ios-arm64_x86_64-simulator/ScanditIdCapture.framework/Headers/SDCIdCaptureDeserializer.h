/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

@class SDCDataCaptureModeDeserializer;
@class SDCJSONValue;
@class SDCIdCapture;
@class SDCIdCaptureDeserializer;
@class SDCIdCaptureOverlay;
@class SDCIdCaptureSettings;
@class SDCDataCaptureContext;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.6.0
 *
 * The listener for the id capture deserializer.
 */
NS_SWIFT_NAME(IdCaptureDeserializerDelegate)
@protocol SDCIdCaptureDeserializerDelegate <NSObject>

/**
 * Added in version 6.6.0
 *
 * Called before the deserialization of id capture started. This is the point to overwrite defaults before the deserialization is performed.
 */
- (void)idCaptureDeserializer:(SDCIdCaptureDeserializer *)deserializer
    didStartDeserializingMode:(SDCIdCapture *)mode
                fromJSONValue:(SDCJSONValue *)JSONValue;
/**
 * Added in version 6.6.0
 *
 * Called when the deserialization of id capture finished. This is the point to do additional deserialization.
 */
- (void)idCaptureDeserializer:(SDCIdCaptureDeserializer *)deserializer
    didFinishDeserializingMode:(SDCIdCapture *)mode
                 fromJSONValue:(SDCJSONValue *)JSONValue;

/**
 * Added in version 6.6.0
 *
 * Called before the deserialization of the id capture settings started. This is the point to overwrite defaults before the deserialization is performed.
 */
- (void)idCaptureDeserializer:(SDCIdCaptureDeserializer *)deserializer
    didStartDeserializingSettings:(SDCIdCaptureSettings *)settings
                    fromJSONValue:(SDCJSONValue *)JSONValue;
/**
 * Added in version 6.6.0
 *
 * Called when the deserialization of the id capture settings finished. This is the point to do additional deserialization.
 */
- (void)idCaptureDeserializer:(SDCIdCaptureDeserializer *)deserializer
    didFinishDeserializingSettings:(SDCIdCaptureSettings *)settings
                     fromJSONValue:(SDCJSONValue *)JSONValue;

/**
 * Added in version 6.6.0
 *
 * Called before the deserialization of the id capture overlay started. This is the point to overwrite defaults before the deserialization is performed.
 */
- (void)idCaptureDeserializer:(SDCIdCaptureDeserializer *)deserializer
    didStartDeserializingOverlay:(SDCIdCaptureOverlay *)overlay
                   fromJSONValue:(SDCJSONValue *)JSONValue;
/**
 * Added in version 6.6.0
 *
 * Called when the deserialization of the id capture overlay finished. This is the point to do additional deserialization.
 */
- (void)idCaptureDeserializer:(SDCIdCaptureDeserializer *)deserializer
    didFinishDeserializingOverlay:(SDCIdCaptureOverlay *)overlay
                    fromJSONValue:(SDCJSONValue *)JSONValue;
@end

/**
 * Added in version 6.6.0
 *
 * A deserializer to construct id capture from JSON. For most use cases it is enough to use SDCIdCapture.idCaptureFromJSONString:context:error: which internally uses this deserializer. Using the deserializer gives the advantage of being able to listen to the deserialization events as they happen and potentially influence them. Additionally warnings can be read from the deserializer that would otherwise not be available.
 */
NS_SWIFT_NAME(IdCaptureDeserializer)
SDC_EXPORTED_SYMBOL
@interface SDCIdCaptureDeserializer : NSObject <SDCDataCaptureModeDeserializer>
/**
 * Added in version 6.6.0
 *
 * The object informed about deserialization events.
 */
@property (nonatomic, weak, nullable) id<SDCIdCaptureDeserializerDelegate> delegate;
/**
 * Added in version 6.6.0
 *
 * The warnings produced during deserialization, for example which properties were not used during deserialization.
 */
@property (nonatomic, readonly) NSArray<NSString *> *warnings;

/**
 * Added in version 6.6.0
 *
 * Creates a new deserializer object.
 */
+ (instancetype)idCaptureDeserializer;

/**
 * Added in version 6.6.0
 *
 * Deserializes id capture from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCIdCapture *)modeFromJSONString:(NSString *)JSONString
                                  withContext:(SDCDataCaptureContext *)context
                                        error:(NSError *_Nullable *_Nullable)error;
/**
 * Added in version 6.22.0
 *
 * Takes an existing ID capture and updates it by deserializing new or changed properties from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCIdCapture *)updateMode:(SDCIdCapture *)idCapture
                       fromJSONString:(NSString *)JSONString
                                error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.6.0
 *
 * Deserializes id capture settings from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCIdCaptureSettings *)settingsFromJSONString:(NSString *)JSONString
                                                    error:(NSError *_Nullable *_Nullable)error;
/**
 * Added in version 6.6.0
 *
 * Takes existing id capture settings and updates them by deserializing new or changed properties from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCIdCaptureSettings *)updateSettings:(SDCIdCaptureSettings *)settings
                                   fromJSONString:(NSString *)JSONString
                                            error:(NSError *_Nullable *_Nullable)error;

/**
 * Added in version 6.6.0
 *
 * Deserializes id capture overlay from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCIdCaptureOverlay *)overlayFromJSONString:(NSString *)JSONString
                                               withMode:(SDCIdCapture *)mode
                                                  error:(NSError *_Nullable *_Nullable)error;
/**
 * Added in version 6.6.0
 *
 * Takes existing id capture overlay and updates them by deserializing new or changed properties from JSON.
 *
 * An error is set if the provided JSON does not contain required properties or contains properties of the wrong type.
 */
- (nullable SDCIdCaptureOverlay *)updateOverlay:(SDCIdCaptureOverlay *)overlay
                                 fromJSONString:(NSString *)JSONString
                                          error:(NSError *_Nullable *_Nullable)error;
@end

NS_ASSUME_NONNULL_END
