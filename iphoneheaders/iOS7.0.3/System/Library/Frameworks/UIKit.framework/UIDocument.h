/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:53:42 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <Foundation/NSFilePresenter.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSURL, NSOperationQueue, NSString, NSUndoManager, NSDate, NSObject, NSTimer, NSMutableArray, NSLock, NSDocumentDifferenceSize;

@interface UIDocument : NSObject <NSFilePresenter> {

	NSURL* _fileURL;
	NSString* _fileType;
	NSString* _localizedName;
	NSUndoManager* _undoManager;
	NSDate* _fileModificationDate;
	NSObject<OS_dispatch_queue>* _fileAccessQueue;
	NSObject<OS_dispatch_queue>* _openingQueue;
	NSObject<OS_dispatch_semaphore>* _fileAccessSemaphore;
	NSOperationQueue* _filePresenterQueue;
	id _differenceDueToRecentChanges;
	id _differenceSincePreservingPreviousVersion;
	id _differenceSinceSaving;
	NSTimer* _autosavingTimer;
	double _lastSaveTime;
	double _lastPreservationTime;
	id _versionWithoutRecentChanges;
	NSMutableArray* _versions;
	NSLock* _documentPropertyLock;
	id _alertPresenter;
	struct {
		unsigned inClose : 1;
		unsigned isOpen : 1;
		unsigned inOpen : 1;
		unsigned isAutosavingBecauseOfTimer : 1;
		unsigned versionWithoutRecentChangesIsNotLastOpened : 1;
		unsigned ignoreUndoAndRedoNotifications : 1;
		unsigned editingDisabled : 1;
		unsigned isRegisteredAsFilePresenter : 1;
		unsigned movingFile : 1;
		unsigned savingError : 1;
		unsigned inConflict : 1;
	}  _docFlags;

}

@property (setter=_setEditingDisabled:,getter=_isEditingDisabled) BOOL editingDisabled; 
@property (readonly) NSURL * fileURL; 
@property (readonly) NSString * localizedName; 
@property (readonly) NSString * fileType; 
@property (copy) NSDate * fileModificationDate; 
@property (readonly) unsigned documentState; 
@property (retain) NSUndoManager * undoManager; 
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceDueToRecentChanges;                          //@synthesize differenceDueToRecentChanges=_differenceDueToRecentChanges - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceSincePreservingPreviousVersion;              //@synthesize differenceSincePreservingPreviousVersion=_differenceSincePreservingPreviousVersion - In the implementation block
@property (nonatomic,readonly) NSDocumentDifferenceSize * differenceSinceSaving;                                 //@synthesize differenceSinceSaving=_differenceSinceSaving - In the implementation block
@property (readonly) NSURL * presentedItemURL; 
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) NSURL * primaryPresentedItemURL; 
+(void)initialize;
+(id)_fileModificationDateForURL:(id)arg1 ;
+(id)_typeForContentsOfURL:(id)arg1 error:(id*)arg2 ;
+(void)_finishWritingToURL:(id)arg1 withTemporaryDirectoryURL:(id)arg2 newContentsURL:(id)arg3 afterSuccess:(BOOL)arg4 ;
+(void)_autosavingTimerDidFireSoContinue:(id)arg1 ;
+(id)_customizationOfError:(id)arg1 withDescription:(id)arg2 recoverySuggestion:(id)arg3 recoveryAttempter:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)undoManager;
-(unsigned)documentState;
-(id)localizedName;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_setFileURL:(id)arg1 ;
-(void)_unregisterAsFilePresenterIfNecessary;
-(void)_releaseUndoManager;
-(void)_performBlockSynchronouslyOnMainThread:(/*^block*/ id)arg1 ;
-(BOOL)_isInOpen;
-(id)fileURL;
-(void)_setInOpen:(BOOL)arg1 ;
-(void)_registerAsFilePresenterIfNecessary;
-(BOOL)readFromURL:(id)arg1 error:(id*)arg2 ;
-(void)setFileModificationDate:(id)arg1 ;
-(void)_updateLocalizedName;
-(void)_setOpen:(BOOL)arg1 ;
-(void)handleError:(id)arg1 userInteractionPermitted:(BOOL)arg2 ;
-(void)_performBlock:(/*^block*/ id)arg1 synchronouslyOnQueue:(id)arg2 ;
-(void)performAsynchronousFileAccessUsingBlock:(/*^block*/ id)arg1 ;
-(void)_updateConflictState;
-(void)disableEditing;
-(void)enableEditing;
-(void)_sendStateChangedNotification;
-(BOOL)_isOpen;
-(void)_setEditingDisabled:(BOOL)arg1 ;
-(void)setFileType:(id)arg1 ;
-(void)updateChangeCount:(int)arg1 ;
-(void)openWithCompletionHandler:(/*^block*/ id)arg1 ;
-(BOOL)loadFromContents:(id)arg1 ofType:(id)arg2 error:(id*)arg3 ;
-(BOOL)writeContents:(id)arg1 toURL:(id)arg2 forSaveOperation:(int)arg3 originalContentsURL:(id)arg4 error:(id*)arg5 ;
-(id)savingFileType;
-(id)fileType;
-(id)fileNameExtensionForType:(id)arg1 saveOperation:(int)arg2 ;
-(id)contentsForType:(id)arg1 error:(id*)arg2 ;
-(id)changeCountTokenForSaveOperation:(int)arg1 ;
-(id)fileAttributesToWriteToURL:(id)arg1 forSaveOperation:(int)arg2 error:(id*)arg3 ;
-(BOOL)writeContents:(id)arg1 andAttributes:(id)arg2 safelyToURL:(id)arg3 forSaveOperation:(int)arg4 error:(id*)arg5 ;
-(void)_finishSavingToURL:(id)arg1 forSaveOperation:(int)arg2 changeCount:(id)arg3 ;
-(BOOL)_coordinateWritingItemAtURL:(id)arg1 error:(id*)arg2 byAccessor:(/*^block*/ id)arg3 ;
-(void)updateChangeCountWithToken:(id)arg1 forSaveOperation:(int)arg2 ;
-(BOOL)hasUnsavedChanges;
-(void)_scheduleAutosaving;
-(void)_autosaveWithCompletionHandler:(/*^block*/ id)arg1 ;
-(double)_autosavingDelay;
-(void)_scheduleAutosavingAfterDelay:(double)arg1 reset:(BOOL)arg2 ;
-(void)_rescheduleAutosaving;
-(void)_autosavingCompletedSuccessfully:(BOOL)arg1 ;
-(void)saveToURL:(id)arg1 forSaveOperation:(int)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)autosaveWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_saveUnsavedChangesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)differenceSinceSaving;
-(BOOL)_hasUnsavedChanges;
-(id)differenceDueToRecentChanges;
-(id)differenceSincePreservingPreviousVersion;
-(void)_changeWasUndone:(id)arg1 ;
-(void)_changeWasRedone:(id)arg1 ;
-(void)_changeWasDone:(id)arg1 ;
-(void)setUndoManager:(id)arg1 ;
-(void)finishedHandlingError:(id)arg1 recovered:(BOOL)arg2 ;
-(void)_setHasSavingError:(BOOL)arg1 ;
-(BOOL)_shouldAllowWritingInResponseToPresenterMessage;
-(BOOL)_isEditingDisabled;
-(void)revertToContentsOfURL:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)fileModificationDate;
-(void)_setInConflict:(BOOL)arg1 ;
-(void)relinquishPresentedItemToReader:(/*^block*/ id)arg1 ;
-(void)relinquishPresentedItemToWriter:(/*^block*/ id)arg1 ;
-(void)savePresentedItemChangesWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(void)presentedItemDidChange;
-(void)presentedItemDidGainVersion:(id)arg1 ;
-(void)presentedItemDidLoseVersion:(id)arg1 ;
-(void)presentedItemDidResolveConflictVersion:(id)arg1 ;
-(void)accommodatePresentedSubitemDeletionAtURL:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)presentedSubitemDidAppearAtURL:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didMoveToURL:(id)arg2 ;
-(void)presentedSubitemDidChangeAtURL:(id)arg1 ;
-(void)presentedSubitemAtURL:(id)arg1 didGainVersion:(id)arg2 ;
-(void)presentedSubitemAtURL:(id)arg1 didLoseVersion:(id)arg2 ;
-(void)presentedSubitemAtURL:(id)arg1 didResolveConflictVersion:(id)arg2 ;
-(id)presentedItemURL;
-(id)presentedItemOperationQueue;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)_hasSavingError;
-(BOOL)_isInConflict;
-(void)_lockFileAccessQueueAndPerformBlock:(/*^block*/ id)arg1 ;
-(void)_unlockFileAccessQueue;
-(id)_presentableFileNameForSaveOperation:(int)arg1 url:(id)arg2 ;
-(void)closeWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)userInteractionNoLongerPermittedForError:(id)arg1 ;
-(id)_fileOpeningQueue;
@end
