//
//  DonwloadViewController.h
//  AirVideo
//
//  Created by SEB on 3/27/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DownloadCell.h"
#import "Download.h"


@class WebBrowserViewController;


@interface DonwloadViewController : UIViewController<NSURLSessionDownloadDelegate>
{
	NSMutableArray* list;
	NSMutableArray* dataList;
	NSMutableArray* connectionList;
	IBOutlet UITableView* table;
    IBOutlet UINavigationBar* navBar;
	WebBrowserViewController* browser;
}

@property (retain, nonatomic)WebBrowserViewController* browser;

@property(retain, nonatomic)UITableView* table;
@property(retain, nonatomic)NSMutableArray* list;
@property(retain, nonatomic)NSMutableArray*  dataList;
@property(retain, nonatomic)NSMutableArray*  connectionList;
-(void)downloadList;
-(IBAction)goBack;

@property (strong, nonatomic, readonly) NSURLSession *backgroundSession;
@end
