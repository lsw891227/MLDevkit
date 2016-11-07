//
//  NSMutableArray+MLKit.h
//  MLDevKit
//
//  Created by 刘双伟 on 16/7/20.
//  Copyright © 2016年 刘双伟. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableArray (MLKit)

/**
 *  Move an object from an index to another
 *
 *  @param from The index to move from
 *  @param to   The index to move to
 */
- (void)moveObjectFromIndex:(NSUInteger)from
                    toIndex:(NSUInteger)to;

/**
 *  Create a reversed array from self
 *
 *  @return Return the reversed array
 */
- (NSMutableArray *)reversedArray;

/*
 *array-字典或model的集合，key-字典的key或model的属性,ascending-升序或者降序
 */
+ (NSMutableArray *)sortArrayByKey:(NSString *)key
                             array:(NSMutableArray *)array
                         ascending:(BOOL)ascending;

@end
