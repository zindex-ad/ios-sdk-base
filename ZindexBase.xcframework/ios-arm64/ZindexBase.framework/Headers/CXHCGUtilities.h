//
//  CXHCGUtilities.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <UIKit/UIKit.h>

CGFloat CXHScreenScale(void);

CGSize CXHScreenSize(void);

/// 状态栏高度
FOUNDATION_EXTERN CGFloat CXHStatusBarHeight(void);

// main screen's scale
#ifndef kCXHScreenScale
#define kCXHScreenScale CXHScreenScale()
#endif

// main screen's size (portrait)
#ifndef kCXHScreenSize
#define kCXHScreenSize CXHScreenSize()
#endif

// main screen's width (portrait)
#ifndef kCXHScreenWidth
#define kCXHScreenWidth CXHScreenSize().width
#endif

// main screen's height (portrait)
#ifndef kCXHScreenHeight
#define kCXHScreenHeight CXHScreenSize().height
#endif

#ifndef kStatusBarHeight
#define kStatusBarHeight CXHStatusBarHeight()
#endif

