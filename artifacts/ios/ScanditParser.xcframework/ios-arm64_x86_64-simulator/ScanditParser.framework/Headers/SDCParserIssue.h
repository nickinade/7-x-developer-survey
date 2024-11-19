/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>

#import <ScanditCaptureCore/SDCBase.h>

NS_ASSUME_NONNULL_BEGIN

SDC_EXTERN NSString *const SDCParserErrorDomain;
SDC_EXTERN NSString *const SDCParserIssueErrorDomain;
/**
 * Added in version 6.17.0
 *
 * Error code identifying the cause of the parser issue.
 */
typedef NS_ERROR_ENUM(SDCParserIssueErrorDomain, SDCParserIssueErrorCode){
/**
     * Added in version 6.17.0
     *
     * No issue found
     */
    SDCParserIssueErrorCodeNone = 0,
/**
     * Added in version 6.17.0
     *
     * Unspecified issue found
     */
    SDCParserIssueErrorCodeUnspecified = 2,
/**
     * Added in version 6.17.0
     *
     * Mandatory EPD missing
     */
    SDCParserIssueErrorCodeMandatoryEpdMissing = 1000,
/**
     * Added in version 6.17.0
     *
     * Invalid date
     */
    SDCParserIssueErrorCodeInvalidDate = 1001,
/**
     * Added in version 6.17.0
     *
     * String too short
     */
    SDCParserIssueErrorCodeStringTooShort = 1002,
/**
     * Added in version 6.17.0
     *
     * Wrong starting characters
     */
    SDCParserIssueErrorCodeWrongStartingCharacters = 1003,
/**
     * Added in version 6.17.0
     *
     * Invalid separation between elements
     */
    SDCParserIssueErrorCodeInvalidSeparationBetweenElements = 1004,
/**
     * Added in version 6.17.0
     *
     * Unsupported version
     */
    SDCParserIssueErrorCodeUnsupportedVersion = 1005,
/**
     * Added in version 6.17.0
     *
     * Incomplete code
     */
    SDCParserIssueErrorCodeIncompleteCode = 1006,
/**
     * Added in version 6.17.0
     *
     * Empty element content
     */
    SDCParserIssueErrorCodeEmptyElementContent = 1007,
/**
     * Added in version 6.17.0
     *
     * Invalid element length
     */
    SDCParserIssueErrorCodeInvalidElementLength = 1008,
/**
     * Added in version 6.17.0
     *
     * Element is too long
     */
    SDCParserIssueErrorCodeTooLongElement = 1009,
/**
     * Added in version 6.17.0
     *
     * Content found in an element that should be empty
     */
    SDCParserIssueErrorCodeNonEmptyElementContent = 1010,
/**
     * Added in version 6.17.0
     *
     * Invalid characterset in an element
     */
    SDCParserIssueErrorCodeInvalidCharsetInElement = 1011,
/**
     * Added in version 6.17.0
     *
     * Too many alt PMT fields
     */
    SDCParserIssueErrorCodeTooManyAltPmtFields = 1012,
/**
     * Added in version 6.17.0
     *
     * The content cannot contain spaces
     */
    SDCParserIssueErrorCodeCannotContainSpaces = 1013,
} NS_SWIFT_NAME(ParserIssueErrorCode);

SDC_EXTERN NSErrorUserInfoKey const SDCParserIssueStartingCharactersErrorUserInfoKey;
SDC_EXTERN NSErrorUserInfoKey const SDCParserIssueVersionErrorUserInfoKey;
SDC_EXTERN NSErrorUserInfoKey const SDCParserIssueMinimalVersionErrorUserInfoKey;
SDC_EXTERN NSErrorUserInfoKey const SDCParserIssueElementNameErrorUserInfoKey;
SDC_EXTERN NSErrorUserInfoKey const SDCParserIssueStringErrorUserInfoKey;
SDC_EXTERN NSErrorUserInfoKey const SDCParserIssueLengthErrorUserInfoKey;
SDC_EXTERN NSErrorUserInfoKey const SDCParserIssueCharsetErrorUserInfoKey;

/**
 * Added in version 6.17.0
 */
NS_SWIFT_NAME(ParserIssue)
SDC_EXPORTED_SYMBOL
@interface SDCParserIssue : NSObject

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

/**
 * Added in version 6.17.0
 *
 * Error code identifying the cause of the issue.
 */
@property (nonatomic, readonly) SDCParserIssueErrorCode code;
/**
 * Added in version 6.17.0
 *
 * English description of the error
 */
@property (nonatomic, readonly) NSString *message;
/**
 * Added in version 6.17.0
 *
 * Dictionary that provides additional info regarding the error.
 */
@property (nonatomic, readonly) NSDictionary *additionalInfo;

@end

NS_ASSUME_NONNULL_END
