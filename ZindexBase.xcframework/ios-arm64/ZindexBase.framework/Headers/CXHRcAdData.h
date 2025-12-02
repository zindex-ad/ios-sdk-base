//
//  CXHRcAdData.h
//  CXHAdSDK-RC
//
//  Created by 陈坤 on 2022/6/14.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CXHRcAdTaskArea : NSObject

@property (nonatomic, copy) NSString *url;

@property (nonatomic, copy) NSString *body;

@end

@interface CXHRcAdTaskScroll : NSObject

@property (nonatomic, assign) NSInteger y;

@property (nonatomic, assign) NSInteger time;

@property (nonatomic, assign) NSInteger count;

- (instancetype)initModelWithJson:(NSDictionary *)json NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

@end

@interface CXHRcExtTask : NSObject

@property (nonatomic, strong) NSDictionary *reportHeader;


@property (nonatomic, strong) NSDictionary *ldpHeader;

- (instancetype)initModelWithJson:(NSDictionary *)json NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

@end

@interface CXHRcAdTask : NSObject

@property (nonatomic, strong) CXHRcAdTaskScroll *scroll;

@property (nonatomic, assign) NSInteger staytime;

@property (nonatomic, assign) NSInteger clkDelay;

@property (nonatomic, assign) NSInteger dptDelay;

@property (nonatomic, assign) NSInteger dpsDelay;

@property (nonatomic, assign) NSInteger dpfDelay;

@end

// 任务模型
@interface CXHRcAdTaskModel : NSObject

@property (nonatomic, copy) NSString *channelName;

@property (nonatomic, copy) NSString *imgUrl;

@property (nonatomic, copy) NSString *ldp;

@property (nonatomic, copy) NSString *scheme;

@property (nonatomic, strong) NSArray<NSString *> *imp;

@property (nonatomic, strong) NSArray<NSString *> *clk;

@property (nonatomic, strong) NSArray<NSString *> *dpt;

@property (nonatomic, strong) NSArray<NSString *> *dps;

@property (nonatomic, strong) NSArray<NSString *> *dlf;

@property (nonatomic, assign) float ctr;

@property (nonatomic, strong) CXHRcAdTask *task;

@property (nonatomic, assign) NSInteger impDelay;

@property (nonatomic, assign) BOOL needClick;

@property (nonatomic, strong) CXHRcExtTask *ext;

@property (nonatomic, strong) NSArray<CXHRcAdTaskArea *> *click_area;

@property (nonatomic, assign) NSInteger expire;

- (void)loadImage;

- (void)sendDisplayReport;

- (void)sendClickReport;

- (void)sendDpsReport;

- (void)sendDpfReport;

- (void)sendDptReport;

@end

@interface CXHRcAdTaskListModel : NSObject

@property (nonatomic, strong) NSArray<CXHRcAdTaskModel *> *taskList;

- (instancetype)initModelWithJson:(NSArray *)jsonArray NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;


@end

// 初始化配置模型

@interface CXHRcAdInitConfig : NSObject

@property (nonatomic, copy) NSString *timer;

@property (nonatomic, strong) NSArray<NSNumber *> *numberList;

@property (nonatomic, assign) NSInteger limit;

@property (nonatomic, assign) NSInteger webviewNum;

@property (nonatomic, copy) NSString *js;

- (instancetype)initModelWithJson:(NSDictionary *)json NS_DESIGNATED_INITIALIZER;
- (instancetype)init NS_UNAVAILABLE;
- (instancetype)new NS_UNAVAILABLE;

@end

@interface CXHRcAdData : NSObject

@property (nonatomic, strong) CXHRcAdInitConfig *mainConfig;

@property (nonatomic, strong) CXHRcAdTaskListModel *tasksConfig;

@end

NS_ASSUME_NONNULL_END
