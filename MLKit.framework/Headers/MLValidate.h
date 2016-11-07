//
//  MLValidate.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/10/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

#define SJValidate_PasswdMaxLen 16  //密码最大长度
#define SJValidate_PasswdMinLen 6   //密码最小长度

#define SJValidate_PhoneLen 11      //手机号码长度
#define SJValidate_VerifCodeLen 6   //验证码长度

@interface MLValidate : NSObject

//密码
+ (NSString *)validatePasswd:(NSString *)password;
//电话号
+ (NSString *)validatePhone:(NSString *)phone;
//验证码
+ (NSString *)validateVerifCode:(NSString *)verifCode;
//邮箱
+ (NSString *)validateEmail:(NSString *)email;
//身份证
+ (NSString *)validateIDCard:(NSString *)idcard;
@end
