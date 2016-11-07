//
//  NSObject+Property.h
//   
//
//  Created on 12-12-15.
//
//
#import <objc/runtime.h>
#import <Foundation/Foundation.h>

@interface NSObject (Property)
- (NSArray *)getPropertyList;
- (NSArray *)getPropertyList: (Class)clazz;
- (NSString *)className;
- (BOOL)checkPropertyName:(NSString *)name;
- (void)dictionaryForObject:(NSDictionary*) dict;
- (void)ObjectForDictionary:(NSMutableDictionary *)dic;
@end
