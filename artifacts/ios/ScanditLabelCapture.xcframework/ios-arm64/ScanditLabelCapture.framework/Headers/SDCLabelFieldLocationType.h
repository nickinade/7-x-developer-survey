/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>

/**
 * Added in version 6.20.0
 */
typedef NS_CLOSED_ENUM(NSUInteger, SDCLabelFieldLocationType) {
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeTopLeft,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeTopRight,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeBottomRight,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeBottomLeft,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeTop,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeRight,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeBottom,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeLeft,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeCenter,
/**
     * Added in version 6.20.0
     */
    SDCLabelFieldLocationTypeWholeLabel
} NS_SWIFT_NAME(LabelFieldLocationType);

