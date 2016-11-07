//
//  MLDevUtil.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "pinyin.h"
#import <UIKit/UIKit.h>

typedef NS_OPTIONS(NSInteger, SW_NETWORK_STATUS){
    
    SW_Unknow = 1 << 0,
    SW_2G = 1 << 1,
    SW_3G = 1 << 2,
    SW_4G = 1 << 3,
    SW_WIFI = 1 <<4
};


@interface MLDevUtil : NSObject

/**
 *设置label行间距
 */
+ (void)setLableSpacing:(UILabel *)label string:(NSString *)str level:(CGFloat)space;

/**
 *netWork
 */
+ (SW_NETWORK_STATUS)netWorkStatus;

/*
 *隐藏所有键盘
 */
+ (void)hideKeyBoard;

/*
 *过滤表情
 */
+ (NSString *)disable_emoji:(NSString *)text;

/*
 *头像沙盒存取，Library
 */
+ (UIImage *)getIconFromDocumentLibrary;
+ (NSString *)writeIconToDocumentLibrary:(UIImage *)tempImage;

/*
 *资源路径，filename- xx.png
 */
+ (NSString *)getBundleResourcePath:(NSString *)fileName;
+ (NSString *)getResourcePath:(NSString *)fileName;

/*
 *json与dictionary互转
 */
+ (NSString *)stringWithJsonDic:(id)dic;
+ (NSDictionary *)dictionaryWithJSONString:(NSString *)jsonString;

/*
 *获取随机颜色color
 */
+ (UIColor *)getRandomColor;

/*
 *array,英文字符串数组，根据字母排序
 */
+ (NSArray *)sortByPinyin:(NSMutableArray *)array;

/**
 *字典数组，字典某value值字母排序,只需传一个数组，返回排好的数组
 */
+ (NSMutableArray *)sortByShouZiMu:(NSMutableArray *)array;

/**
 *通讯录排序,parms参数 @{@"code":@"name"} 传入字典code为key分组name字段
 */
+ (NSMutableArray *)coorDic:(NSMutableArray *)array parms:(id)parms;

/**
 *obj-对象
 */
+ (void)setObjProperty:(id)obj key:(NSString *)key value:(id)value;

//密码
+ (NSString *)validatePasswd:(NSString *)password;

#pragma mark 验证
+ (BOOL)isMobileNumber:(NSString *)mobileNum;
/**
 *验证邮箱
 *@return YES是邮箱格式 NO不是邮箱格式
 */
#define xcCheckEmail @"\\b([a-zA-Z0-9%_.+\\-]+)@([a-zA-Z0-9.\\-]+?\\.[a-zA-Z]{2,6})\\b"
+ (BOOL)checkEmail:(NSString *)str;
/**
 *验证网站
 *@return YES是网站 NO不是网站
 */
#define xcCheckHttp  @"^((https?|ftp|news):\\/\\/)?([a-z]([a-z0-9\\-]*[\\.。])+([a-z]{2}|aero|arpa|biz|com|coop|edu|gov|info|int|jobs|mil|museum|name|nato|net|org|pro|travel)|(([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5])\\.){3}([0-9]|[1-9][0-9]|1[0-9]{2}|2[0-4][0-9]|25[0-5]))(\\/[a-z0-9_\\-\\.~]+)*(\\/([a-z0-9_\\-\\.]*)(\\?[a-z0-9+_\\-\\.%=&]*)?)?(#[a-z][a-z0-9_]*)?$"
+ (BOOL)checkHttpPag:(NSString *)str;
/**
 *只能是数字
 *@return YES NO
 */
#define xcCheckN  @"^[0-9]*$"
+ (BOOL)checkN:(NSString *)str;

/**
 *只能是n位的数字 n-m之间位数 至少n位数
 *@return YES NO
 */
#define xcCheckNN(n) [NSString stringWithFormat:@"^d{%d}$",n]
+ (BOOL)checkNN:(NSString *)str n:(int)n;
#define xcCheckNToM(n,m) [NSString stringWithFormat:@"^d{%d,%d}$",n,m]
+ (BOOL)checkNToM:(NSString *)str n:(int)n m:(int)m;
#define xcCheckNAtLeastN(n)  [NSString stringWithFormat:@"^d{%d,}$",n]
+ (BOOL)checkNAtLeastN:(NSString *)str n:(int)n;

/**
 *只能是汉字
 *@return YES NO
 */
#define xcCheckChineseCharacter  @"^[u4e00-u9fa5],{0,}$"
+ (BOOL)checkChineseCharacter:(NSString *)str;

@end


@interface ChineseString : NSObject

@property(copy,nonatomic)NSString *string;
@property(copy,nonatomic)NSString *pinYin;
@end

@interface XCCardCollectionModel : NSObject
@property (nonatomic,copy) NSString *_id,*company_id,*company_name,*create_time,*deleted,*name_spell;
@property (nonatomic,copy) NSString *s_avatar,*staff_id,*staff_name,*staff_no,*tel;
@property (nonatomic,copy) NSString *is_accept,*is_ignore,*notifier;
@property (nonatomic,copy) NSString *pinyin;
@end

