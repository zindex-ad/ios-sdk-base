//
//  CXHLogging.h
//  CXHCore
//
//  Created by Cdionysus on 2018/12/12.
//  Copyright © 2018年 Cdionysus. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, CXHLogLevel) {
    /// No logs
    CXHLogLevelOff     = 0,
    /// Error logs only. 0...00001
    CXHLogLevelError   = (1 << 0),
    /// Error and warning logs, 0...00010
    CXHLogLevelWarning = (1 << 1),
    /// Error, warning and info logs, 0...00100
    CXHLogLevelInfo    = (1 << 2),
    /// Error, warning, info and debug logs, 0...01000
    CXHLogLevelDebug   = (1 << 3),
    /// Error, warning, info, debug and verbose logs, 0...10000
    CXHLogLevelVerbose = (1 << 4),
    /// All logs. 1...11111
    CXHLogLevelAll     = NSUIntegerMax
};

/// default is 'CXHLogLevelInfo' if not set
CXHLogLevel CXHLogGetLevel(void);
void CXHLogSetLevel(CXHLogLevel level);

void _CXHLogError(NSString *format, ...);
void _CXHLogWarn(NSString *format, ...);
void _CXHLogInfo(NSString *format, ...);
void _CXHLogDebug(NSString *format, ...);
void _CXHLogVerbose(NSString *format, ...);

#ifdef DEBUG
    #define CXHLogError(...)   _CXHLogError(__VA_ARGS__)
    #define CXHLogWarn(...)    _CXHLogWarn(__VA_ARGS__)
    #define CXHLogInfo(...)    _CXHLogInfo(__VA_ARGS__)
    #define CXHLogDebug(...)   _CXHLogDebug(__VA_ARGS__)
    #define CXHLogVerbose(...) _CXHLogVerbose(__VA_ARGS__)
#else
    #define CXHLogError(...)   _CXHLogError(__VA_ARGS__)
    #define CXHLogWarn(...)    _CXHLogWarn(__VA_ARGS__)
    #define CXHLogInfo(...)    _CXHLogInfo(__VA_ARGS__)
    #define CXHLogDebug(...)   _CXHLogDebug(__VA_ARGS__)
    #define CXHLogVerbose(...) {}
#endif






