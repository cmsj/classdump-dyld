/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Nike.app/Nike
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface STTelephonyController : NSObject {

	int _callStatus;
	int _callStatusObservers;

}
+(id)sharedTelephonyController;
-(void)_callStatusDidChange:(id)arg1 ;
-(void)beginGeneratingCallStatusChanges;
-(void)endGeneratingCallStatusChanges;
@end
