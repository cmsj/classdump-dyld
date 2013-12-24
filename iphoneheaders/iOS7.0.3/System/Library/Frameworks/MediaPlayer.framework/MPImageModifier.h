/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@interface MPImageModifier : NSObject

@property (nonatomic,readonly) BOOL fastEnoughToApplySynchronously; 
-(BOOL)fastEnoughToApplySynchronously;
-(BOOL)shouldModifyImageWithContentSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSubRect:(CGRect)arg3 ;
-(CGSize)contentSizeForSize:(CGSize)arg1 ;
-(CGRect)imageFrameForContentSize:(CGSize)arg1 imageFrame:(CGRect)arg2 imageSubRect:(CGRect)arg3 ;
-(void)drawImageBackgroundWithContext:(CGContextRef)arg1 contentSize:(CGSize)arg2 contentSubRect:(CGRect)arg3 ;
-(void)drawImageForegroundWithContext:(CGContextRef)arg1 contentSize:(CGSize)arg2 contentSubRect:(CGRect)arg3 ;
@end
