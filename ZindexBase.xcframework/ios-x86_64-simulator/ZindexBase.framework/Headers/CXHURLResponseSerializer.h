//
//  CXHURLResponseSerializer.h
//  CXHNetworking
//
//  Created by Cdionysus on 2018/12/7.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CXHURLResponseSerializer <NSObject, NSSecureCoding, NSCopying>

- (nullable id)responseObjectForResponse:(nullable NSURLResponse *)response
                                    data:(nullable NSData *)data
                                   error:(NSError * _Nullable __autoreleasing *)error;

@end

#pragma mark -

@interface CXHHTTPResponseSerializer : NSObject <CXHURLResponseSerializer>

/**
 The string encoding used to serialize data received from the server, when no string encoding is specified by the response. `NSUTF8StringEncoding` by default.
 */
@property (nonatomic, assign) NSStringEncoding stringEncoding;

@property (nonatomic, copy, nullable) NSIndexSet *acceptableStatusCodes;
@property (nonatomic, copy, nullable) NSSet <NSString *> *acceptableContentTypes;

- (BOOL)validateResponse:(nullable NSHTTPURLResponse *)response
                    data:(nullable NSData *)data
                   error:(NSError * _Nullable __autoreleasing *)error;

@end

#pragma mark -

@interface CXHJSONResponseSerializer : CXHHTTPResponseSerializer

/// `0` by default. see the `NSJSONSerialization` documentation section "NSJSONReadingOptions".
@property (nonatomic, assign) NSJSONReadingOptions readingOptions;
/// default is 'NO'
@property (nonatomic, assign) BOOL removesKeysWithNullValues;

+ (instancetype)serializerWithReadingOptions:(NSJSONReadingOptions)readingOptions;

@end

#pragma mark -

@interface CXHXMLParserResponseSerializer : CXHHTTPResponseSerializer

@end

NS_ASSUME_NONNULL_END
