//
//  TumbPlayer.h
//  AirVideo
//
//  Created by SEB on 4/3/14.
//  Copyright (c) 2014 SEB. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "libavformat/avformat.h"
#import "libavcodec/avcodec.h"
#import "libavformat/avio.h"
#import "libswscale/swscale.h"
#import <AudioToolbox/AudioQueue.h>
#import <AudioToolbox/AudioToolbox.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface TumbPlayer : NSObject{
	AVFormatContext *pFormatCtx;
	AVCodecContext *pCodecCtx;
    AVFrame *pFrame;
    AVPacket packet;
	AVPicture picture;
	int videoStream;

	struct SwsContext *img_convert_ctx;
	int sourceWidth, sourceHeight;
	int outputWidth, outputHeight;
	UIImage *currentImage;
	double duration;
    double currentTime;
    BOOL _inBuffer;
    AVPacket *_packet, _currentPacket;
    BOOL primed;
    
    
}
/* Last decoded picture as UIImage */
@property (nonatomic, readonly) UIImage *currentImage;

/* Size of video frame */
@property (nonatomic, readonly) int sourceWidth, sourceHeight;

/* Output image size. Set to the source size by default. */
@property (nonatomic) int outputWidth, outputHeight;

/* Length of video in seconds */
@property (nonatomic, readonly) double duration;

/* Current time of video in seconds */
@property (nonatomic, readonly) double currentTime;


/* Initialize with movie at moviePath. Output dimensions are set to source dimensions. */
-(id)initWithVideo:(NSString *)moviePath usesTcp:(BOOL)usesTcp;

/* Read the next frame from the video stream. Returns false if no frame read (video over). */
-(BOOL)stepFrame;

/* Seek to closest keyframe near specified time */
-(void)seekTime:(double)seconds;


- (AVPacket*)readPacket;

@end
