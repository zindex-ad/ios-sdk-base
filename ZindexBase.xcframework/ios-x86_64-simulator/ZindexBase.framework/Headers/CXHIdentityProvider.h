//
//  CXHIdentityProvider.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <Foundation/Foundation.h>

@interface CXHIdentityProvider : NSObject

/**
 SDK封装的设备唯一标识符, idfv+keychain, 换个包名可能会变化
 */
+ (NSString *)identifier;

@end
