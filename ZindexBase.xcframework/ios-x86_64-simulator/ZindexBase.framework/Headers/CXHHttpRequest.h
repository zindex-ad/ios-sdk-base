//
//  CXHHttpRequest.h
//  CXHNetworking
//
//  Created by Cdionysus on 2018/12/7.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, CXHHttpRequestSerializerType) {
    CXHHttpRequestSerializerTypeHTTP = 0,
    CXHHttpRequestSerializerTypeJSON,
};

typedef NS_ENUM(NSInteger, CXHHttpResponseSerializerType) {
    // nsdata serializer
    CXHHttpResponseSerializerTypeHTTP = 0,
    // json serializer
    CXHHttpResponseSerializerTypeJSON,
    // xml serializer
    CXHHttpResponseSerializerTypeXMLParser,
};

@class CXHHttpRequest;
@protocol CXHHttpRequestDelegate <NSObject>

- (void)CXH_httpRequestSuccess:(CXHHttpRequest *)request;
- (void)CXH_httpRequestFail:(CXHHttpRequest *)request;

@end

typedef void(^CXHHttpRequestCompletionBlock)(CXHHttpRequest *request);

@interface CXHHttpRequest : NSObject

#pragma mark - Getter

@property (nonatomic, strong, readonly) NSURLSessionTask *requestTask;
@property (nonatomic, strong, readonly) NSHTTPURLResponse *response;
@property (nonatomic, strong, readonly) id responseObject;
@property (nonatomic, strong, readonly, nullable) NSError *error;

@property (nonatomic, readonly, getter=isCancelled) BOOL cancelled;
@property (nonatomic, readonly, getter=isExecuting) BOOL execution;

#pragma mark - Construction Setter

@property (nonatomic, copy) NSString *baseUrl;
@property (nonatomic, copy) NSString *requestUrl;
@property (nonatomic, copy) NSString *HTTPMethod;
/// default is 10 seconds
@property (nonatomic, assign) NSTimeInterval timeoutInterval;
/// default is 'CXHHttpRequestSerializerTypeHTTP'
@property (nonatomic, assign) CXHHttpRequestSerializerType requestSerializerType;
/// default is 'CXHHttpRequestSerializerTypeJSON'
@property (nonatomic, assign) CXHHttpResponseSerializerType responseSerializerType;
@property (nonatomic, strong, nullable) id requestArguments;
@property (nonatomic, strong, nullable) NSDictionary<NSString *, NSString *> *HTTPHeaderFields;

#pragma mark - Callback setter

@property (nonatomic, copy, nullable) CXHHttpRequestCompletionBlock successBlcok;
@property (nonatomic, copy, nullable) CXHHttpRequestCompletionBlock failureBlock;

@property (nonatomic, weak, nullable) id<CXHHttpRequestDelegate> delegate;

#pragma mark - Action

- (void)send;

- (void)cancel;

@end

NS_ASSUME_NONNULL_END
