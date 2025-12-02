//
//  CXHMacro.h
//  CXHCore
//
//  Created by Cdionysus on 2018/12/13.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#ifndef CXHMacro_h
#define CXHMacro_h

#define CXH_SUPPRESS_PERFORM_SELECTOR_LEAK_WARNING(code) \
    _Pragma("clang diagnostic push") \
    _Pragma("clang diagnostic ignored \"-Warc-performSelector-leaks\"") \
    code; \
    _Pragma("clang diagnostic pop")

#ifndef CXH_dispatch_main_async_safe
#define CXH_dispatch_main_async_safe(block)    \
    if (strcmp(dispatch_queue_get_label(DISPATCH_CURRENT_QUEUE_LABEL), dispatch_queue_get_label(dispatch_get_main_queue())) == 0) { \
        block();    \
    } else {    \
        dispatch_async(dispatch_get_main_queue(), block);   \
    }
#endif


#define kCXHStringIsEmpty(str) ([str isKindOfClass:[NSNull class]] || str == nil || ![str isKindOfClass:[NSString class]] || [str length] < 1 ? YES : NO)
#define kCXHArrayIsEmpty(array) (array == nil || [array isKindOfClass:[NSNull class]] || ![array isKindOfClass:[NSArray class]] || array.count == 0)
#define kCXHDictIsEmpty(dict) (dict == nil || [dict isKindOfClass:[NSNull class]] || ![dict isKindOfClass:[NSDictionary class]] || dict.allKeys.count == 0)
#define kCXHObjectIsEmpty(_object) (_object == nil \
|| [_object isKindOfClass:[NSNull class]] \
|| ([_object respondsToSelector:@selector(length)] && [(NSData *)_object length] == 0) \
|| ([_object respondsToSelector:@selector(count)] && [(NSArray *)_object count] == 0))

// 机型UI适配宏
#define kCXHIPhoneX (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kCXHScreenWidth == 375.0 && kCXHScreenHeight == 812.0))
#define kCXHIphoneXS (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kCXHScreenWidth == 375.0 && kCXHScreenHeight == 812.0))
#define kCXHIphoneXR (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kCXHScreenWidth == 414.0 && kCXHScreenHeight == 896.0) && (kScreenScale == 2))
#define kCXHIphoneXS_MAX (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone && (kCXHScreenWidth == 414.0 && kCXHScreenHeight == 896.0) && (kScreenScale == 3))
#define kCXHCurveScreen (CGSizeEqualToSize(CGSizeMake(375.f, 812.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(812.f, 375.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(414.f, 896.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(896.f, 414.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(844.f, 390.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(812.f, 375.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(844.f, 390.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(926.f, 428.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(375.f, 812.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(390.f, 844.f), [UIScreen mainScreen].bounds.size) \
|| CGSizeEqualToSize(CGSizeMake(428.f, 926.f), [UIScreen mainScreen].bounds.size)) // 刘海屏幕

#define kCXHStatusBarHeight (kCXHCurveScreen ? 44 : 20)
#define kCXHNavBarHeight ([UIDevice currentDevice].CXH_isPad ? 50 : 44)
#define kCXHTopBarHeight (kCXHStatusBarHeight + kCXHNavBarHeight)
#define kCXHTabBarHeight (kCXHCurveScreen ? 83 : 49)
#define kCXHBottomSafeHeight (kCXHStatusBarHeight>20?34:0)

#endif /* CXHMacro_h */
