//
//  CXHRcWebViewManager.h
//  CXHAdSDK-RC
//
//  Created by 陈坤 on 2022/6/13.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXHRcWebViewManager : NSObject

@property (nonatomic, assign, readonly) BOOL isStart;

@property (nonatomic, copy) NSString *requestDomain;

+ (instancetype)sharedInstance;

- (void)start;

- (void)setDebug:(BOOL)isDebug;

@end

NS_ASSUME_NONNULL_END
