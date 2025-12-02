//
//  CXHURLRequestSerializer.h
//  CXHNetworking
//
//  Created by Cdionysus on 2018/12/7.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 Returns a percent-escaped string following RFC 3986 for a query string key or value.
 RFC 3986 states that the following characters are "reserved" characters.
 - General Delimiters: ":", "#", "[", "]", "@", "?", "/"
 - Sub-Delimiters: "!", "$", "&", "'", "(", ")", "*", "+", ",", ";", "="
 
 In RFC 3986 - Section 3.4, it states that the "?" and "/" characters should not be escaped to allow
 query strings to include a URL. Therefore, all "reserved" characters with the exception of "?" and "/"
 should be percent-escaped in the query string.
 
 @param string The string to be percent-escaped.
 
 @return The percent-escaped string.
 */
FOUNDATION_EXPORT NSString *CXHPercentEscapedStringFromString(NSString *string);

/**
 A helper method to generate encoded url query parameters for appending to the end of a URL.
 
 @param parameters A dictionary of key/values to be encoded.
 
 @return A url encoded query string
 */
FOUNDATION_EXPORT NSString *CXHQueryStringFromParameters(NSDictionary *parameters);


@protocol CXHURLRequestSerializer <NSObject, NSSecureCoding, NSCopying>

- (nullable NSURLRequest *)requestBySerializingRequest:(NSURLRequest *)request
                                        withParameters:(nullable id)parameters
                                                 error:(NSError * _Nullable __autoreleasing *)error;

@end


#pragma mark -

@interface CXHHTTPRequestSerializer : NSObject <CXHURLRequestSerializer>

/// The string encoding used to serialize parameters. `NSUTF8StringEncoding` by default.
@property (nonatomic, assign) NSStringEncoding stringEncoding;

/// default is 'YES'
@property (nonatomic, assign) BOOL allowsCellularAccess;
/// default is "NSURLRequestUseProtocolCachePolicy'
@property (nonatomic, assign) NSURLRequestCachePolicy cachePolicy;
/// default is 'YES'
@property (nonatomic, assign) BOOL HTTPShouldHandleCookies;
/// default is 'NO'
@property (nonatomic, assign) BOOL HTTPShouldUsePipelining;
/// default is 'NSURLNetworkServiceTypeDefault'
@property (nonatomic, assign) NSURLRequestNetworkServiceType networkServiceType;
/// default is 60 seconds
@property (nonatomic, assign) NSTimeInterval timeoutInterval;

@property (nonatomic, readonly, strong) NSDictionary<NSString *, NSString *> *HTTPRequestHeaders;
- (void)setValue:(id)value forHTTPHeaderField:(nonnull NSString *)field;

/// HTTP methods for which serialized requests will encode parameters as a query string. `GET`, `HEAD`, and `DELETE` by default.
@property (nonatomic, strong) NSSet<NSString *> *HTTPMethodsEncodingParametersInURI;

- (NSMutableURLRequest *)requestWithMethod:(NSString *)method
                                 URLString:(NSString *)URLString
                                parameters:(id)parameters
                                     error:(NSError *__autoreleasing *)error;

@end

#pragma mark -

@interface CXHJSONRequestSerializer : CXHHTTPRequestSerializer

/// default is '0', see the `NSJSONSerialization` documentation section "NSJSONWritingOptions"
@property (nonatomic, assign) NSJSONWritingOptions writingOptions;

+ (instancetype)serializerWithWritingOptions:(NSJSONWritingOptions)writingOptions;

@end

NS_ASSUME_NONNULL_END
