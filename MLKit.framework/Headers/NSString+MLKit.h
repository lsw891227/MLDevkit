//
//  NSString+MLKit.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NSString (MLKit)

//计算nsstring的尺寸，size－最大宽高约束
- (CGSize)zcCalculateSize:(CGSize)size font:(UIFont *)font;

//计算字符串内容个数（长度，汉子也算一个）
- (NSUInteger)doubleByteLegnth;

//只包含数字，中文，英文
- (BOOL)isNumAndCnEn;

//只包含数字，中文，英文，下划线
- (BOOL)isNumAndCnEnLine;

/**
 *  Encode self to an encoded url string
 *
 *  @return Return the encoded NSString
 */
- (NSString *)urlEncode;
@end
