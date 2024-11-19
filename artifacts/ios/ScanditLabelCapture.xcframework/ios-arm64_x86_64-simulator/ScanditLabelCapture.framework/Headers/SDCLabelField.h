/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>
#import <ScanditCaptureCore/SDCQuadrilateral.h>

@class SDCBarcode;

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.0.0
 *
 * An enumeration of possible states a label field can be in.
 */
typedef NS_CLOSED_ENUM(NSUInteger, SDCLabelFieldState) {
/**
     * Added in version 6.0.0
     *
     * The field has been captured, e.g. the barcode or text has been read and its location is known.
     */
    SDCLabelFieldStateCaptured,
/**
     * Added in version 6.0.0
     *
     * The field has not been captured yet, but its location has been predicted.
     */
    SDCLabelFieldStatePredicted,
/**
     * Added in version 6.0.0
     *
     * The field data as well as its location are unknown.
     */
    SDCLabelFieldStateUnknown
} NS_SWIFT_NAME(LabelFieldState);

/**
 * Added in version 6.0.0
 *
 * An enumeration of possible field types of a captured field. The type of the field is given by the currently active label capture settings.
 */
typedef NS_CLOSED_ENUM(NSUInteger, SDCLabelFieldType) {
/**
     * Added in version 6.0.0
     *
     * The type of the captured field is unknown.
     */
    SDCLabelFieldTypeUnknown,
/**
     * Added in version 6.0.0
     *
     * The type of the captured field is barcode. For fields that have been captured, the data encoded in the field is available through the SDCLabelField.barcode property.
     */
    SDCLabelFieldTypeBarcode,
/**
     * Added in version 6.0.0
     *
     * The type of the captured field is text. For fields that have been captured, the data encoded in the field is available through the SDCLabelField.text property.
     */
    SDCLabelFieldTypeText
} NS_SWIFT_NAME(LabelFieldType);

/**
 * Added in version 6.0.0
 */
NS_SWIFT_NAME(LabelField)
SDC_EXPORTED_SYMBOL
@interface SDCLabelField : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.0.0
 *
 * The field name. Unique within a label, for example barcode-a, or price. The names are defined when defining the label.
 */
@property (nonatomic, nonnull, readonly) NSString *name;
/**
 * Added in version 6.0.0
 *
 * Identifies the type of the captured field type. This either returns SDCLabelFieldTypeBarcode, or SDCLabelFieldTypeText. Depending on the type, further information such as captured data is available through the following properties:
 *
 *   • When the type is SDCLabelFieldTypeBarcode, the captured data can be extracted through the barcode property.
 *
 *   • When the type is SDCLabelFieldTypeText, the captured data can be extracted through the text property.
 */
@property (nonatomic, readonly) SDCLabelFieldType type;
/**
 * Added in version 6.0.0
 *
 * The location of the captured field inside the image. These coordinates will need to be converted to view coordinates before they can be visualized. When the field’s state is SDCLabelFieldStateUnknown, a quadrilateral with all points set to (0,0) is returned.
 */
@property (nonatomic, readonly) SDCQuadrilateral predictedLocation;
/**
 * Added in version 6.0.0
 *
 * The field state. For fields that have been captured SDCLabelFieldStateCaptured is returned. For fields whose location has been predicted, SDCLabelFieldStatePredicted is returned. For fields whose location could not be predicted, SDCLabelFieldStateUnknown is returned.
 */
@property (nonatomic, readonly) SDCLabelFieldState state;
/**
 * Added in version 6.0.0
 *
 * The barcode associated to this captured field. This property is nil when the type is not equal to SDCLabelFieldTypeBarcode.
 */
@property (nonatomic, nullable, readonly) SDCBarcode *barcode;
/**
 * Added in version 6.0.0
 *
 * The text associated to this captured field. This property is nil when the type is not equal to SDCLabelFieldTypeText.
 */
@property (nonatomic, nullable, readonly) NSString *text;
/**
 * Added in version 6.0.0
 *
 * Whether the captured field is required. This property is NO for optional fields.
 */
@property (nonatomic, readonly) BOOL isRequired;
/**
 * Added in version 6.4.0
 *
 * Returns the JSON representation of the label field.
 */
@property (nonatomic, nonnull, readonly) NSString *JSONString;

@end

NS_ASSUME_NONNULL_END
