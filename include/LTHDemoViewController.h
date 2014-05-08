//
//  LTHDemoViewController.h
//  LTHPasscodeViewController
//
//  Created by Roland Leth on 9/6/13.
//  Copyright (c) 2013 Roland Leth. All rights reserved.
//

#import "LTHPasscodeViewController.h"
#import <UIKit/UIKit.h>

@interface LTHDemoViewController : UIViewController <LTHPasscodeViewControllerDelegate> {
	IBOutlet UIButton *_changePasscode;
	IBOutlet UIButton *_enablePasscode;
    
}
-(IBAction)enableDisable:(id)sender;
-(IBAction)changeCode:(id)sender;
@end
