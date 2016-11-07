//
//  MLFileManager.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/10/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLFileManager : NSObject

//写
+ (BOOL)writeWithName:(NSString *)name data:(NSData *)data;
//读
+ (NSData *)readWithName:(NSString *)name;
//清理
+ (BOOL)clearWithName:(NSString *)name;

@end
