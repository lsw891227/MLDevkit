//
//  MLDefines.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

/*
 *.h中实现，如：DEFINE_SINGLETON_FOR_HEADER(XCDataLoadMsgManage);
 *.m中实现，DEFINE_SINGLETON_FOR_CLASS(XCDataLoadMsgManage);
 *classname，类名（XCDataLoadMsgManage）
 */
#define DEFINE_SINGLETON_FOR_HEADER(className) \
\
+ (className *)shared##className;

#define DEFINE_SINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}

#pragma mark -
#pragma mark 格式化时间
#define YYMMDDHHMM @"yy-MM-dd HH:mm"
#define HH_DEFAULT_TIME_FORM @"HH:mm"
#define DEFAULT_TIME_FORM @"MM/dd HH:mm"
#define DEFAULT_TIME_FORM1 @"MM-dd HH:mm"
#define YY_DEFAULT_TIME_FORM @"yyyy-MM-dd"
#define ALL_DEFAULT_TIME_FORM @"yyyy-MM-dd HH:mm:ss"
#define ALL_DEFAULT_TIME_FORM_FFF @"yyyy-MM-dd HH:mm:ss.SSS"

#define NSDM       [NSFileManager defaultManager]
#define NSUD       [NSUserDefaults standardUserDefaults]
#define NSDC       [NSNotificationCenter defaultCenter]

#define TOKEN           @"verif_token"
