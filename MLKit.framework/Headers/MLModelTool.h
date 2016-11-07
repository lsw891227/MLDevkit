//
//  MLModelTool.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/10/19.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MLDevkit.h"

@interface MLModelTool : NSObject

/*
 *过滤model中的null、nil值
 */
+ (void)checkModelNull_Nil:(id)model;

/*
 *处理空对象字符串
 */
+ (NSString *)notNILLString:(NSString *)str;
@end
