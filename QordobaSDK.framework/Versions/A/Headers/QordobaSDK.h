//
//  QordobaSDK.h
//  QordobaSDK
//
//  Created by Qordoba on 1/26/15.
//  Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QSDKConfiguration.h"

#if __IPHONE_OS_VERSION_MIN_REQUIRED < 70000
#error "QordobaSDK doesn't support iOS 6.x and lower. Please, change your minimum deployment target to iOS 7.0"
#endif

/*
    QordobaSDK class is used for the SDK initialization
 */
@interface QordobaSDK : NSObject

/*
    Start Qordoba SDK passing sandbox or production key and application id
 */
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId;

/*
    Start Qordoba SDK passing sandbox or production key and application id.
    manualLanguageSwitch -> choose the way to change language:
        YES -> manual language switch inside your application
        NO  -> automatically, based on phone's language
 */
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId manualLanguageSwitch:(BOOL)manualLanguageSwitch;

/*
    Start Qordoba SDK passing sandbox or production key and application id.
    preDownloadReleases -> choose the way releases are downloaded
        YES -> When SDK starts, it will download all available live releases (latest versions)
        NO  -> When SDK starts, it will download only available live release for current language
 */
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId preDownloadReleases:(BOOL)preDownloadReleases;

/*
    Start Qordoba SDK with configuration object
    NSString *key                   -> set production/sandbox key
    NSString *applicationId         -> set application id
    BOOL      manualLanguageSwitch  -> set to YES if you want to change language manually inside your app
 */
+ (void)startWithConfiguration:(QSDKConfiguration*)configuration;

/*
    Check if SDK is initialized
 */
+ (BOOL)isSDKInitialized;

/*
    Check if SDK is initialized with manual language switch mode.
 */
+ (BOOL)manualLanguageSwitch;
@end
