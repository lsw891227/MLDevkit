//
//  NSDate+MLDate.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (MLDate)

//判断是否为今天
-(BOOL)isToday;
//判断是否为昨天
-(BOOL)isYesterday;
//判断是否为今年
-(BOOL)isThisYear;

@end
