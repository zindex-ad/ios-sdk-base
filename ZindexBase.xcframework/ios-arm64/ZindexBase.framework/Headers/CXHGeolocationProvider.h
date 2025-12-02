//
//  CXHGeolocationProvider.h
//  CXHCore
//
//  Created by Cdionysus on 2018/12/13.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <UIKit/UIKit.h>

@interface CXHGeolocationProvider : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, readonly) CLLocation *lastKnownLocation;

@property (nonatomic, assign) BOOL locationUpdatesEnabled;
// 坐标系统,1:GPS， 2:GCJ-02(高德使用)， 3:BD-09(百度使用)
@property (nonatomic, assign) NSInteger coordinate_type;
// 定位精准度，IOS操 作系统必传 0: 定位不准确,1: 定位精准，可以获取到小数 点4位及以上
@property (nonatomic, assign) NSInteger laccu;
// 获取定位的时间戳 (秒)
@property (nonatomic, assign) NSInteger timestamp;

@end
