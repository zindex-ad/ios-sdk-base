//
//  CXHNetworkingError.h
//  CXHNetworking
//
//  Created by Cdionysus on 2018/12/10.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXPORT NSError * CXHNetworkErrorWithUserInfo(NSErrorDomain domain, NSInteger code, NSDictionary *userInfo);

FOUNDATION_EXPORT NSError * CXHNetworkErrorWithLocalizedDesc(NSErrorDomain domain, NSInteger code, NSString *localizedDescription);

FOUNDATION_EXPORT NSError * CXHNetworkErrorWithUnderlyingError(NSError *error, NSError *underlyingError);

FOUNDATION_EXPORT BOOL CXHNetworkErrorOrUnderlyingErrorHasCodeInDomain(NSError *error, NSInteger code, NSString *domain);
