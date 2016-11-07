//
//  MLMessageError.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//


@protocol MLMessageError<NSObject>

@required

@property (nonatomic,assign) int code;  //错误码
@property (nonatomic,copy) NSString *msg;  //错误描述

+ (id<MLMessageError>)initWithError:(int)code msg:(NSString *)msg;
@end
