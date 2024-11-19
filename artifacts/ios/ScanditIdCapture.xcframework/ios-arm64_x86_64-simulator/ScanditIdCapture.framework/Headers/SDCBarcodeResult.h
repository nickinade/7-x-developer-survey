/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

@class SDCDateResult;
@class SDCProfessionalDrivingPermit;
@class SDCVehicleRestriction;

/**
 * Added in version 7.0.0
 */
NS_SWIFT_NAME(BarcodeResult)
SDC_EXPORTED_SYMBOL
@interface SDCBarcodeResult : NSObject

/**
 * Added in version 7.0.0
 *
 * The version level of the PDF417 barcode format. See the AAMVA DL/ID Card Design Standard for more details.
 */
@property (nonatomic, nullable, readonly) NSNumber *aamvaVersion;
/**
 * Added in version 7.0.0
 *
 * Other family name by which cardholder is known.
 */
@property (nonatomic, nullable, readonly) NSString *aliasFamilyName;
/**
 * Added in version 7.0.0
 *
 * Other given name by which cardholder is known.
 */
@property (nonatomic, nullable, readonly) NSString *aliasGivenName;
/**
 * Added in version 7.0.0
 *
 * Other suffix name by which cardholder is known.
 */
@property (nonatomic, nullable, readonly) NSString *aliasSuffixName;
/**
 * Added in version 7.0.0
 *
 * The blood type of the holder in the Rh system (A+, A-, B+, B-, O+, O-, AB+ or AB-).
 */
@property (nonatomic, nullable, readonly) NSString *bloodType;
/**
 * Added in version 7.0.0
 *
 * The holder’s branch of service.
 */
@property (nonatomic, nullable, readonly) NSString *branchOfService;
/**
 * Added in version 7.0.0
 *
 * Machine-generated code that is used for security purposes.
 */
@property (nonatomic, nullable, readonly) NSString *cardInstanceIdentifier;
/**
 * Added in version 7.0.0
 *
 * Card revision date.
 */
@property (nonatomic, nullable, readonly) SDCDateResult *cardRevisionDate;
/**
 * Added in version 7.0.0
 *
 * Driving license categories.
 */
@property (nonatomic, nonnull, readonly) NSArray<NSString *> *categories;
/**
 * Added in version 7.0.0
 *
 * The CHAMPUS effective date.
 */
@property (nonatomic, nullable, readonly) SDCDateResult *champusEffectiveDate;
/**
 * Added in version 7.0.0
 *
 * The CHAMPUS expiration date.
 */
@property (nonatomic, nullable, readonly) SDCDateResult *champusExpiryDate;
/**
 * Added in version 7.0.0
 *
 * Whether the holder is a citizen or a permanent resident.
 */
@property (nonatomic, nullable, readonly) NSString *citizenshipStatus;
/**
 * Added in version 7.0.0
 *
 * The code of the civilian health care privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *civilianHealthCareFlagCode;
/**
 * Added in version 7.0.0
 *
 * The description of the civilian health care privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *civilianHealthCareFlagDescription;
/**
 * Added in version 7.0.0
 *
 * The code of the commissary privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *commissaryFlagCode;
/**
 * Added in version 7.0.0
 *
 * The description of the commissary privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *commissaryFlagDescription;
/**
 * Added in version 7.0.0
 *
 * The human-readable name of the holder’s country of birth.
 */
@property (nonatomic, nullable, readonly) NSString *countryOfBirth;
/**
 * Added in version 7.0.0
 *
 * The three-letter country code (ISO 3166-1) of the holder’s country of birth.
 */
@property (nonatomic, nullable, readonly) NSString *countryOfBirthIso;
/**
 * Added in version 7.0.0
 *
 * The code of the relationship of a dependent to his or her sponsor.
 */
@property (nonatomic, nullable, readonly) NSNumber *deersDependentSuffixCode;
/**
 * Added in version 7.0.0
 *
 * The description of the relationship of a dependent to his or her sponsor.
 */
@property (nonatomic, nullable, readonly) NSString *deersDependentSuffixDescription;
/**
 * Added in version 7.0.0
 *
 * The code of the direct care privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *directCareFlagCode;
/**
 * Added in version 7.0.0
 *
 * The description of the direct care privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *directCareFlagDescription;
/**
 * Added in version 7.0.0
 *
 * Identifies if the document has been duplicated.
 */
@property (nonatomic, nullable, readonly) NSString *documentCopy;
/**
 * Added in version 7.0.0
 *
 * The document discriminator number.
 */
@property (nonatomic, nullable, readonly) NSString *documentDiscriminatorNumber;
/**
 * Added in version 7.0.0
 *
 * The name prefix of the card holder.
 */
@property (nonatomic, nullable, readonly) NSString *driverNamePrefix;
/**
 * Added in version 7.0.0
 *
 * The name suffix of the card holder.
 */
@property (nonatomic, nullable, readonly) NSString *driverNameSuffix;
/**
 * Added in version 7.0.0
 *
 * The driver restriction codes. Empty array means that there is no restrictions. Number 1 stands for glasses/contact lenses. Number 2 stands for artificial limbs.
 */
@property (nonatomic, nonnull, readonly) NSArray<NSNumber *> *driverRestrictionCodes;
/**
 * Added in version 7.0.0
 *
 * The holder’s DEERS-assigned numeric identifier.
 */
@property (nonatomic, nullable, readonly) NSString *ediPersonIdentifier;
/**
 * Added in version 7.0.0
 *
 * The endorsement code.
 */
@property (nonatomic, nullable, readonly) NSString *endorsementsCode;
/**
 * Added in version 7.0.0
 *
 * The code of the exchange privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *exchangeFlagCode;
/**
 * Added in version 7.0.0
 *
 * The description of the exchange privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *exchangeFlagDescription;
/**
 * Added in version 7.0.0
 *
 * The holder’s eye color.
 */
@property (nonatomic, nullable, readonly) NSString *eyeColor;
/**
 * Added in version 7.0.0
 *
 * Used to distinguish among sponsors who have the same SSN.
 */
@property (nonatomic, nullable, readonly) NSNumber *familySequenceNumber;
/**
 * Added in version 7.0.0
 *
 * The first name truncation. A code that indicates whether a field has been truncated (‘T’), has not been truncated (‘N’), unknown whether truncated (‘U’), or the information is not present in the document (nil).
 */
@property (nonatomic, nullable, readonly) NSString *firstNameTruncation;
/**
 * Added in version 7.0.0
 *
 * The first name of the document holder. It doesn’t contain middle name(s).
 */
@property (nonatomic, nullable, readonly) NSString *firstNameWithoutMiddleName;
/**
 * Added in version 7.0.0
 *
 * The form number.
 */
@property (nonatomic, nullable, readonly) NSString *formNumber;
/**
 * Added in version 7.0.0
 *
 * The sponsor’s appropriate Geneva Convention Category.
 */
@property (nonatomic, nullable, readonly) NSString *genevaConventionCategory;
/**
 * Added in version 7.0.0
 *
 * The holder’s hair color.
 */
@property (nonatomic, nullable, readonly) NSString *hairColor;
/**
 * Added in version 7.0.0
 *
 * The height of the card holder in centimeters.
 */
@property (nonatomic, nullable, readonly) NSNumber *heightCm;
/**
 * Added in version 7.0.0
 *
 * The height of the card holder in inches.
 */
@property (nonatomic, nullable, readonly) NSNumber *heightInch;
/**
 * Added in version 7.0.0
 *
 * The Issuer Identification Number which uniquely identifies the issuing jurisdiction.
 */
@property (nonatomic, nullable, readonly) NSString *iin;
/**
 * Added in version 7.0.0
 *
 * The identification type of the driver’s license.
 */
@property (nonatomic, nullable, readonly) NSString *identificationType;
/**
 * Added in version 7.0.0
 *
 * The human readable name of the issuing jurisdiction (for example: an issuing state, territory or federal district for USA, or an issuing province or territory for Canada).
 */
@property (nonatomic, nullable, readonly) NSString *issuingJurisdiction;
/**
 * Added in version 7.0.0
 *
 * The ISO code of the issuing jurisdiction (for example: an issuing state, territory or federal district for USA, or an issuing province or territory for Canada).
 */
@property (nonatomic, nullable, readonly) NSString *issuingJurisdictionIso;
/**
 * Added in version 7.0.0
 *
 * A compressed version of the photograph printed on the front of the card.
 */
@property (nonatomic, nullable, readonly) NSString *jpegData;
/**
 * Added in version 7.0.0
 *
 * The jurisdiction specific version number of the implementation.
 */
@property (nonatomic, nullable, readonly) NSNumber *jurisdictionVersion;
/**
 * Added in version 7.0.0
 *
 * The last name truncation. A code that indicates whether a field has been truncated (‘T’), has not been truncated (‘N’), unknown whether truncated (‘U’), or the information is not present in the document (nil).
 */
@property (nonatomic, nullable, readonly) NSString *lastNameTruncation;
/**
 * Added in version 7.0.0
 *
 * The name of the country, where the Driver’s License was issued.
 */
@property (nonatomic, nullable, readonly) NSString *licenseCountryOfIssue;
/**
 * Added in version 7.0.0
 *
 * The middle name of the card holder.
 */
@property (nonatomic, nullable, readonly) NSString *middleName;
/**
 * Added in version 7.0.0
 *
 * The middle name truncation. A code that indicates whether a field has been truncated (‘T’), has not been truncated (‘N’), unknown whether truncated (‘U’), or the information is not present in the document (nil).
 */
@property (nonatomic, nullable, readonly) NSString *middleNameTruncation;
/**
 * Added in version 7.0.0
 *
 * The code of the Morale, Welfare & Recreation (MWR) privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *mwrFlagCode;
/**
 * Added in version 7.0.0
 *
 * The description of the Morale, Welfare & Recreation (MWR) privilege/benefit flag.
 */
@property (nonatomic, nullable, readonly) NSString *mwrFlagDescription;
/**
 * Added in version 7.0.0
 *
 * The pay grade of the sponsor. Available since version 2.
 */
@property (nonatomic, nullable, readonly) NSString *payGrade;
/**
 * Added in version 7.0.0
 *
 * The holder’s pay plan code.
 */
@property (nonatomic, nullable, readonly) NSString *payPlanCode;
/**
 * Added in version 7.0.0
 *
 * The holder’s pay plan grade code.
 */
@property (nonatomic, nullable, readonly) NSString *payPlanGradeCode;
/**
 * Added in version 7.0.0
 *
 * The person’s designator identifier (usually, the cardholder’s SSN).
 */
@property (nonatomic, nullable, readonly) NSNumber *personDesignatorDocument;
/**
 * Added in version 7.0.0
 *
 * The card’s person designator type code.
 */
@property (nonatomic, nullable, readonly) NSString *personDesignatorTypeCode;
/**
 * Added in version 7.0.0
 *
 * The holder’s middle name initial.
 */
@property (nonatomic, nullable, readonly) NSString *personMiddleInitial;
/**
 * Added in version 7.0.0
 *
 * The personal ID number of this Driver’s License holder.
 */
@property (nonatomic, nullable, readonly) NSString *personalIdNumber;
/**
 * Added in version 7.0.0
 *
 * The kind of personal ID number used - “02” means the number of the South Africa ID card.
 */
@property (nonatomic, nullable, readonly) NSString *personalIdNumberType;
/**
 * Added in version 7.0.0
 *
 * The holder’s personnel category code.
 */
@property (nonatomic, nullable, readonly) NSString *personnelCategoryCode;
/**
 * Added in version 7.0.0
 *
 * The holder’s personnel entitlement condition type code.
 */
@property (nonatomic, nullable, readonly) NSString *personnelEntitlementConditionType;
/**
 * Added in version 7.0.0
 *
 * The place of birth of the card holder.
 */
@property (nonatomic, nullable, readonly) NSString *placeOfBirth;
/**
 * Added in version 7.0.0
 *
 * Whether the holder of this License is allowed to transport goods, dangerous goods or passengers for an income.
 */
@property (nonatomic, nullable, readonly) SDCProfessionalDrivingPermit *professionalDrivingPermit;
/**
 * Added in version 7.0.0
 *
 * The race of the card holder.
 */
@property (nonatomic, nullable, readonly) NSString *race;
/**
 * Added in version 7.0.0
 *
 * The holder’s rank.
 */
@property (nonatomic, nullable, readonly) NSString *rank;
/**
 * Added in version 7.0.0
 *
 * The barcode raw data as string.
 */
@property (nonatomic, nullable, readonly) NSString *rawData;
/**
 * Added in version 7.0.0
 *
 * The code of the dependent’s relationship to the sponsor.
 */
@property (nonatomic, nullable, readonly) NSString *relationshipCode;
/**
 * Added in version 7.0.0
 *
 * The description of the dependent’s relationship to the sponsor.
 */
@property (nonatomic, nullable, readonly) NSString *relationshipDescription;
/**
 * Added in version 7.0.0
 *
 * The restriction code.
 */
@property (nonatomic, nullable, readonly) NSString *restrictionsCode;
/**
 * Added in version 7.0.0
 *
 * The card security code.
 */
@property (nonatomic, nullable, readonly) NSString *securityCode;
/**
 * Added in version 7.0.0
 *
 * The service code.
 */
@property (nonatomic, nullable, readonly) NSString *serviceCode;
/**
 * Added in version 7.0.0
 *
 * Indicates whether the card holder is sponsor or dependent.
 */
@property (nonatomic, nullable, readonly) NSString *sponsorFlag;
/**
 * Added in version 7.0.0
 *
 * The name of the sponsor.
 */
@property (nonatomic, nullable, readonly) NSString *sponsorName;
/**
 * Added in version 7.0.0
 *
 * The sponsor’s designator identifier (Usually, the cardholder’s SSN).
 */
@property (nonatomic, nullable, readonly) NSNumber *sponsorPersonDesignatorIdentifier;
/**
 * Added in version 7.0.0
 *
 * The status of the sponsor.
 */
@property (nonatomic, nullable, readonly) NSString *statusCode;
/**
 * Added in version 7.0.0
 *
 * The description of the the code of the status of the sponsor.
 */
@property (nonatomic, nullable, readonly) NSString *statusCodeDescription;
/**
 * Added in version 7.0.0
 *
 * The vehicle classification.
 */
@property (nonatomic, nullable, readonly) NSString *vehicleClass;
/**
 * Added in version 7.0.0
 *
 * The categories of motor vehicles that the holder of this License is permitted to drive.
 */
@property (nonatomic, nonnull, readonly) NSArray<SDCVehicleRestriction *> *vehicleRestrictions;
/**
 * Added in version 7.0.0
 *
 * The version of the barcode.
 */
@property (nonatomic, nullable, readonly) NSString *version;
/**
 * Added in version 7.0.0
 *
 * The weight of the card holder in kilograms.
 */
@property (nonatomic, nullable, readonly) NSNumber *weightKg;
/**
 * Added in version 7.0.0
 *
 * Thw weight of the card holder in pounds.
 */
@property (nonatomic, nullable, readonly) NSNumber *weightLbs;
/**
 * Added in version 7.0.0
 *
 * Returns true if the document is a Real ID.
 */
@property (nonatomic, nullable, readonly) NSNumber *isRealId;
/**
 * Added in version 7.0.0
 *
 * The mappings between all the barcode data element IDs and their values. The keys of this collection are the element IDs as defined in the AAMVA Driver License/Identification specification. For example, the specification defines a data element “Customer First Name” with the ID “DAC”. Therefore if a scanned barcode contains a string “DACMICHAEL”, then this collection will contain a mapping with “DAC” as the key and “MICHAEL” as the value. This collection contains all the data elements of the barcode - including those that are exposed also explicitly as fields of this class.
 *
 * See Barcode Data Elements for all the possible keys and their meaning.
 */
@property (nonatomic, nonnull, readonly) NSDictionary<NSString *, NSString *> *barcodeDataElements;
/**
 * Added in version 7.0.0
 */
@property (nonatomic, nonnull, readonly) NSString *JSONString;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
