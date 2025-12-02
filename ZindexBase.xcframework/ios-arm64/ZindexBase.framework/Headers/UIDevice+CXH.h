//
//  UIDevice+CXH.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIDevice (CXH)

/// 系统版本号 (e.g. 8.1)
+ (double)CXH_systemVersion;

/// 是否是iPad
@property (nonatomic, readonly) BOOL CXH_isPad;

/// 是否是模拟器
@property (nonatomic, readonly) BOOL CXH_isSimulator;

@property (nonatomic, readonly) BOOL CXH_isJailbroken;

/// idfa, iOS10后关闭广告追踪后, 返回为:00000000-0000-0000-0000-000000000000
- (nullable NSString *)CXH_idfa;

/// idfv
- (nullable NSString *)CXH_idfv;

- (long)getSystemUpTime;

- (NSString *)battery;

- (int)batteryStatus;

- (int)batteryLevels;

- (float)getTotalDiskSpace;

- (int)getTotalMemory;

+ (int)CXH_getCPUCores;

+ (NSUInteger)CXH_getCpuFrequency;
/**
 获取设备型号

 @return e.g. iPhone 2G (A1203)
 */
+ (nullable NSString *)CXH_getCurrentDeviceModel;

/**
 获取设备型号

 @return e.g. iPhone11,2
 */
+ (NSString *)CXH_getCurrentRawModel;

/**
 获取设备型号

 @return e.g. iPhone 2G
 */
+ (nullable NSString *)CXH_getCurrentDeviceShortModel;

/**
 获取屏幕密度

 @return e.g. 326
 */
+ (NSInteger)CXH_getCurrentDevicePPI;

+ (NSString *)networkStatus;

/// 获取运营商类型
+ (NSInteger)getOperatorsType;

+ (NSString *)mobileCountryCode;

+ (NSString *)mobileNetworkCode;

/// 判断是否开启了代理
+ (BOOL)checkProxySetting;

+ (NSString *)getBoot;

+ (NSString *)getUpdate;

+ (BOOL)isLandscape;

+ (NSString *)CXH_getFileTime;

// CAID

+ (NSString *)CXH_bootTimeInSec;
+ (NSString *)CXH_countryCode;
+ (NSString *)CXH_language;
// hardware_model
+ (NSString *)CXH_getHWModel;
+ (NSString* )CXH_carrierInfo;
+ (NSString *)CXH_disk;
+ (NSString *) CXH_memory;
// update_time_nsec iOS 参考代码（输出为纳秒）
+ (NSString *)CXH_getSysU;
+ (NSInteger)CXH_getSysUTime;
+ (NSString *)CXH_timeZone;
+ (NSString *)CXH_machine;
+ (NSString *)carrierInfo;
+ (NSString *)CXH_mntId;
+ (NSString *)CXH_fileInitTime;
+ (NSInteger)CXH_deviceInitTime;
@end

#ifndef kCXHSystemVersion
#define kCXHSystemVersion [UIDevice CXH_systemVersion]
#endif

#ifndef kCXHiOS7Later
#define kCXHiOS7Later (kCXHSystemVersion >= 7)
#endif

#ifndef kCXHiOS8Later
#define kCXHiOS8Later (kCXHSystemVersion >= 8)
#endif

#ifndef kCXHiOS9Later
#define kCXHiOS9Later (kCXHSystemVersion >= 9)
#endif

#ifndef kCXHiOS10Later
#define kCXHiOS10Later (kCXHSystemVersion >= 10)
#endif

#ifndef kCXHiOS11Later
#define kCXHiOS11Later (kCXHSystemVersion >= 11)
#endif

NS_ASSUME_NONNULL_END
