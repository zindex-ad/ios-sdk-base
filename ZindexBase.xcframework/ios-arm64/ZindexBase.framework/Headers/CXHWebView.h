//
//  CXHWebView.h
//  WebViewTest
//
//  Created by Cdionysus on 2018/12/25.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
#import <ZindexBase/CXHWeakScriptMessageDelegate.h>

NS_ASSUME_NONNULL_BEGIN

@class CXHWebView;

@protocol CXHWebViewDelegate <NSObject>

@optional

- (BOOL)webView:(CXHWebView *)webView shouldStartLoadWithRequest:(nonnull NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType;

- (void)webviewDidStartLoad:(CXHWebView *)webView;

- (void)webViewDidFinishLoad:(CXHWebView *)webView;

- (void)webView:(CXHWebView *)webView didFailLoadWithError:(nonnull NSError *)error;

@end

typedef void (^CXHWebViewJavascriptEvaluationCompletionHandler)(id result, NSError *error);
typedef void (^CXHWebViewScriptMessageHandler)(WKUserContentController *controller, WKScriptMessage *message);

@interface CXHWebView : UIView

@property (nonatomic, weak) id<CXHWebViewDelegate> delegate;

@property (nonatomic, readonly, getter=isLoading) BOOL loading;

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= MP_IOS_9_0
@property (nonatomic) BOOL allowsLinkPreview;
@property (nonatomic, readonly) BOOL allowsPictureInPictureMediaPlayback;
#endif


- (void)loadHTMLString:(NSString *)string baseURL:(nullable NSURL *)baseURL;

- (void)loadRequest:(NSURLRequest *)request;
- (void)stopLoading;
- (void)reload;

@property (nonatomic) BOOL scalesPageToFit;
// default is 'NO'
@property (nonatomic) BOOL forbiddenUserSelect;
@property (nonatomic, readonly) UIScrollView *scrollView;
// only available in WKWebView
@property (nonatomic, readonly) WKWebViewConfiguration *wkConfiguration;

- (void)evaluateJavaScript:(NSString *)javaScriptString completionHandler:(_Nullable CXHWebViewJavascriptEvaluationCompletionHandler)completionHandler;
- (void)addScriptMessageHandlerForName:(NSString *_Nonnull)name handler:(CXHWebViewScriptMessageHandler)handler;

@property (nonatomic, readonly) BOOL allowsInlineMediaPlayback;
@property (nonatomic, readonly) BOOL mediaPlaybackRequiresUserAction;
@property (nonatomic, readonly) BOOL mediaplaybackallowsAirplay;

@end

NS_ASSUME_NONNULL_END
