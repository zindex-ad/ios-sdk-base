//
//  CXHRcAdTool.h
//  CXHAdSDK-RC
//
//  Created by 陈坤 on 2022/6/19.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define CXHRcErrorDomain @"com.CXHRC.error"

FOUNDATION_EXPORT NSError *CXHRcError(NSErrorDomain domain, NSInteger code, NSString *localizedDescription);

FOUNDATION_EXPORT NSError *CXHRcErrorDefaultDomain(NSInteger code, NSString *localizedDescription);

@interface CXHRcAdTool : NSObject

+ (NSString *)encodeSpecialUrlString:(NSString *)string;

+ (NSString *)changeAdverUrl:(NSString *)url;

+ (NSString *)randomString:(NSInteger)number;

+ (NSString *)requestParam;

+ (NSDictionary *)decryptData:(NSData *)data;

+ (NSString *)sdkVersion;

@end

NS_ASSUME_NONNULL_END
