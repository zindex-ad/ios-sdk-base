//
//  CXHHttpRequestAgent.h
//  CXHNetworking
//
//  Created by Cdionysus on 2018/12/7.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class CXHHttpRequest;

@interface CXHHttpRequestAgent : NSObject

@property (nonatomic, readonly, strong) NSOperationQueue *operationQueue;

+ (CXHHttpRequestAgent *)sharedAgent;

- (void)addRequest:(CXHHttpRequest *)request;
- (void)cancelRequest:(CXHHttpRequest *)request;
- (BOOL)containsRequest:(CXHHttpRequest *)request;
- (void)cancelAllRequest;

@end

NS_ASSUME_NONNULL_END
