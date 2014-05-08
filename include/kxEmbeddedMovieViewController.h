//
//  kxEmbeddedMovieViewController.h
//  AirVideo
//
//  Created by SEB on 4/7/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//


@class KxMovieDecoder;

extern NSString * const KxEMovieParameterMinBufferedDuration;    // Float
extern NSString * const KxEMovieParameterMaxBufferedDuration;    // Float
extern NSString * const KxEMovieParameterDisableDeinterlacing;   // BOOL

#import <UIKit/UIKit.h>

@class KxMovieDecoder;
@interface kxEmbeddedMovieViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, UIDocumentInteractionControllerDelegate>
{
    BOOL downloadable;
    NSString* documentPath;
    NSString* videoPath;
    UIDocumentInteractionController* documentController;
}

-(void)updateDownload:(NSString*)titre;
@property (nonatomic,retain)NSString* documentPath;
@property (nonatomic,retain)NSString* videoPath;
+ (id) movieViewControllerWithContentPath: (NSString *) path
                               parameters: (NSDictionary *) parameters;
@property (nonatomic) BOOL downloadable;
-(void)loadViewInSize:(CGSize)size;
@property (readonly) BOOL playing;
- (void) restartPlay;
- (void) play;
- (void) pause;



@end
