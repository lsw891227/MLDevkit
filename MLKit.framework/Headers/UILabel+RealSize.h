//
//  UILabel+RealSize.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreText/CoreText.h>

@interface UILabel (RealSize)

/*
 *顶部显示
 */
- (void)alignTop;

/**
 *  控制显示行数
 *  @param lines            指定行数
 *  @param text             文本
 *  @param characterSpace   字间距，nil为0.3
 *  @param lineSpacing      行间距
 *  @param limitWidth       指定宽度
 *
 *  @return Label的size
 */
- (CGSize)setLines:(NSInteger)lines andText:(NSString *)text characterSpace:(CGFloat)characterSpace lineSpacing:(CGFloat)lineSpacing limitWidth:(CGFloat)limitWidth;
@end
