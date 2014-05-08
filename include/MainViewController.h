//
//  MainViewController.h
//  WifiDrive
//
//  Created by SEB on 12/12/13.
//  Copyright (c) 2013 SEB. All rights reserved.
//
#import <UIKit/UIKit.h>

typedef enum sorting {
    kDescendingAlphabet,
    kAscendingAlphabet,
    kDescendingDate,
    kAscendingDate,
    kDescendingSize,
    kAscendingSize,
    kDescendingType,
    kAscendingType,
} sorting;

typedef enum editingAction {
    kCopying,
    kMoving,
    kSending,
    kSaving,
} editingAction;

typedef enum menus {
    kSorting,
    kImporting,
    kAdding,
    kConnecting,
    kInforming,
} menus;

#import "LTHPasscodeViewController.h"
#import <MessageUI/MessageUI.h>
#import "FlipsideViewController.h"
@class  DITableViewController;
#import <MediaPlayer/MediaPlayer.h>
#import <QuickLook/QuickLook.h>
#import "VideoTableViewCell.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, LTHPasscodeViewControllerDelegate, UIAlertViewDelegate, UITextFieldDelegate,MFMailComposeViewControllerDelegate, VideoTableViewCellSelectionDelegate,UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    IBOutlet UIView* menu;
    IBOutlet UITableView* videoList;
    IBOutlet UITableView* menuTable;
    NSMutableArray* menuEntries;
    menus actionMenu;
    IBOutlet UIProgressView* progres;
    editingAction action;
    NSMutableArray* destinationDirectories;
    IBOutlet UIView* destination;
    NSString* selectedDestination;
    IBOutlet UITableView* destinationTable;
    IBOutlet UINavigationBar* editingBar;
    NSString* documentPath;
    NSMutableArray* files;
    NSMutableArray* selection;
    NSMutableArray* destinations;
    NSMutableArray* sortedFiles;
    NSMutableArray* missingThumbs;
    IBOutlet UIToolbar* toolbar;
    IBOutlet UINavigationBar* editingNavBar;
	IBOutletCollection (UIView) NSArray* vue;
	BOOL isConnected, isEditing, allSelected;
    UIAlertView* alert;
    NSString* rootPath;
    IBOutlet UIButton* lockButton;
   __unsafe_unretained IBOutlet VideoTableViewCell *tmpCell;
    
    IBOutlet UIButton* downloadButton;
}
-(IBAction)showDownloads;
@property (nonatomic, assign) IBOutlet VideoTableViewCell *tmpCell;
-(void)changeTitle:(NSString*)titre;
-(void)reinitialisation;
-(NSString*)getDocumentPath;
- (void)passcodeViewControllerWasDismissed;
- (void)maxNumberOfFailedAttemptsReached;
-(IBAction)secure:(id)sender;
-(IBAction)cancelDestinations:(id)sender;
-(IBAction)selectDestination:(id)sender;
-(IBAction)edit:(id)sender;
-(IBAction)deleteSelection:(id)sender;
-(IBAction)copySelection:(id)sender;
-(IBAction)renameSelection:(id)sender;
-(IBAction)moveSelection:(id)sender;
-(IBAction)showMenu:(id)sender;
-(IBAction)hideMenu:(id)sender;
-(void)updateDownloadButton:(NSString*)str;
@property(nonatomic, retain)NSString* documentPath;
- (BOOL)handleURL:(NSURL *)url;
@end
