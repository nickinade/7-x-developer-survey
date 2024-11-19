/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

/**
 * Added in version 7.0.0
 *
 * Subtype of a document of type SDCRegionSpecific.
 */
typedef NS_ENUM(NSUInteger, SDCRegionSpecificSubtype) {
/**
     * Added in version 7.0.0
     *
     * US Border Crossing Card.
     */
    SDCRegionSpecificSubtypeUsBorderCrossingCard,
/**
     * Added in version 7.0.0
     *
     * China Exit Entry Permit.
     */
    SDCRegionSpecificSubtypeChinaExitEntryPermit,
/**
     * Added in version 7.0.0
     *
     * US Global Entry Card.
     */
    SDCRegionSpecificSubtypeUsGlobalEntryCard,
/**
     * Added in version 7.0.0
     *
     * China Mainland Travel Permit Taiwan.
     */
    SDCRegionSpecificSubtypeChinaMainlandTravelPermitTaiwan,
/**
     * Added in version 7.0.0
     *
     * US Nexus Card.
     */
    SDCRegionSpecificSubtypeUsNexusCard,
/**
     * Added in version 7.0.0
     *
     * China Mainland Travel Permit Hong Kong Macau.
     */
    SDCRegionSpecificSubtypeChinaMainlandTravelPermitHongKongMacau,
/**
     * Added in version 7.0.0
     *
     * Apec Business Travel Card.
     */
    SDCRegionSpecificSubtypeApecBusinessTravelCard,
/**
     * Added in version 7.0.0
     *
     * Pakistan Afghan Citizen Card.
     */
    SDCRegionSpecificSubtypePakistanAfghanCitizenCard,
/**
     * Added in version 7.0.0
     *
     * Singapore Fin Card.
     */
    SDCRegionSpecificSubtypeSingaporeFinCard,
/**
     * Added in version 7.0.0
     *
     * US Green Card.
     */
    SDCRegionSpecificSubtypeUsGreenCard,
/**
     * Added in version 7.0.0
     *
     * Malaysia Ikad.
     */
    SDCRegionSpecificSubtypeMalaysiaIkad,
/**
     * Added in version 7.0.0
     *
     * Malaysia Mykad.
     */
    SDCRegionSpecificSubtypeMalaysiaMykad,
/**
     * Added in version 7.0.0
     *
     * Malaysia Mypr.
     */
    SDCRegionSpecificSubtypeMalaysiaMypr,
/**
     * Added in version 7.0.0
     *
     * Mexico Consular Voter Id.
     */
    SDCRegionSpecificSubtypeMexicoConsularVoterId,
/**
     * Added in version 7.0.0
     *
     * Germany Eid.
     */
    SDCRegionSpecificSubtypeGermanyEid,
/**
     * Added in version 7.0.0
     *
     * US Common Access Card.
     */
    SDCRegionSpecificSubtypeUsCommonAccessCard,
/**
     * Added in version 7.0.0
     *
     * Philippines Multipurpose Id.
     */
    SDCRegionSpecificSubtypePhilippinesMultipurposeId,
/**
     * Added in version 7.0.0
     *
     * Malaysia Mykas.
     */
    SDCRegionSpecificSubtypeMalaysiaMykas,
/**
     * Added in version 7.0.0
     *
     * Malaysia Mykid.
     */
    SDCRegionSpecificSubtypeMalaysiaMykid,
/**
     * Added in version 7.0.0
     *
     * Malaysia Mytentera.
     */
    SDCRegionSpecificSubtypeMalaysiaMytentera,
/**
     * Added in version 7.0.0
     *
     * Mexico Professional Id.
     */
    SDCRegionSpecificSubtypeMexicoProfessionalId,
/**
     * Added in version 7.0.0
     *
     * Malaysia Refugee Id.
     */
    SDCRegionSpecificSubtypeMalaysiaRefugeeId,
/**
     * Added in version 7.0.0
     *
     * Canada Tribal Id.
     */
    SDCRegionSpecificSubtypeCanadaTribalId,
/**
     * Added in version 7.0.0
     *
     * US Uniformed Services Id.
     */
    SDCRegionSpecificSubtypeUsUniformedServicesId,
/**
     * Added in version 7.0.0
     *
     * US Veteran Id.
     */
    SDCRegionSpecificSubtypeUsVeteranId,
/**
     * Added in version 7.0.0
     *
     * Philippines Work Permit.
     */
    SDCRegionSpecificSubtypePhilippinesWorkPermit,
/**
     * Added in version 7.0.0
     *
     * Singapore Work Permit.
     */
    SDCRegionSpecificSubtypeSingaporeWorkPermit,
/**
     * Added in version 7.0.0
     *
     * US Work Permit.
     */
    SDCRegionSpecificSubtypeUsWorkPermit,
/**
     * Added in version 7.0.0
     *
     * Philippines Social Security Card.
     */
    SDCRegionSpecificSubtypePhilippinesSocialSecurityCard,
/**
     * Added in version 7.0.0
     *
     * Sweden Social Security Card.
     */
    SDCRegionSpecificSubtypeSwedenSocialSecurityCard,
/**
     * Added in version 7.0.0
     *
     * Canada Social Security Card.
     */
    SDCRegionSpecificSubtypeCanadaSocialSecurityCard,
/**
     * Added in version 7.0.0
     *
     * US Social Security Card.
     */
    SDCRegionSpecificSubtypeUsSocialSecurityCard,
/**
     * Added in version 7.0.0
     *
     * Belgium Minors Id.
     */
    SDCRegionSpecificSubtypeBelgiumMinorsId,
/**
     * Added in version 7.0.0
     *
     * Colombia Minors Id.
     */
    SDCRegionSpecificSubtypeColombiaMinorsId,
/**
     * Added in version 7.0.0
     *
     * Peru Minors Id.
     */
    SDCRegionSpecificSubtypePeruMinorsId,
/**
     * Added in version 7.0.0
     *
     * Bolivia Minors Id.
     */
    SDCRegionSpecificSubtypeBoliviaMinorsId,
/**
     * Added in version 7.0.0
     *
     * Hungary Address Card.
     */
    SDCRegionSpecificSubtypeHungaryAddressCard,
/**
     * Added in version 7.0.0
     *
     * Uk Asylum Request.
     */
    SDCRegionSpecificSubtypeUkAsylumRequest,
/**
     * Added in version 7.0.0
     *
     * Canada Citizenship Certificate.
     */
    SDCRegionSpecificSubtypeCanadaCitizenshipCertificate,
/**
     * Added in version 7.0.0
     *
     * Singapore Employment Pass.
     */
    SDCRegionSpecificSubtypeSingaporeEmploymentPass,
/**
     * Added in version 7.0.0
     *
     * Canada Minors Public Services Card.
     */
    SDCRegionSpecificSubtypeCanadaMinorsPublicServicesCard,
/**
     * Added in version 7.0.0
     *
     * Malaysia Mypolis.
     */
    SDCRegionSpecificSubtypeMalaysiaMypolis,
/**
     * Added in version 7.0.0
     *
     * Philippines Nbi Clearance.
     */
    SDCRegionSpecificSubtypePhilippinesNbiClearance,
/**
     * Added in version 7.0.0
     *
     * India Pan Card.
     */
    SDCRegionSpecificSubtypeIndiaPanCard,
/**
     * Added in version 7.0.0
     *
     * Philippines Postal Id.
     */
    SDCRegionSpecificSubtypePhilippinesPostalId,
/**
     * Added in version 7.0.0
     *
     * Pakistan Proof Of Registration.
     */
    SDCRegionSpecificSubtypePakistanProofOfRegistration,
/**
     * Added in version 7.0.0
     *
     * Singapore S Pass.
     */
    SDCRegionSpecificSubtypeSingaporeSPass,
/**
     * Added in version 7.0.0
     *
     * Sweden Sis Id.
     */
    SDCRegionSpecificSubtypeSwedenSisId,
/**
     * Added in version 7.0.0
     *
     * Colombia Temporary Protection Permit.
     */
    SDCRegionSpecificSubtypeColombiaTemporaryProtectionPermit,
/**
     * Added in version 7.0.0
     *
     * US Twic Card.
     */
    SDCRegionSpecificSubtypeUsTwicCard,
/**
     * Added in version 7.0.0
     *
     * US Weapon Permit.
     */
    SDCRegionSpecificSubtypeUsWeaponPermit,
/**
     * Added in version 7.0.0
     *
     * Canada Weapon Permit.
     */
    SDCRegionSpecificSubtypeCanadaWeaponPermit,
/**
     * Added in version 7.0.0
     *
     * Ireland Public Services Card.
     */
    SDCRegionSpecificSubtypeIrelandPublicServicesCard,
/**
     * Added in version 7.0.0
     *
     * Canada Public Services Card.
     */
    SDCRegionSpecificSubtypeCanadaPublicServicesCard,
/**
     * Added in version 7.0.0
     *
     * Pakistan Consular Id.
     */
    SDCRegionSpecificSubtypePakistanConsularId,
/**
     * Added in version 7.0.0
     *
     * Guatemala Consular Id.
     */
    SDCRegionSpecificSubtypeGuatemalaConsularId,
/**
     * Added in version 7.0.0
     *
     * Mexico Consular Id.
     */
    SDCRegionSpecificSubtypeMexicoConsularId,
/**
     * Added in version 7.0.0
     *
     * Philippines Tax Id.
     */
    SDCRegionSpecificSubtypePhilippinesTaxId,
/**
     * Added in version 7.0.0
     *
     * Mexico Tax Id.
     */
    SDCRegionSpecificSubtypeMexicoTaxId,
/**
     * Added in version 7.0.0
     *
     * China One Way Permit.
     */
    SDCRegionSpecificSubtypeChinaOneWayPermit,
/**
     * Added in version 7.0.0
     *
     * US Medical Marijuana Card.
     */
    SDCRegionSpecificSubtypeUsMedicalMarijuanaCard,
/**
     * Added in version 7.0.0
     *
     * US Municipal Id.
     */
    SDCRegionSpecificSubtypeUsMunicipalId,
/**
     * Added in version 7.0.0
     *
     * Australia Asic Card.
     */
    SDCRegionSpecificSubtypeAustraliaAsicCard,
/**
     * Added in version 7.0.0
     *
     * UAE Vehicle Registration Card.
     */
    SDCRegionSpecificSubtypeUaeVehicleRegistrationCard,
} NS_SWIFT_NAME(RegionSpecificSubtype);

/**
 * Added in version 7.0.0
 *
 * Returns a name for the given SDCRegionSpecificSubtype.
 */
SDC_EXTERN NSString *_Nonnull SDCRegionSpecificSubtypeToString(SDCRegionSpecificSubtype subtype);
/**
 * Added in version 7.0.0
 *
 * Returns all subtypes as array.
 */
SDC_EXTERN NSArray<NSNumber *> *_Nonnull SDCAllRegionSpecificSubtypes(void);
