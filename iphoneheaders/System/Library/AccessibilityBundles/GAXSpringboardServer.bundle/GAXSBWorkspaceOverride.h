/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:01:39 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/AccessibilityBundles/GAXSpringboardServer.bundle/GAXSpringboardServer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <GAXSpringboardServer/GAXSBWorkspaceOverride_super.h>

@interface GAXSBWorkspaceOverride : GAXSBWorkspaceOverride_super
+(void)_initializeSafeCategory;
+(id)_accessibilityTargetClassName;
+(id)_installSafeCategoryValidationMethod;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(id)_initializeSafeCategoryFromValidationManager;
-(void)workspace:(id)arg1 handleStatusBarReturnActionFromApplication:(id)arg2 statusBarStyle:(id)arg3 ;
-(int)workspace:(id)arg1 canOpenApplication:(id)arg2 ;
-(void)workspace:(id)arg1 handleOpenApplicationRequest:(id)arg2 withOptions:(id)arg3 origin:(id)arg4 withResult:(/*^block*/ id)arg5 ;
-(void)workspace:(id)arg1 handleOpenURLRequest:(id)arg2 application:(id)arg3 withOptions:(id)arg4 origin:(id)arg5 withResult:(/*^block*/ id)arg6 ;
@end
