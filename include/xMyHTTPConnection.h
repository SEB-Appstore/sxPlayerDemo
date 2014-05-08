//
//  This class was created by Nonnus,
//  who graciously decided to share it with the CocoaHTTPServer community.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "xHTTPConnection.h"
@class MultipartFormDataParser;


@interface xMyHTTPConnection : xHTTPConnection
{
    MultipartFormDataParser*        parser;
	int dataStartIndex;
	NSMutableArray* multipartData;
	BOOL postHeaderOK;
	NSString* folderPathSave;
}
@property(retain,nonatomic) NSString* folderPathSave;
- (BOOL)isBrowseable:(NSString *)path;
- (NSString *)createBrowseableIndex:(NSString *)path;

-(void)setFolderPathSave:(NSString*)str;

@end