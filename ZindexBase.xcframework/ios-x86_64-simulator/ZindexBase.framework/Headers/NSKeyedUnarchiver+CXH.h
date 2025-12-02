//
//  NSKeyedUnarchiver+CXH.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSKeyedUnarchiver (CXH)

+ (nullable id)CXH_unarchiveObjectWithData:(NSData *)data exception:(NSException *_Nullable *_Nullable)exception;

+ (nullable id)CXH_unarchiveObjectWithFile:(NSString *)path exception:(NSException *_Nullable *_Nullable)exception;

@end

NS_ASSUME_NONNULL_END
