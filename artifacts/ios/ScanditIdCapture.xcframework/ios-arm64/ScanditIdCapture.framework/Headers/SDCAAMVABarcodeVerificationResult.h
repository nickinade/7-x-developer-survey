/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.26.0
 *
 * The verification status returned by the barcode verifier
 */
typedef NS_CLOSED_ENUM(NSUInteger, SDCAamvaBarcodeVerificationStatus) {
/**
     * Added in version 6.26.0
     *
     * The barcode is authentic
     */
    SDCAamvaBarcodeVerificationStatusAuthentic,
/**
     * Added in version 6.26.0
     *
     * The barcode is likely forged
     */
    SDCAamvaBarcodeVerificationStatusLikelyForged,
/**
     * Added in version 6.26.0
     *
     * The barcode is forged
     */
    SDCAamvaBarcodeVerificationStatusForged,
} NS_SWIFT_NAME(AamvaBarcodeVerificationStatus);

/**
 * Added in version 6.15.0
 *
 * The result of a verification of AAMVA-compliant personal identification document done by SDCAAMVABarcodeVerifier.
 */
NS_SWIFT_NAME(AamvaBarcodeVerificationResult)
SDC_EXPORTED_SYMBOL
@interface SDCAAMVABarcodeVerificationResult : NSObject

/**
 * Added in version 6.15.0
 *
 * All checks passed and nothing suspicious about the document was detected.
 */
@property (nonatomic, readonly) BOOL allChecksPassed DEPRECATED_MSG_ATTRIBUTE("Use status instead");
/**
 * Added in version 6.26.0
 *
 * Verification status containing the result of the verification
 */
@property (nonatomic, readonly) SDCAamvaBarcodeVerificationStatus status;
/**
 * Added in version 6.15.0
 *
 * Returns the JSON representation of this object.
 */
@property (nonatomic, nonnull, readonly) NSString *JSONString;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
