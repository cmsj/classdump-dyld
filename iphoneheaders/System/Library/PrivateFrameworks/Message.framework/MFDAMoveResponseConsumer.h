/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <Message/DAMessageMoveRequestConsumer.h>

@class NSSet, NSMutableDictionary, NSMutableSet, MFError;

@interface MFDAMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer> {

	NSSet* _messagesIDs;
	NSMutableDictionary* _newRemoteIDsByMessageID;
	NSMutableSet* _failures;
	MFError* _error;

}

@property (nonatomic,retain) MFError * error;              //@synthesize error=_error - In the implementation block
-(void)setError:(id)arg1 ;
-(void)dealloc;
-(id)initWithMessageIDs:(id)arg1 newRemoteIDsByMessageID:(id)arg2 failures:(id)arg3 ;
-(void)taskFailed:(id)arg1 statusCode:(int)arg2 error:(id)arg3 ;
-(void)resultsForMessageMove:(id)arg1 ;
-(id)error;
@end
