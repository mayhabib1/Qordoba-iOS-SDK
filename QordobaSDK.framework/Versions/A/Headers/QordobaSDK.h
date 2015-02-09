//
//  QordobaSDK.h
//  QordobaSDK
//
//  Created by Konrad Rodzik on 1/26/15.
//  Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "QSDKConfiguration.h"

@interface QordobaSDK : NSObject
+ (void)startWithKey:(NSString *)key andProjectId:(NSString *)projectId;
+ (void)startWithConfiguration:(QSDKConfiguration*)configuration;

+ (BOOL)isSandboxOn;

+ (QSDKConfiguration *)getSDKConfiguration;
@end
