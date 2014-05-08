//
//  UINavigationController-Rotation.h
//  Panomatic
//
//  Created by SEB on 10/3/13.
//  Copyright (c) 2013 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LTHPasscodeViewController.h"
#import "DonwloadViewController.h"

@interface UINavigationController (Rotation)
@end

@interface UINavigationController_Rotation : UINavigationController < LTHPasscodeViewControllerDelegate>
{
    DonwloadViewController* downloading;
    NSMutableArray* backgroundHandlers;
   
}
@property (copy) void (^backgroundURLSessionCompletionHandler)();
@property (nonatomic, retain)IBOutlet DonwloadViewController* downloading;

@end
