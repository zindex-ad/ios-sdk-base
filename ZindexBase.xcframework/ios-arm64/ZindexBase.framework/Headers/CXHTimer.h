//
//  CXHTimer.h
//  CXHCore
//
//  Created by Cdionysus on 2018/12/12.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CXHTimer : NSObject

/// default is 'NSDefaultRunLoopMode'
@property (nonatomic, copy) NSRunLoopMode runLoopMode;

+ (NSTimeInterval)currentTimeInterval;

+ (CXHTimer *)timerWithTimeInterval:(NSTimeInterval)ti
                              target:(id)aTarget
                            selector:(SEL)aSelector
                             repeats:(BOOL)yesOrNo;

@property (readonly, assign) NSTimeInterval timeInterval;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, getter=isScheduled) BOOL scheduled;

- (void)invalidate;
- (BOOL)scheduleImmediately:(BOOL)immediately;
- (BOOL)pause;
- (BOOL)resume;

@end
