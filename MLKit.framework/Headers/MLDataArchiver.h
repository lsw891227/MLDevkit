//
//  MLDataArchiver.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/10/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLDataArchiver : NSObject

//保存信息到文件
+ (BOOL)saveArchiverData:(NSArray *)labels;

//从文件导入
+ (NSArray *)loadArchiverData;
@end
