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
 * Scans single sided documents.
 */
NS_SWIFT_NAME(SingleSideScanner)
SDC_EXPORTED_SYMBOL
@interface SDCSingleSideScanner : SDCIdCaptureScanner

/**
 * Added in version 7.0.0
 *
 * Creates a new SingleSideScanner instance.
 */
+ (instancetype)scannerEnablingBarcode:(BOOL)barcode
                   machineReadableZone:(BOOL)machineReadableZone
                  visualInspectionZone:(BOOL)visualInspectionZone;

/**
 * Added in version 7.0.0
 *
 * Creates a new SingleSideScanner instance.
 */
- (instancetype)initEnablingBarcode:(BOOL)barcode
                machineReadableZone:(BOOL)machineReadableZone
               visualInspectionZone:(BOOL)visualInspectionZone;

/**
 * Added in version 7.0.0
 *
 * Extracts data from barcodes on identity documents
 */
@property (nonatomic, readonly) BOOL barcode;
/**
 * Added in version 7.0.0
 *
 * Extracts data from the Machine Readable Zone on identity documents
 */
@property (nonatomic, readonly) BOOL machineReadableZone;
/**
 * Added in version 7.0.0
 *
 * Extracts all information from the front side of a card format document or equivalent to “Full Document” for booklet documents
 */
@property (nonatomic, readonly) BOOL visualInspectionZone;

@end

NS_ASSUME_NONNULL_END
