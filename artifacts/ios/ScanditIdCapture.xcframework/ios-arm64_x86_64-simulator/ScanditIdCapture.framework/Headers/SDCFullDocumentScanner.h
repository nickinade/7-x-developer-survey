/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <ScanditCaptureCore/ScanditCaptureCore.h>
#import <ScanditIdCapture/SDCIdCaptureScanner.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 7.0.0
 *
 * Extracts all information, from all the sides of an identity documents.
 *
 * For card format documents it means scanning the front & the back side of the card (if supported).
 *
 * For booklet documents (e.g. passports) it means scanning the full information page
 */
NS_SWIFT_NAME(FullDocumentScanner)
SDC_EXPORTED_SYMBOL
@interface SDCFullDocumentScanner : SDCIdCaptureScanner

/**
 * Added in version 7.0.0
 *
 * Creates a new FullDocumentScanner instance.
 */
+ (instancetype)scanner;
/**
 * Added in version 7.0.0
 *
 * Creates a new FullDocumentScanner instance.
 */
- (instancetype)init;

@end

NS_ASSUME_NONNULL_END
