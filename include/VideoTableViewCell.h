//
//  VideoTableViewCell.h
//  AirVideo
//
//  Created by SEB on 3/25/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ThumbnailImageView.h"

@class VideoTableViewCell;

@protocol VideoTableViewCellSelectionDelegate <NSObject>
- (void)albumContentsTableViewCell:(VideoTableViewCell *)cell selectedPhotoAtIndex:(NSUInteger)index;
@end

@interface VideoTableViewCell : UITableViewCell
<ThumbnailImageViewSelectionDelegate> {
    
    IBOutlet ThumbnailImageView *photo1;
    IBOutlet ThumbnailImageView *photo2;
    IBOutlet UIImageView* checkPhoto1;
    IBOutlet UIImageView* checkPhoto2;
    IBOutlet UILabel* label1;
    IBOutlet UILabel* label2;
    NSUInteger rowNumber;
   __unsafe_unretained id <VideoTableViewCellSelectionDelegate> selectionDelegate;
}

@property (nonatomic, assign) NSUInteger rowNumber;
@property (nonatomic, assign) id<VideoTableViewCellSelectionDelegate> selectionDelegate;
- (UILabel *)label1;
- (UILabel *)label2;
- (ThumbnailImageView *)photo1;
- (ThumbnailImageView *)photo2;
- (void)clearSelection;
- (void)thumbnailImageViewSelect:(int)index;
@end
