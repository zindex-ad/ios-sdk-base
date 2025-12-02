//
//  CXHReachabilityManager.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <Foundation/Foundation.h>
#import <CoreTelephony/CTCarrier.h>
#import <ZindexBase/CXHReachability.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXHReachabilityManager : NSObject

@property (nonatomic, readonly) CXHReachability *reachability;

/// Current status.
@property (nonatomic, readonly) CXHReachabilityStatus status;

/// Current WWAN status.
@property (nonatomic, readonly) CXHReachabilityWWANStatus wwanStatus NS_AVAILABLE_IOS(7_0);

/// 'mobileCountryCode' + mobileNetworkCode, look at 'CTCarrier' for more
@property (nonatomic, readonly) NSString *imsi;

/// network proxy
@property (nonatomic, readonly) BOOL networkProxy;

+ (instancetype _Nonnull)sharedManager;

@end

NS_ASSUME_NONNULL_END
