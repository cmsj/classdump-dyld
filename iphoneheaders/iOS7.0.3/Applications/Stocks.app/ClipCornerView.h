/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:01 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Stocks.app/Stocks
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/Stocks-Structs.h>
#import <UIKit/UIView.h>

@class UIBezierPath, UIImage;

@interface ClipCornerView : UIView {

	float _cornerRadius;
	int _rectCorner;
	CGPoint _pathOrigin;
	UIBezierPath* _clipPath;
	UIImage* _backgroundImage;
	CGRect _backgroundImageSubrect;

}

@property (assign,nonatomic) float cornerRadius;                         //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                  //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) CGRect backgroundImageSubrect;              //@synthesize backgroundImageSubrect=_backgroundImageSubrect - In the implementation block
-(void)_updateCornerPath;
-(id)initWithCornerRadius:(float)arg1 forCorner:(int)arg2 ;
-(void)setBackgroundImageSubrect:(CGRect)arg1 ;
-(CGRect)backgroundImageSubrect;
-(void)drawRect:(CGRect)arg1 ;
-(float)cornerRadius;
-(void)setCornerRadius:(float)arg1 ;
-(id)backgroundImage;
-(void)setBackgroundImage:(id)arg1 ;
-(void).cxx_destruct;
@end
