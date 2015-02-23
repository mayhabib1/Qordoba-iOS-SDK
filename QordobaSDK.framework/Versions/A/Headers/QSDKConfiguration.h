//
// Created by Qordoba on 1/31/15.
// Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QSDKConfiguration : NSObject
@property (nonatomic, strong) NSString *applicationId;
@property (nonatomic, strong) NSString *key;
@property (nonatomic, assign) BOOL autoInitialization;
@property (nonatomic, assign) NSUInteger productionResourceSyncIntervalInSeconds;

- (instancetype)initWithKey:(NSString *)key andApplicationId:(NSString *)applicationId;
@end