/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/SDCBase.h>

/**
 * Added in version 6.17.0
 *
 * This enum specifies what type of anonymization should be applied. Note: This only affects specific fields on certain documents.
 */
typedef NS_CLOSED_ENUM(NSInteger, SDCIdAnonymizationMode) {
/**
     * Added in version 6.17.0
     *
     * No Anonymization, the result will contain all data.
     */
    SDCIdAnonymizationModeNone,
/**
     * Added in version 6.17.0
     *
     * Sensitive data is removed from result fields.
     */
    SDCIdAnonymizationModeFieldsOnly,
/**
     * Added in version 6.17.0
     *
     * Black boxes cover sensitive data in result images
     */
    SDCIdAnonymizationModeImagesOnly,
/**
     * Added in version 6.17.0
     *
     * A combination of ImagesOnly and FieldsOnly modes.
     */
    SDCIdAnonymizationModeFieldsAndImages
} NS_SWIFT_NAME(IdAnonymizationMode);

