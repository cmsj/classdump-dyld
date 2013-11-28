/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/ODDDataPoint.h>

@class NSMutableArray, ODDTransitionPoint;

@interface ODDNodePoint : ODDDataPoint {

	ODDNodePoint* mParent;
	NSMutableArray* mChildren;
	ODDTransitionPoint* mParentTransition;
	ODDTransitionPoint* mSiblingTransition;

}
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(id)siblingTransition;
-(id)parentTransition;
-(void)addChild:(id)arg1 order:(unsigned)arg2 ;
-(void)setParentTransition:(id)arg1 ;
-(void)setSiblingTransition:(id)arg1 ;
-(id)children;
-(id)parent;
@end
