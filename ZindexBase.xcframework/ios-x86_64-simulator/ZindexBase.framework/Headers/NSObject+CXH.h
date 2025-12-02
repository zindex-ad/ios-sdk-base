//
//  NSObject+CXH.h
//  CXHCore
//
//  Created by Cdionysus on 2018/12/16.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (CXH)

- (NSDictionary *)CXH_toDictionary;

@end

@interface NSArray (CXH)

- (id)CXH_objectOrNilAtIndex:(NSUInteger)index;

@end

@interface NSMutableArray (CXH)

- (void)CXH_addObjectSafely:(id)anObject;

@end

@interface NSDictionary (CXH)

- (id)CXH_objectOrNilForKey:(id)key;

@end


@interface NSMutableDictionary (CXH)

- (void)CXH_setValidValue:(id)value forKey:(id<NSCopying>)key;

@end
