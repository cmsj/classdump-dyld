/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol SUPurchaseManagerDelegate <NSObject>
@optional
-(void)purchaseManagerWillBeginUpdates:(id)arg1;
-(void)purchaseManagerDidEndUpdates:(id)arg1;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2;
-(void)purchaseManager:(id)arg1 didFinishPurchaseRequest:(id)arg2 withError:(id)arg3;
-(void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
-(void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2;
@end
