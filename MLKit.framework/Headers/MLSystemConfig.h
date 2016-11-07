//
//  MLSystemConfig.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/10/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLSystemConfig : NSObject

//获取单利
+ (MLSystemConfig *)shared;

//初始化信息
@property(assign, nonatomic) NSInteger ver;     //应用当前版本号整数值
@property(copy, nonatomic) NSString *udid;      //设备唯一码, Android可能会获取不到
@property(copy, nonatomic) NSString *bundle;    //com.bendiinc.bendi	应用的标识
@property(copy, nonatomic) NSString *os;        //[iOS/Android/Windows Phone/Mac OS/Windows]
@property(copy, nonatomic) NSString *osVersion; //系统版本
@property(copy, nonatomic) NSString *language;  //zh-CN	系统的语言
@property(copy, nonatomic) NSString *screen;    //屏幕的垂直分辨率(单位:像素), 以x分隔宽高
@property(copy, nonatomic) NSString *model;     //设备型号(exp:iPhone 6 Plus)

@property (readonly, nonatomic) BOOL printApiLog;
@end
