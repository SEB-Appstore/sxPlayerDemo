//
//  AppDelegate.h
//  AirDrive
//
//  Created by SEB on 12/18/13.
//  Copyright (c) 2013 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LTHPasscodeViewController.h"
#import "DonwloadViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate, LTHPasscodeViewControllerDelegate>
{
    DonwloadViewController* downloading;
    NSMutableArray* backgroundHandlers;
}
@property (nonatomic, retain)IBOutlet DonwloadViewController* downloading;

@property (strong, nonatomic) UIWindow *window;
@property (copy) void (^backgroundURLSessionCompletionHandler)();
@end
