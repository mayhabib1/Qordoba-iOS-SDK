//
// Created by Qordoba on 1/31/15.
// Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QSDKConfiguration : NSObject
@property (nonatomic, strong) NSString *applicationId;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, assign) BOOL manualLanguageSwitch;
@property (nonatomic, assign) BOOL debugMode;
@property (nonatomic, assign) BOOL predownloadReleases;
@property (nonatomic, assign) BOOL autoInitialization;
@property (nonatomic, assign) NSUInteger productionResourceSyncIntervalInSeconds;

- (instancetype)initWithKey:(NSString *)key andApplicationId:(NSString *)applicationId;

- (instancetype)initWithKey:(NSString *)key andApplicationId:(NSString *)applicationId debugMode:(BOOL)flag;

- (instancetype)initWithKey:(NSString *)key andApplicationId:(NSString *)applicationId preDownloadReleases:(BOOL)flag;

- (instancetype)initWithKey:(NSString *)key andApplicationId:(NSString *)applicationId manualLanguageSwitch:(BOOL)manualLanguageSwitch;

- (instancetype)initWithKey:(NSString *)key andApplicationId:(NSString *)applicationId manualLanguageSwitch:(BOOL)manualLanguageSwitch debugMode:(BOOL)debugFlag;

@end