//
//  DownloadCell.h
//  Downloader
//
//  Created by Sebastien on 9/2/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface DownloadCell : UITableViewCell {
	IBOutlet UILabel* nom;
	IBOutlet UIProgressView* progres;
	IBOutlet UIActivityIndicatorView* activity;
}
@property (retain, nonatomic) UIActivityIndicatorView* activity;
@property (retain, nonatomic) UILabel* nom;
@property (retain, nonatomic) UIProgressView* progres;

-(void)stopActivity;
-(void)updateProgres:(float)percentage;
@end
