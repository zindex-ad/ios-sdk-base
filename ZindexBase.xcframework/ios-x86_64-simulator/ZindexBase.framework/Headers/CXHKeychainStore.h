//
//  CXHKeychainStore.h
//  CXHUtilsKit-code
//
//  Created by Cdionysus on 2019/1/28.
//  
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CXHKeychainStoreProtocol <NSObject>

/** @fn initWithService:
 @brief Initialize a @c FIRAuthStorage instance.
 @param service The name of the storage service to use.
 @return An initialized @c FIRAuthStorage instance for the specified service.
 */
- (id<CXHKeychainStoreProtocol>)initWithService:(NSString *)service;

/** @fn dataForKey:error:
 @brief Gets the data for @c key in the storage. The key is set for the attribute
 @c kSecAttrAccount of a generic password query.
 @param key The key to use.
 @param error The address to store any error that occurs during the process, if not NULL.
 If the operation was successful, its content is set to @c nil .
 @return The data stored in the storage for @c key, if any.
 */
- (nullable NSData *)dataForKey:(NSString *)key error:(NSError **)error;

/** @fn setData:forKey:error:
 @brief Sets the data for @c key in the storage. The key is set for the attribute
 @c kSecAttrAccount of a generic password query.
 @param data The data to store.
 @param key The key to use.
 @param error The address to store any error that occurs during the process, if not NULL.
 @return Whether the operation succeeded or not.
 */
- (BOOL)setData:(NSData *)data
         forKey:(NSString *)key
          error:(NSError **)error;

/** @fn removeDataForKey:error:
 @brief Removes the data for @c key in the storage. The key is set for the attribute
 @c kSecAttrAccount of a generic password query.
 @param key The key to use.
 @param error The address to store any error that occurs during the process, if not NULL.
 @return Whether the operation succeeded or not.
 */
- (BOOL)removeDataForKey:(NSString *)key error:(NSError **)error;

@end

@interface CXHKeychainStore : NSObject <CXHKeychainStoreProtocol>

@end

NS_ASSUME_NONNULL_END
