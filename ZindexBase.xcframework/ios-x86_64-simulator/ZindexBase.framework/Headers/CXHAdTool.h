//
//  CXHAdTool.h
//  CXHAdSDK
//
//  Created by 陈坤 on 2022/6/13.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXHAdTool : NSObject

+ (void)openSchemeURL:(NSURL *)schemeURL completionHandler:(void (^)(BOOL opened))completionHandler;

+ (NSString *)randomString:(NSInteger)number;

+ (NSString *)mcid;

+ (UIWindow *)getWindow:(UIView *)view;

+ (CGPoint)getTouchPoint:(CGSize)adSize;

+ (CGPoint)getScreenPoint:(CGPoint)point view:(UIView *)view;

@end

NS_ASSUME_NONNULL_END
