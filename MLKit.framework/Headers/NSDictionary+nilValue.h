//
//  NSDictionary+nilValue.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/10/19.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDictionary (nilValue)

//nil
- (id)nilObjectForKey:(NSString *)key;
@end
