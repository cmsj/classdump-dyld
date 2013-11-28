/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <CoreFoundation/NSMutableData.h>

@class PLImageTableSegment, NSData, NSString;

@interface PLMappedImageData : NSMutableData {

	PLImageTableSegment* _segment;
	void* _bytes;
	unsigned long _length;
	BOOL _freeBytes;
	NSData* _pl_data;

}

@property (assign,nonatomic) unsigned imageWidth; 
@property (assign,nonatomic) unsigned imageHeight; 
@property (nonatomic,copy) NSString * photoUUID; 
-(void)dealloc;
-(unsigned)length;
-(const void*)bytes;
-(void*)mutableBytes;
-(id)initWithImageTableSegment:(id)arg1 bytes:(void*)arg2 length:(unsigned long)arg3 ;
-(id)photoUUID;
-(void)setPhotoUUID:(id)arg1 ;
-(void)setImageWidth:(unsigned)arg1 ;
-(void)setImageHeight:(unsigned)arg1 ;
-(unsigned)imageWidth;
-(unsigned)imageHeight;
-(unsigned)lengthIncludingFooter;
-(PLImageTableEntryFooter_s*)_footer;
-(id)initWithThumbnailPath:(id)arg1 ;
-(id)initWithEntryLength:(unsigned)arg1 ;
-(id)brokencopy;
-(unsigned)pl_advisoryLength;
-(BOOL)pl_writeToPath:(id)arg1 ;
@end
