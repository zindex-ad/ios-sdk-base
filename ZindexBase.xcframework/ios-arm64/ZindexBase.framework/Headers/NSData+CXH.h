//
//  NSData+CXH.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (CXH)

#pragma mark - Encode and Decode

/**
 UTF8编码
 */
- (nullable NSString *)CXH_utf8String;

/**
 Base64编码
 */
- (nullable NSString *)CXH_base64EncodedString;

/**
 Base64解码
 
 @param base64EncodedString The encoded string.
 */
+ (nullable NSData *)CXH_dataWithBase64EncodedString:(NSString *)base64EncodedString;

/**
 Json解析
 如果失败,返回 nil
 */
- (nullable id)CXH_jsonValueDecodedWithError:(NSError **)error;

#pragma mark - Hash

/**
 MD5编码
 */
- (NSString *)CXH_md5String;

#pragma mark - Inflate and deflate

/**
 从gzip数据解压
 */
- (nullable NSData *)CXH_gzipInflate;

/**
 用默认压缩等级压缩成gizp数据
 */
- (nullable NSData *)CXH_gzipDeflate;

/**
 从zlib数据解压
 */
- (nullable NSData *)CXH_zlibInflate;

/**
 用默认压缩等级压缩成zlib数据
 */
- (nullable NSData *)CXH_zlibDeflate;

/**
 AES CBC 128位加密模式
 */
- (nullable NSData *)AESCBC128EncryptWithKey:(NSString *)key gIv:(NSString *)Iv;
/**
AES CBC 128位解密模式
*/
- (nullable NSData *)AESCBC128DecryptWithKey:(NSString *)key gIv:(NSString *)Iv;
/**
AES CBC 256位加密模式
*/
- (nullable NSData *)AESCBC256EncryptWithKey:(NSString *)key gIv:(NSString *)Iv;
/**
AES CBC 256位解密模式
*/
- (nullable NSData *)AESCBC256DecryptWithKey:(NSString *)key gIv:(NSString *)Iv;

/**
AES CBC 256位解密模式
*/
- (nullable NSData *)AESCBC256OpenDecryptWithKey:(NSString *)key gIv:(NSString *)Iv;

@end

NS_ASSUME_NONNULL_END
