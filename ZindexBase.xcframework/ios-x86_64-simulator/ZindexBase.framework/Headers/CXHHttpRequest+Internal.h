//
//  CXHHttpRequest+Internal.h
//  CXHNetworking
//
//  Created by Cdionysus on 2018/12/10.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <ZindexBase/CXHHttpRequest.h>

@interface CXHHttpRequest ()

@property (nonatomic, strong, readwrite) NSURLSessionTask *requestTask;
@property (nonatomic, strong, readwrite) id responseObject;
@property (nonatomic, strong, readwrite) NSError *error;

- (void)clearCompletionBlock;

@end
