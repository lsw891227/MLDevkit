//
//  MLImageTool.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MLImageTool : NSObject

/*
 *图片调整到指定大小
 */
+ (UIImage *)scaleToSize:(UIImage *)img size:(CGSize)size;

/*
 *将view转为image
 */
+ (UIImage *)getImageFromView:(UIView *)view;

/*
 *纯色图片
 */
+ (UIImage *)imageWithColor:(UIColor *)aColor withSize:(CGSize)aSize;

/*
 *模糊view，不是图片
 */
+ (__kindof UIView*)effectsViewWithType;

/*
 *自适应裁剪，以imageView的宽高比
 */
+ (UIImage *)cutImage:(UIImage*)image imageV:(UIImageView *)showImageV;

/*
 *@brief  图片大于多少KB会进行压缩
 */
+(UIImage*)compressedImageToLimitSizeOfKB:(CGFloat)kb image:(UIImage*)image;

/*
 *拉伸图片:自定义比例
 */
+(UIImage *)resizeWithImageName:(NSString *)name leftCap:(CGFloat)leftCap topCap:(CGFloat)topCap;

/*
 *图像下载和本地缓存
 *imgV-nil不剪切，有值按值得比例剪切图片
 *
 */
@property (nonatomic,copy)NSString *imageUrl;
@property (nonatomic,copy)void (^completionHandler)(id ,id);

+ (void)downLoadUrl:(NSString *)imgUrl imageV:(UIImageView *)imgV completionHandler:(void(^)(id ,id))result;
- (UIImage *)loadLocalImage;




@end
