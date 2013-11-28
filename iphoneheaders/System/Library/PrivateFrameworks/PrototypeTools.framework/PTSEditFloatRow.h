/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PrototypeTools/PTSRow.h>

@interface PTSEditFloatRow : PTSRow {

	unsigned _precision;

}

@property (assign,nonatomic) unsigned precision;              //@synthesize precision=_precision - In the implementation block
-(unsigned)precision;
-(void)setPrecision:(unsigned)arg1 ;
-(id)init;
-(id)precision:(unsigned)arg1 ;
-(void)updateWithRow:(id)arg1 ;
-(id)between:(float)arg1 and:(float)arg2 ;
-(Class)rowTableViewCellClass;
@end
