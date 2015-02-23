//
//  QordobaSDK.h
//  QordobaSDK
//
//  Created by Qordoba on 1/26/15.
//  Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "QSDKConfiguration.h"

@interface QordobaSDK : NSObject<UIAlertViewDelegate>
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId;
+ (void)startWithKey:(NSString *)key andApplicationId:(NSString *)applicationId andAutoInitialization:(BOOL)flag;
+ (void)startWithConfiguration:(QSDKConfiguration*)configuration;

+ (BOOL)isSandboxOn;
+ (QSDKConfiguration *)getSDKConfiguration;

+ (BOOL)isValidController:(UIViewController *)viewController;
@end
