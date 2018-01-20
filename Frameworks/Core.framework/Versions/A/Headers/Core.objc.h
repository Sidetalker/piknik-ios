// Objective-C API for talking to core Go package.
//   gobind -lang=objc core
//
// File is generated by gobind. Do not edit.

#ifndef __Core_H__
#define __Core_H__

@import Foundation;
#include "Universe.objc.h"


@class CoreClient;
@class CoreClientConnection;
@class CoreConf;
@class CoreDeterministicRand;
@class CoreStoredContent;
@class CoreTrustedClients;

/**
 * Client - Client data
 */
@interface CoreClient : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
@end

/**
 * ClientConnection - A client connection
 */
@interface CoreClientConnection : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
@end

/**
 * Conf - Shared config
 */
@interface CoreConf : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (NSString*)connect;
- (void)setConnect:(NSString*)v;
- (NSString*)listen;
- (void)setListen:(NSString*)v;
- (uint64_t)maxClients;
- (void)setMaxClients:(uint64_t)v;
- (uint64_t)maxLen;
- (void)setMaxLen:(uint64_t)v;
- (NSData*)encryptSk;
- (void)setEncryptSk:(NSData*)v;
- (NSData*)encryptSkID;
- (void)setEncryptSkID:(NSData*)v;
- (NSData*)psk;
- (void)setPsk:(NSData*)v;
- (NSData*)signPk;
- (void)setSignPk:(NSData*)v;
- (NSData*)signSk;
- (void)setSignSk:(NSData*)v;
// skipped field Conf.Timeout with unsupported type: *types.Named

// skipped field Conf.DataTimeout with unsupported type: *types.Named

// skipped field Conf.TTL with unsupported type: *types.Named

- (uint64_t)trustedIPCount;
- (void)setTrustedIPCount:(uint64_t)v;
@end

/**
 * DeterministicRand - Deterministic random function
 */
@interface CoreDeterministicRand : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
- (BOOL)read:(NSData*)p0 n:(long*)n error:(NSError**)error;
@end

/**
 * StoredContent - Paste buffer
 */
@interface CoreStoredContent : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
// skipped field StoredContent.RWMutex with unsupported type: *types.Named

- (void)lock;
- (void)rLock;
// skipped method StoredContent.RLocker with unsupported parameter or return types

- (void)rUnlock;
- (void)unlock;
@end

/**
 * TrustedClients - Clients IPs having recently performed a succesful handshake
 */
@interface CoreTrustedClients : NSObject <goSeqRefInterface> {
}
@property(strong, readonly) id _ref;

- (instancetype)initWithRef:(id)ref;
- (instancetype)init;
// skipped field TrustedClients.RWMutex with unsupported type: *types.Named

- (void)lock;
- (void)rLock;
// skipped method TrustedClients.RLocker with unsupported parameter or return types

- (void)rUnlock;
- (void)unlock;
@end

/**
 * DefaultClientVersion - Default client version
 */
FOUNDATION_EXPORT const Byte CoreDefaultClientVersion;
/**
 * DefaultConnect - Default value for the Connect parameter
 */
FOUNDATION_EXPORT NSString* const CoreDefaultConnect;
/**
 * DefaultListen - Default value for the Listen parameter
 */
FOUNDATION_EXPORT NSString* const CoreDefaultListen;
// skipped const DefaultTTL with unsupported type: *types.Const

/**
 * DomainStr - BLAKE2 domain (personalization)
 */
FOUNDATION_EXPORT NSString* const CoreDomainStr;
/**
 * Version - Piknik version
 */
FOUNDATION_EXPORT NSString* const CoreVersion;

/**
 * IsTerminal - returns true if the file descriptor is attached to a terminal
 */
FOUNDATION_EXPORT BOOL CoreIsTerminal(long fd);

FOUNDATION_EXPORT void CoreRun(void);

/**
 * RunClient - Process a client query
 */
FOUNDATION_EXPORT void CoreRunClient(void);

// skipped function RunServer with unsupported parameter or return types


#endif
