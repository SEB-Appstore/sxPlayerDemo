//
//  WebBrowserViewController.h
//  MyWebBrowser
//
//  Created by Sebastien on 1/18/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>


@class DonwloadViewController, DetailViewController;


@interface WebBrowserViewController : UIViewController  <UIAccelerometerDelegate, UIWebViewDelegate, UITextFieldDelegate> {
	
	NSString* pageTitle;
    IBOutlet UIView* searchView;
	IBOutlet UIView* downloadsContainer;
	IBOutlet UIView* downloads;
	IBOutlet UITextField* fileUrl;
	IBOutlet UIButton* downloadButton;
	IBOutlet UIButton* downloadStartButton;
	IBOutlet UIButton* downloadNumber;

	IBOutlet UIButton* addressButton;

	IBOutlet UIWebView* webBrowser;
	IBOutlet UITextField* google;
	IBOutlet UITextField* address;
	IBOutletCollection (UIBarButtonItem) NSArray* buttons; 
	DonwloadViewController* downloading;
	BOOL isFlipView;
	BOOL isTyping;
	BOOL isLoading;
    NSString* tempAddress;
	NSString* searchURL;
	NSString* documentPath;
}
@property (nonatomic,retain)NSString* documentPath;

@property (nonatomic, retain)NSString* searchURL;
@property (nonatomic)BOOL isFlipView;
-(IBAction)buttonActions;
@property (nonatomic, retain)UIButton* downloadNumber;
@property (nonatomic, retain)DonwloadViewController* downloading;


-(IBAction)goBack;
-(IBAction)goNext;
-(IBAction)downloadFile;
-(IBAction)seeDownloads;
-(void)searchGoogle;
-(void)searchWeb;
-(void)saveData;
-(IBAction)showDownloads;
-(IBAction)hideDownloads;
-(UIImage*)scaleAndRotateMyImage:(UIImage*)image;
- (NSString *)FilePath:(NSString*)string;
- (void)moveUpAccessoryView;
- (void)moveDownAccessoryView;

@end
