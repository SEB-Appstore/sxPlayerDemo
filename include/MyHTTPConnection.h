
#import "HTTPConnection.h"
#import <UIKit/UIKit.h>

@class MultipartFormDataParser;

@interface MyHTTPConnection : HTTPConnection  {
    MultipartFormDataParser*        parser;
	NSFileHandle*					storeFile;
	
	NSMutableArray*					uploadedFiles;
    //added
    int dataStartIndex;
	NSMutableArray* multipartData;
	BOOL postHeaderOK;
	NSString* folderPathSave;
}
@property(retain,nonatomic) NSString* folderPathSave;
- (BOOL)isBrowseable:(NSString *)path;
- (NSString *)createBrowseableIndex:(NSString *)path;
@end
