//
// Created by Qordoba on 5/18/15.
// Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
    This category for UIView let developers to mark their Views that contain text, as views with hardcoded text
 */
@interface UIView (Qordoba)
/*
    Check if this UI element is marked as containing hardcoded string
 */
- (BOOL)isStringsLocEnabled;

/*
    Mark this UI element as containing hardcoded string
 */
- (void)enableStringsLoc:(BOOL)flag;
@end