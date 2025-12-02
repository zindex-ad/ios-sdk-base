//
//  CXHRcWebView.h
//  CXHAdSDK-RC
//
//  Created by 陈坤 on 2022/6/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class CXHWebView;

@class CXHRcAdTaskModel;

@interface CXHRcWebView : UIView

@property (nonatomic, strong) CXHWebView *webView;
/// 当前运行渠道
@property (nonatomic, readonly, copy) NSString *channel;
/// 是否在加载中
@property (nonatomic, readonly, assign) BOOL isLoading;

@property (nonatomic, readonly, strong) NSDate *lastStartLoadDate;

- (void)loadTask:(CXHRcAdTaskModel *)taskModel js:(NSString *)js;

@end

NS_ASSUME_NONNULL_END
