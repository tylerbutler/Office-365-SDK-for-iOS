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


#ifndef MSDIRECTORYSERVICESTENANTDETAILCOLLECTIONFETCHER_H
#define MSDIRECTORYSERVICESTENANTDETAILCOLLECTIONFETCHER_H

@class MSDirectoryServicesTenantDetailFetcher;



#import <orc.h>
#import "MSDirectoryServicesModels.h"

/** MSDirectoryServicesTenantDetailCollectionFetcher
 *
 */
@interface MSDirectoryServicesTenantDetailCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (MSDirectoryServicesTenantDetailFetcher *)getById:(NSString *)Id;
- (void)add:(MSDirectoryServicesTenantDetail *)entity callback:(void (^)(MSDirectoryServicesTenantDetail *, MSOrcError *))callback;

- (MSDirectoryServicesTenantDetailCollectionFetcher *)select:(NSString *)params;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)filter:(NSString *)params;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)search:(NSString *)params;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)top:(int)value;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)skip:(int)value;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)expand:(NSString *)value;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)orderBy:(NSString *)params;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryServicesTenantDetailCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif