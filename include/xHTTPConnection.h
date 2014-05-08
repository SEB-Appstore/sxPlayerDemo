#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#if TARGET_OS_IPHONE
// Note: You may need to add the CFNetwork Framework to your project
#import <CFNetwork/CFNetwork.h>
#endif

@class AsyncSocket;
@class xHTTPServer;
@protocol xHTTPResponse;


#define HTTPConnectionDidDieNotification  @"HTTPConnectionDidDie"

@interface xHTTPConnection : NSObject
{
	AsyncSocket *asyncSocket;
	xHTTPServer *server;
	
	CFHTTPMessageRef request;
	int numHeaderLines;
	
	NSString *nonce;
	long lastNC;
	
	NSObject<xHTTPResponse> *httpResponse;
	
	NSMutableArray *ranges;
	NSMutableArray *ranges_headers;
	NSString *ranges_boundry;
	int rangeIndex;
	
	UInt64 requestContentLength;
	UInt64 requestContentLengthReceived;
	
	NSString* login;
}

- (id)initWithAsyncSocket:(AsyncSocket *)newSocket forServer:(xHTTPServer *)myServer;

- (BOOL)supportsMethod:(NSString *)method atPath:(NSString *)path;

- (BOOL)isSecureServer;
- (NSArray *)sslIdentityAndCertificates;

- (BOOL)isPasswordProtected:(NSString *)path;
- (BOOL)useDigestAccessAuthentication;
- (NSString *)realm;
- (NSString *)passwordForUser:(NSString *)username;

- (NSString *)filePathForURI:(NSString *)path;

- (NSObject<xHTTPResponse> *)httpResponseForMethod:(NSString *)method URI:(NSString *)path;

- (void)prepareForBodyWithSize:(UInt64)contentLength;
- (void)processDataChunk:(NSData *)postDataChunk;

- (void)handleVersionNotSupported:(NSString *)version;
- (void)handleAuthenticationFailed;
- (void)handleResourceNotFound;
- (void)handleInvalidRequest:(NSData *)data;
- (void)handleUnknownMethod:(NSString *)method;

- (NSData *)preprocessResponse:(CFHTTPMessageRef)response;
- (NSData *)preprocessErrorResponse:(CFHTTPMessageRef)response;

- (void)die;
@property (nonatomic,retain)NSString* login;
@end
