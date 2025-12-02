//
//  UIApplication+CXH.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/29.
//  
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIApplication (CXH)

- (NSString *)CXH_ua;

- (NSError *)setApplicationUa:(NSString *)ua;

/// "Documents"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *CXH_documentsURL;
@property (nonatomic, readonly) NSString *CXH_documentsPath;

/// "Caches"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *CXH_cachesURL;
@property (nonatomic, readonly) NSString *CXH_cachesPath;

/// "Library"在沙盒中文件夹路径
@property (nonatomic, readonly) NSURL *CXH_libraryURL;
@property (nonatomic, readonly) NSString *CXH_libraryPath;

/// Application's Bundle Name (show in SpringBoard).
@property (nullable, nonatomic, readonly) NSString *CXH_appBundleName;

/// Application's Bundle ID.  e.g. "com.XXX.MyApp"
@property (nullable, nonatomic, readonly) NSString *CXH_appBundleID;

/// Application's Version.  e.g. "1.2.0"
@property (nullable, nonatomic, readonly) NSString *CXH_appVersion;

/// Application's Build number. e.g. "123"
@property (nullable, nonatomic, readonly) NSString *CXH_appBuildVersion;

/// app是否是盗版(不是从app store下载的)
@property (nonatomic, readonly) BOOL CXH_isPirated;

/// app是否正在被调试
@property (nonatomic, readonly) BOOL CXH_isBeingDebugged;


@end

NS_ASSUME_NONNULL_END
