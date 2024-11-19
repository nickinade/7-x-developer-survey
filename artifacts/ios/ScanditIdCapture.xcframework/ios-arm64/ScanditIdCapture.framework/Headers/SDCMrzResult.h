/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

@class SDCDateResult;

/**
 * Added in version 6.5.0
 *
 * The ID Capture mode supports all versions of Machine Readable Travel Documents (MRTD) specified by the International Civil Aviation Organization (ICAO).
 * The ICAO specifies four types of MRTDs:
 *
 *   • TD1 - ID cards (id cards)
 *
 *   • TD2 - other official travel documents (other official travel documents)
 *
 *   • TD3/MRP - passports (passports)
 *
 *   • MRV (A & B type) - visas (visas)
 *
 * In addition, the ID Capture mode supports the following non-ICAO standards:
 *
 *   • SwissDL - Swiss driving license (Swiss driving license)
 *
 *   • TD2/FrenchID - French ID (French identity card)
 *
 * Use the following regex pattern to filter out MRTD codes:
 *
 * Type
 *
 * Regex
 *
 * TD1 Regex Pattern
 *
 * ([A-Z0-9<]{30}\n?){3}
 *
 * TD2 Regex Pattern
 *
 * ([A-Z0-9<]{36}\n?){2}
 *
 * TD2 French Regex Pattern
 *
 * Same as TD2 Regex Pattern
 *
 * TD3 Regex Pattern
 *
 * ([A-Z0-9<]{44}\n?){2}
 *
 * MRV_A Regex Pattern
 *
 * Same as TD2 Regex Pattern
 *
 * MRV_B Regex Pattern
 *
 * Same as TD3 Regex Pattern
 *
 * Swiss Driving License Regex Pattern
 *
 * [A-Z0-9<]{9}\n([A-Z0-9<]{30}\n?){2}
 */
NS_SWIFT_NAME(MrzResult)
SDC_EXPORTED_SYMBOL
@interface SDCMrzResult : NSObject

/**
 * Added in version 6.5.0
 *
 * The document type code. One of the following values:
 *
 *   • P[passport type id] - indicates a passport,
 *
 *   • ID - indicates an id card,
 *
 *   • CA - indicates a Canada permanent resident card.
 *
 *   • CP - indicates a Asia-Pacific Economic Cooperation Business Travel Card
 *
 *   • CS - indicates an Exit-Entry Permit for Travelling to and from Hong Kong and Macau (往来港澳通行证);
 *
 *   • CD - indicates an Exit-Entry Permit for Travelling to and from Taiwan (往来台灣通行证).
 *
 *   • CR - indicates a Mainland Travel Permit for Hong Kong & Macau Residents.
 *
 *   • CT - indicates a Mainland Travel Permit for Taiwan Residents.
 */
@property (nonatomic, nonnull, readonly) NSString *documentCode;
/**
 * Added in version 6.5.0
 *
 * Indicates whether first or last name is truncated. For more information please refer to the official
 * specification.
 */
@property (nonatomic, readonly) BOOL namesAreTruncated;
/**
 * Added in version 6.5.0
 *
 * An optional field, for use of the issuing country or the organization.
 */
@property (nonatomic, nullable, readonly) NSString *optional;
/**
 * Added in version 6.5.0
 *
 * An optional field, for use of the issuing country or the organization.
 *
 * If SDCIdCaptureSettings.anonymizationMode is enabled for the field results, the returned value might be nil for certain documents.
 */
@property (nonatomic, nullable, readonly) NSString *optional1;
/**
 * Added in version 6.8.0
 *
 * The full MRZ text as it appears on a document.
 *
 * If SDCIdCaptureSettings.anonymizationMode is enabled for the field results, the returned value might be nil for certain documents.
 */
@property (nonatomic, nonnull, readonly) NSString *capturedMrz;
/**
 * Added in version 6.6.0
 */
@property (nonatomic, nonnull, readonly) NSString *JSONString;

/**
 * Added in version 7.0.0
 *
 * The ISO code of the issuing jurisdiction.
 */
@property (nonatomic, nullable, readonly) NSString *passportIssuerIso;
/**
 * Added in version 7.0.0
 *
 * The passport number of the document holder.
 */
@property (nonatomic, nullable, readonly) NSString *passportNumber;
/**
 * Added in version 7.0.0
 *
 * The expiry date of the holder’s passport.
 */
@property (nonatomic, nullable, readonly) SDCDateResult *passportDateOfExpiry;
/**
 * Added in version 7.0.0
 *
 * The personal ID Number of the document holder.
 */
@property (nonatomic, nullable, readonly) NSString *personalIdNumber;
/**
 * Added in version 7.0.0
 *
 * The number of times the document has been renewed.
 */
@property (nonatomic, nullable, readonly) NSNumber *renewalTimes;
/**
 * Added in version 7.0.0
 *
 * The holder’s name in Simplified Chinese characters.
 */
@property (nonatomic, nullable, readonly) NSString *fullNameSimplifiedChinese;
/**
 * Added in version 7.0.0
 *
 * The number of Chinese characters omitted in in GBK (a character encoding for Simplified Chinese characters used in the People’s Republic of China) name.
 */
@property (nonatomic, nullable, readonly) NSNumber *omittedCharacterCountInGbkName;
/**
 * Added in version 7.0.0
 *
 * The number of names that couldn’t be displayed in the MRZ.
 */
@property (nonatomic, nullable, readonly) NSNumber *omittedNameCount;
/**
 * Added in version 7.0.0
 *
 * The code of the authority that issued this document.
 */
@property (nonatomic, nullable, readonly) NSString *issuingAuthorityCode;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
