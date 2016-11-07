//
//  MLMD5Util.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h> 

@interface MLMD5Util : NSObject

+ (NSString *) md5:(NSString *)str;
+ (NSString *) md5ForFileContent:(NSString *)file;
+ (NSString *) md5ForData:(NSData *)data;

@end
