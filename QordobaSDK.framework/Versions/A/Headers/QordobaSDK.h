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
 * Start Qordoba SDK passing sandbox or production key and application id
 */
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId;

/*
 * Start Qordoba SDK passing sandbox or production key and application id.
 * manualLanguageSwitch -> choose the way to change language:
 *      YES -> manual language switch inside your application
 *      NO  -> automatically, based on phone's language
 */
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId manualLanguageSwitch:(BOOL)manualLanguageSwitch;

/*
 * Start Qordoba SDK passing sandbox or production key and application id.
 * preDownloadReleases -> choose the way releases are downloaded
 *      YES -> When SDK starts, it will download all available live releases (latest versions)
 *      NO  -> When SDK starts, it will download only available live release for current language
 */
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId preDownloadReleases:(BOOL)preDownloadReleases;

/*
 * Start Qordoba SDK with configuration object
 * NSString *key                   -> set production/sandbox key
 * NSString *applicationId         -> set application id
 * BOOL      manualLanguageSwitch  -> set to YES if you want to change language manually inside your app
 */
+ (void)startWithConfiguration:(QSDKConfiguration*)configuration;

/*
 * Check if SDK is initialized
 */
+ (BOOL)isSDKInitialized;

/*
 * Check if SDK is initialized with manual language switch mode.
 */
+ (BOOL)manualLanguageSwitch;


/*
 * Create a special route for the view controller instance.
 * It will mark this specific instance of view controller with custom developer string.
 * It should be used when the same view controller class is used across the app in different situations with different data.
 * It's very important that each screen pushed to the Qordoba backned, have different screen code.
 * 
 * NSString *route                  -> custom string that developer provides, that will be used to distinguish this view controller 
 *                                     instance from others that are using this same view controller class
 * UIViewController *viewController -> view controller instance that we want to create 'route' for.
 */
+ (void)screenNavigationRoute:(NSString *)route forViewController:(UIViewController *)viewController;

@end
