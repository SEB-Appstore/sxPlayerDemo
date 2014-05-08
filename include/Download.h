//
//  Download.h
//  AirVideo
//
//  Created by SEB on 3/27/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
@protocol DownloadDelegate;

@interface Download : NSObject{
	BOOL isStarted;
	NSURLRequest* request;

	NSString* name;
	float percent;
	NSString* destination;
    
   __unsafe_unretained id delegate;
}
@property (nonatomic, assign)id delegate;
@property (nonatomic, retain)NSString* destination;
@property (nonatomic, retain) NSString* name;
@property (nonatomic, retain) NSURLRequest* request;

@property BOOL isStarted;
@property float percent;
- (id)initWith:(NSString*)nom withDelegate:(UIViewController*)controller andDestination:(NSString*)destination;

-(void)startDownloading:(NSURLSession*)session;
-(void)stopDownloading;

@property (strong, nonatomic) NSURLSessionDownloadTask *backgroundTask;

@end



@protocol DownloadDelegate
- (void)getNewData:(Download*)download;
- (void)downloadedCompleted:(Download*)download;
- (void)errorDownloading:(Download*)download;
@end
