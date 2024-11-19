/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <ScanditCaptureCore/ScanditCaptureCore.h>
#import <ScanditIdCapture/SDCIdCaptureRegion.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 7.0.0
 *
 * Types associated with the document classes below
 */
typedef NS_ENUM(NSUInteger, SDCIdCaptureDocumentType) {
/**
     * Added in version 7.0.0
     *
     * ID card identification document. Associated with SDCIdCard.
     */
    SDCIdCaptureDocumentTypeIdCard,
/**
     * Added in version 7.0.0
     *
     * Driver license identification document. Associated with SDCDriverLicense.
     */
    SDCIdCaptureDocumentTypeDriverLicense,
/**
     * Added in version 7.0.0
     *
     * Passport identification document. Associated with SDCPassport.
     */
    SDCIdCaptureDocumentTypePassport,
/**
     * Added in version 7.0.0
     *
     * Visa (ICAO) identification document. Associated with SDCVisaIcao.
     */
    SDCIdCaptureDocumentTypeVisaIcao,
/**
     * Added in version 7.0.0
     *
     * Region specific identification document. Associated with SDCRegionSpecific.
     */
    SDCIdCaptureDocumentTypeRegionSpecific,
/**
     * Added in version 7.0.0
     *
     * Residence Permit. Associated with SDCResidencePermit.
     */
    SDCIdCaptureDocumentTypeResidencePermit,
/**
     * Added in version 7.0.0
     *
     * Health insurance card. Associated with SDCHealthInsuranceCard.
     */
    SDCIdCaptureDocumentTypeHealthInsuranceCard
} NS_SWIFT_NAME(IdCaptureDocumentType);

/**
 * Added in version 7.0.0
 *
 * Base class for SDCIdCaptureDocument subtypes that follow
 */
NS_SWIFT_NAME(IdCaptureDocument)
SDC_EXPORTED_SYMBOL
@interface SDCIdCaptureDocument : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 7.0.0
 *
 * Geographical region associated with the identification document.
 */
@property (nonatomic, readonly) SDCIdCaptureRegion region;
/**
 * Added in version 7.0.0
 *
 * Enum SDCIdCaptureDocumentType associated with this instance.
 */
@property (nonatomic, readonly) SDCIdCaptureDocumentType documentType;

/**
 * Added in version 7.0.0
 *
 * Indicates whether the document is of type SDCIdCard.
 */
- (BOOL)isIdCard;
/**
 * Added in version 7.0.0
 *
 * Indicates whether the document is of type SDCDriverLicense.
 */
- (BOOL)isDriverLicense;
/**
 * Added in version 7.0.0
 *
 * Indicates whether the document is of type SDCPassport.
 */
- (BOOL)isPassport;
/**
 * Added in version 7.0.0
 *
 * Indicates whether the document is of type SDCVisaIcao.
 */
- (BOOL)isVisaIcao;
/**
 * Added in version 7.0.0
 *
 * Indicates whether the document is of type SDCRegionSpecific.
 */
- (BOOL)isRegionSpecific;
/**
 * Added in version 7.0.0
 *
 * Indicates whether the document is of type SDCResidencePermit.
 */
- (BOOL)isResidencePermit;
/**
 * Added in version 7.0.0
 *
 * Indicates whether the document is of type SDCHealthInsuranceCard.
 */
- (BOOL)isHealthInsuranceCard;

@end

NS_ASSUME_NONNULL_END
