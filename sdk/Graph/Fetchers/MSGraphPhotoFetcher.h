/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHPHOTOFETCHER_H
#define MSGRAPHPHOTOFETCHER_H

#import <orc.h>
#import "MSGraphModels.h"
#import "MSOrcMediaEntityFetcher.h"

@class MSGraphPhotoOperations;


/** MSGraphPhotoFetcher
 *
 */
@interface MSGraphPhotoFetcher : MSOrcMediaEntityFetcher

@property (copy, nonatomic, readonly) MSGraphPhotoOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphPhoto *, MSOrcError *))callback;
- (void)update:(MSGraphPhoto *)Photo callback:(void (^)(MSGraphPhoto *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphPhotoFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphPhotoFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphPhotoFetcher *)select:(NSString *)params;
- (MSGraphPhotoFetcher *)expand:(NSString *)value;

@end

#endif