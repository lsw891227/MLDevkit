//
//  MLDateManagerTool.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLDateManagerTool : NSObject
/*
 *日期
 */
+ (NSString *)dateFormatter:(NSDate *)date format:(NSString *)format;
+ (NSDate *)stringToDate:(NSString *)string format:(NSString *)format;

//时间日期处理
+ (NSString *)strWithTimeInterval:(NSTimeInterval)time format:(NSString *)format;
+ (NSTimeInterval)timeIntervalWithStr:(NSString *)stime format:(NSString *)format;

/*
 *long型转为data或字符型,type为nil返回string类型
 */
+ (id)secondTodate:(NSString *)second  type:(NSString *)type format:(NSString *)format;
+ (long long int)dateToSecond:(id)date;

/**
 *时间戳转换eg：@"Nov 25, 2014 11:28:41 AM" to @"yyyy-MM-dd HH:mm:ss"
 */
+ (NSString *)englishToString:(NSString *)string;

/**
 *时间戳转换eg: @"yyyy-MM-dd HH:mm:ss" to @"Nov 25, 2014 11:28:41 AM"
 */
+ (NSString *)stringToEnglish:(id)date;

/*
 *@param compareDate,
 *return 刚刚，x分钟前--
 */
+ (NSString *)compareCurrentTime:(NSDate*)compareDate;

//毫秒时间戳
+ (UInt64)timestamp;
+ (NSTimeInterval)dtimestamp;

@end
