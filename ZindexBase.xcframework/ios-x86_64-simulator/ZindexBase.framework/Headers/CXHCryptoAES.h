//
//  CXHCryptoAES.h
//  CXH
//
//  Created by 陈坤 on 2020/3/19.
//

#import <Foundation/Foundation.h>

#pragma mark - GET string
/**
AES ECB模式加密
*/
NSString * KCXHAESECBEncryptString(NSString *content, NSString *key);
/**
AES ECB模式解密
*/
NSString * KCXHAESECBDecryptString(NSString *content, NSString *key);

#pragma mark - GET data

/**
 AES ECB模式加密
 */
NSData * KCXHAESECBEncryptData(NSData *contentData, NSData *keyData);
/**
 AES ECB模式解密
*/
NSData * KCXHAESECBDecryptData(NSData *contentData, NSData *keyData);

#pragma mark - AES CBC 加解密

NSString * KCXHAESCBCEncryptData(NSString *content, NSString *key, NSString *iv);

NSString * KCXHAESCBCDecryptData(NSString *content, NSString *key, NSString *iv);
