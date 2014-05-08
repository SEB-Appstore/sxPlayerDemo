//
//  SEBViewController.h
//  AirDrive
//
//  Created by SEB on 12/21/13.
//  Copyright (c) 2013 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SEBViewController : UIViewController<UIWebViewDelegate>
{
    IBOutlet UIWebView* webBrowser;
}
-(IBAction)goBack;
-(IBAction)goNext;
@end
