/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DRetargetRenderProcessor.h>

@class NSMutableSet, NSSet;

@interface TSCH3DTrackResourcesRenderProcessor : TSCH3DRetargetRenderProcessor {

	NSMutableSet* mResourceSet;

}

@property (nonatomic,readonly) NSSet * resourceSet; 
-(int)attribute:(id)arg1 resource:(id)arg2 specs:(const AttributeSpecsRef)arg3 ;
-(int)texture:(id)arg1 attributes:(const TextureAttributes*)arg2 ;
-(id)initWithOriginal:(id)arg1 ;
-(id)resetReturningPreviousResourceSet;
-(id)resourceSet;
-(void)dealloc;
@end
