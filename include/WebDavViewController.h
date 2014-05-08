//
//  WebDavViewController.h
//  WifiDrive
//
//  Created by SEB on 12/12/13.
//  Copyright (c) 2013 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
@class HTTPServer;

@interface WebDavViewController : UIViewController
{
    HTTPServer *httpServer;
	IBOutlet UILabel *displayInfo;
    BOOL isConnected;
    NSDictionary *addresses;
    IBOutlet UISegmentedControl* computers;
    IBOutlet UIWebView* infoPDF;
    IBOutlet UIActivityIndicatorView* activity;
}
-(IBAction)changeComputerInfo:(id)sender;
-(IBAction)startStopServer:(id)sender;
@end
