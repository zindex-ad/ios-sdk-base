//
//  CXHWeakScriptMessageDelegate.h
//  CXHCore
//
//  Created by Cdionysus on 2018/12/27.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <WebKit/WebKit.h>

@interface CXHWeakScriptMessageDelegate : NSObject <WKScriptMessageHandler>

@property (nonatomic, weak) id<WKScriptMessageHandler> scriptDelegate;

- (instancetype)initWithDelegate:(id<WKScriptMessageHandler>)scriptDelegate;

@end
