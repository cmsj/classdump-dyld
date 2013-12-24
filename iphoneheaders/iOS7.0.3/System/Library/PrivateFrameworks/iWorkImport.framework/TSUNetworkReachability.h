/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSUNetworkReachability : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _localWiFi;

}

@property (nonatomic,readonly) BOOL connectionRequired; 
@property (nonatomic,readonly) int status; 
+(id)networkReachabilityWithHostName:(id)arg1 ;
+(id)networkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)networkReachabilityForDocumentResources;
+(id)networkReachabilityForInternetConnection;
+(id)networkReachabilityForLocalWiFi;
+(int)networkReachabilityStatusForDocumentResources;
+(int)networkReachabilityStatusForInternetConnection;
+(int)networkReachabilityStatusForLocalWiFi;
-(id)initWithReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
-(void)dealloc;
-(id)init;
-(int)status;
-(BOOL)connectionRequired;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
@end
