//
// Created by Qordoba on 8/2/15.
// Copyright (c) 2015 Qordoba. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
    QLang object that represents localization language release, that you created during release process on https://app.qordoba.com/
    params:
        @languageCode - Language code (example: en-us)
        @languageName - Human readable name of the language (example: Polish - Poland)
 */
@interface QLang : NSObject
@property (nonatomic, strong) NSString *languageCode;
@property (nonatomic, strong) NSString *languageName;
@end

typedef void (^AvailableLanguagesCallback)(NSArray *languages, NSError *error);
typedef void (^ApplyLangCallback)(QLang *language, NSError *error);

/*
    QordobaSDKLanguages class that gives developer opportunity to get all available (LIVE) localization releases.
    IMPORTANT: remember that before you use this class to get available release languages, you need to initialize SDK with 'manualLanguageSwitch' flag set to YES.
 */
@interface QordobaSDKLanguages : NSObject

/*
    availableLanguagesWithCallback:
        Get all available/LIVE languages releases from qpp.qordoba.com backend
        You will get an array of the QLang elements that represent LIVE releases.
        params:
            @callback block:
                @languages - Result of the call. Array of QLang objects
                @error - error for the method call, if any.

 */
- (void)availableLanguagesWithCallback:(AvailableLanguagesCallback)callback;

/*
    applyLanguage:withCallback:
        Apply any QLang release object to your application
        params:
            @language - One of the objects returned from availableLanguagesWithCallback: method call.
            @callback block:
                @language - language object (QLang) that you want to apply to your application
                @error - error for the method call, if any.
 */
- (void)applyLanguage:(QLang *)language withCallback:(ApplyLangCallback)callback;

/*
    selectedLanguageLocale will return a string representation of the currently selected language locale (language code)
    If there is no selected language, it will return nil object.
    Example: @"en-us", @"pl-pl" etc.
    You can compare it with the 'languageCode' value from QLang object.
 */
- (NSString *)selectedLanguageLocale;

/*
    selectedLanguage will return index of the currently selected language if it's available within array passed in the parameter.
    If the currently selected language doesn't exist in the array of languages passed to the method, it will return NSNotFound value
        params:
            @languages - Array of QLang objects that you want to search in for currently selected language.
 */
- (NSUInteger)selectedLanguage:(NSArray *)languages;

@end