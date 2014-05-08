//
//  VideoCollectionViewCell.h
//  AirVideo
//
//  Created by SEB on 3/25/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoCollectionViewCell : UICollectionViewCell
@property (strong, nonatomic) IBOutlet UIImageView *videoImageView;
@property (strong, nonatomic) IBOutlet UIImageView *checkImageView;
@property (strong, nonatomic) IBOutlet UILabel* title;
@end
