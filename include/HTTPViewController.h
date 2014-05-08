//
//  HTTPViewController.h
//  WifiDrive
//
//  Created by SEB on 12/12/13.
//  Copyright (c) 2013 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
@class xHTTPServer;
//@class HTTPServer;
@interface HTTPViewController : UIViewController
{
    //HTTPServer *httpServer;
    xHTTPServer *httpServer;
	IBOutlet UILabel *displayInfo;
    IBOutlet UILabel *urlWeb;
    BOOL isConnected;
    NSDictionary *addresses;
    IBOutlet UIActivityIndicatorView* activity;
    NSString* documentPath;
}
@property (nonatomic,retain)NSString* documentPath;
-(IBAction)changeComputerInfo:(id)sender;
-(IBAction)startStopServer:(id)sender;
@end
