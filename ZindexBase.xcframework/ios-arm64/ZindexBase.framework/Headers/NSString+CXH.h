//
//  NSString+CXH.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (CXH)

#pragma mark - Utils

/**
 生成一个新的udid
 */
+ (nullable NSString *)CXH_stringWithUUID;

/**
 用UTF-8编码成NSData类型
 */
- (nullable NSData *)CXH_dataValue;

#pragma mark - Encode and decode

/**
 Base64编码
 */
- (nullable NSString *)CXH_base64EncodedString;

/**
 Base64解码
 
 @param base64EncodedString The encoded string
 */
+ (nullable NSString *)CXH_stringWithBase64EncodedString:(NSString *)base64EncodedString;

/**
 Json解析
 如果失败,返回 nil
 
 e.g. NSString: @"{"name":"a","count":2}"  => NSDictionary: @[@"name":@"a",@"count":@2]
 */
- (nullable id)CXH_jsonValueDecodedWithError:(NSError **)error;

/**
 URL编码, utf-8
 */
- (NSString *)CXH_stringByURLEncode;

/**
 URL解码, utf-8
 */
- (NSString *)CXH_stringByURLDecode;

#pragma mark - Hash

/**
 MD5字符串
 */
- (nullable NSString *)CXH_md5String;

@end

NS_ASSUME_NONNULL_END
