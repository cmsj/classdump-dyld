/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:09 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/sbin/BTAvrcp
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol BTAVRCP_NowPlayingInfoDelegate <NSObject>
@required
-(void)playerDidChange:(int)arg1;
-(void)playbackStateDidChange:(int)arg1;
-(void)trackDidChange:(unsigned long long)arg1;
-(void)playbackQueueDidChange;
-(void)settingsDidChange:(SCD_Struct_BT0)arg1;
@end
