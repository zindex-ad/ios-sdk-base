//
//  CXHRcAdInitialize.h
//  CXHAdSDK-RC
//
//  Created by 陈坤 on 2022/7/6.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXHRcAdInitialize : NSObject

+ (void)initializeSDKWithDomain:(NSString *)requestDomain;

+ (NSString *)platformSDKVersion;

@end

NS_ASSUME_NONNULL_END
