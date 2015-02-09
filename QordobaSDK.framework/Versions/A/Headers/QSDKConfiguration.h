//
// Created by Konrad Rodzik on 1/31/15.
// Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface QSDKConfiguration : NSObject
@property (nonatomic, strong) NSString *projectId;
@property (nonatomic, strong) NSString *key;

- (instancetype)initWithKey:(NSString *)key andProjectId:(NSString *)projectId;
@end