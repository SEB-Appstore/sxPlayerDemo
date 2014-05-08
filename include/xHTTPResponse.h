#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol xHTTPResponse

- (UInt64)contentLength;

- (UInt64)offset;
- (void)setOffset:(UInt64)offset;

- (NSData *)readDataOfLength:(unsigned int)length;

#if MAC_OS_X_VERSION_MAX_ALLOWED >= MAC_OS_X_VERSION_10_5

@optional
- (NSDictionary *)httpHeaders;

#endif

@end

@interface xHTTPFileResponse : NSObject <xHTTPResponse>
{
	NSString *filePath;
	NSFileHandle *fileHandle;
}

- (id)initWithFilePath:(NSString *)filePath;
- (NSString *)filePath;

@end

@interface xHTTPDataResponse : NSObject <xHTTPResponse>
{
	unsigned offset;
	NSData *data;
}

- (id)initWithData:(NSData *)data;

@end
