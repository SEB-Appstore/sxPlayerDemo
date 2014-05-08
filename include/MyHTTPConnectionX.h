
#import "HTTPConnection.h"
#import <UIKit/UIKit.h>

@class MultipartFormDataParser;

@interface MyHTTPConnectionX : HTTPConnection  {
    MultipartFormDataParser*        parser;
	NSFileHandle*					storeFile;
	
	NSMutableArray*					uploadedFiles;
}

@end
