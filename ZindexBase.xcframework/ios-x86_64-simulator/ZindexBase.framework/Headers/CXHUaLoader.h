//
//  CXHUaLoader.h
//  CXHAdSDK-Kit
//
//  Created by 陈坤 on 2022/11/27.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXHUaLoader : NSObject

+ (instancetype)sharedInstance;

- (void)loadUserAgent;

- (void)setDefaultUserAgent:(NSString *)ua;

- (NSString *)useragent;

@end

NS_ASSUME_NONNULL_END
