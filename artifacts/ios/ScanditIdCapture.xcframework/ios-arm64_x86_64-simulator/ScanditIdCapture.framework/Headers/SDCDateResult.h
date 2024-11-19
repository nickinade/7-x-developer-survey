/*
 * This file is part of the Scandit Data Capture SDK
 *
 * Copyright (C) 2017- Scandit AG. All rights reserved.
 */

#import <Foundation/Foundation.h>
#import <ScanditCaptureCore/ScanditCaptureCore.h>

NS_ASSUME_NONNULL_BEGIN

/**
 * Added in version 6.5.0
 *
 * A date extracted from a personal identification document. May represent either a full date (day, month, year), just a month and a year or just a year.
 */
NS_SWIFT_NAME(DateResult)
SDC_EXPORTED_SYMBOL
@interface SDCDateResult : NSObject

/**
 * Added in version 6.5.0
 *
 * The extracted day of the month or 0 if this result represents a month and a year only.
 */
@property (nonatomic, readonly) NSInteger day;
/**
 * Added in version 6.5.0
 *
 * A number from 1 to 12 representing the extracted month, where 1 represents January, 2 - February and so on or 0 if the results represents a year only.
 */
@property (nonatomic, readonly) NSInteger month;
/**
 * Added in version 6.5.0
 *
 * The extracted year.
 */
@property (nonatomic, readonly) NSInteger year;
/**
 * Added in version 6.5.0
 *
 * A Date corresponding to this DateResult. The timezone is set to UTC, the time to midnight. If the day information is missing, it is set to the 1st day of the month, if the month information is missing, it is set to the 1st month of the year.
 *
 * Deprecated since version 6.19.0: Use localDate or utcDate instead.
 */
@property (nonatomic, nonnull, readonly)
    NSDate *date DEPRECATED_MSG_ATTRIBUTE("Use localDate and utcDate instead");

/**
 * Added in version 6.19.0
 *
 * A Date corresponding to this DateResult using the local timezone. If the day information is missing, it is set to the 1st day of the month, if the month information is missing, it is set to the 1st month of the year
 */
@property (nonatomic, nonnull, readonly) NSDate *localDate;
/**
 * Added in version 6.19.0
 *
 * A Date corresponding to this DateResult. The timezone is set to UTC, the time to midnight. If the day information is missing, it is set to the 1st day of the month, if the month information is missing, it is set to the 1st month of the year.
 */
@property (nonatomic, nonnull, readonly) NSDate *utcDate;

+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

@end

NS_ASSUME_NONNULL_END
