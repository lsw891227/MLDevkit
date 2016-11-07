//
//  UIImage+MLDevkit.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MLDevkit)

/*
 *裁切
 */
- (UIImage *)cropImageWithX:(CGFloat)x y:(CGFloat)y width:(CGFloat)width height:(CGFloat)height;

/*
 * 圆角
 * image 图片对象
 * size 尺寸
 */
+ (id)createRoundedRectImage:(UIImage*)image size:(CGSize)size;

/*
 *毛玻璃效果
 */
- (UIImage *)applyLightEffect;
- (UIImage *)applyExtraLightEffect;
- (UIImage *)applyDarkEffect;
- (UIImage *)applyTintEffectWithColor:(UIColor *)tintColor;
- (UIImage *)applyBlurWithRadius:(CGFloat)blurRadius tintColor:(UIColor *)tintColor saturationDeltaFactor:(CGFloat)saturationDeltaFactor maskImage:(UIImage *)maskImage;


@end
