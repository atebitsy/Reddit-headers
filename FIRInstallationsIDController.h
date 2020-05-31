//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRInstallationsAPIService, FIRInstallationsIIDStore, FIRInstallationsIIDTokenStore, FIRInstallationsSingleOperationPromiseCache, FIRInstallationsStore, NSString;

@interface FIRInstallationsIDController : NSObject
{
    NSString *_appID;
    NSString *_appName;
    FIRInstallationsStore *_installationsStore;
    FIRInstallationsIIDStore *_IIDStore;
    FIRInstallationsIIDTokenStore *_IIDTokenStore;
    FIRInstallationsAPIService *_APIService;
    FIRInstallationsSingleOperationPromiseCache *_getInstallationPromiseCache;
    FIRInstallationsSingleOperationPromiseCache *_authTokenPromiseCache;
    FIRInstallationsSingleOperationPromiseCache *_authTokenForcingRefreshPromiseCache;
    FIRInstallationsSingleOperationPromiseCache *_deleteInstallationPromiseCache;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *deleteInstallationPromiseCache; // @synthesize deleteInstallationPromiseCache=_deleteInstallationPromiseCache;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *authTokenForcingRefreshPromiseCache; // @synthesize authTokenForcingRefreshPromiseCache=_authTokenForcingRefreshPromiseCache;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *authTokenPromiseCache; // @synthesize authTokenPromiseCache=_authTokenPromiseCache;
@property(readonly, nonatomic) FIRInstallationsSingleOperationPromiseCache *getInstallationPromiseCache; // @synthesize getInstallationPromiseCache=_getInstallationPromiseCache;
@property(readonly, nonatomic) FIRInstallationsAPIService *APIService; // @synthesize APIService=_APIService;
@property(readonly, nonatomic) FIRInstallationsIIDTokenStore *IIDTokenStore; // @synthesize IIDTokenStore=_IIDTokenStore;
@property(readonly, nonatomic) FIRInstallationsIIDStore *IIDStore; // @synthesize IIDStore=_IIDStore;
@property(readonly, nonatomic) FIRInstallationsStore *installationsStore; // @synthesize installationsStore=_installationsStore;
@property(readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(readonly, nonatomic) NSString *appID; // @synthesize appID=_appID;
- (_Bool)isDefaultApp;
- (void)postFIDDidChangeNotification;
- (id)mostRecentInstallationOperation;
- (id)deleteExistingIIDIfNeeded;
- (id)sendDeleteInstallationRequestIfNeeded:(id)arg1;
- (id)deleteInstallationLocally:(id)arg1;
- (id)createDeleteInstallationPromise;
- (id)deleteInstallation;
- (id)regenerateFIDOnRefreshTokenErrorIfNeeded:(id)arg1;
- (id)refreshAuthTokenForInstallation:(id)arg1;
- (id)installationWithValidAuthTokenForcingRefresh:(_Bool)arg1;
- (id)getAuthTokenForcingRefresh:(_Bool)arg1;
- (_Bool)doesRegistrationErrorRequireConfigChange:(id)arg1;
- (id)registerInstallationIfNeeded:(id)arg1;
- (id)createInstallationWithFID:(id)arg1 IIDDefaultToken:(id)arg2;
- (id)migrateOrGenerateInstallation;
- (id)saveInstallation:(id)arg1;
- (id)createAndSaveFID;
- (id)getStoredInstallation;
- (id)createGetInstallationItemPromise;
- (id)getInstallationItem;
- (id)initWithGoogleAppID:(id)arg1 appName:(id)arg2 installationsStore:(id)arg3 APIService:(id)arg4 IIDStore:(id)arg5 IIDTokenStore:(id)arg6;
- (id)initWithGoogleAppID:(id)arg1 appName:(id)arg2 APIKey:(id)arg3 projectID:(id)arg4 GCMSenderID:(id)arg5 accessGroup:(id)arg6;

@end

