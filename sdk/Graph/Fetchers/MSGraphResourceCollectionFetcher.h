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


#ifndef MSGRAPHRESOURCECOLLECTIONFETCHER_H
#define MSGRAPHRESOURCECOLLECTIONFETCHER_H

@class MSGraphResourceFetcher;

#import "core/MSOrcCollectionFetcher.h"
#import "api/api.h"
#import "core/core.h"
#import "MSGraphModels.h"

/** MSGraphResourceCollectionFetcher
 *
 */
@interface MSGraphResourceCollectionFetcher : MSOrcCollectionFetcher

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)readWithCallback:(void (^)(NSArray *, MSOrcError *))callback;

- (MSGraphResourceFetcher *)getById: (id) identifier;
- (void)add:(MSGraphResource *)entity callback:(void (^)(MSGraphResource *, MSOrcError *))callback;

- (MSGraphResourceCollectionFetcher *)select:(NSString *)params;
- (MSGraphResourceCollectionFetcher *)filter:(NSString *)params;
- (MSGraphResourceCollectionFetcher *)search:(NSString *)params;
- (MSGraphResourceCollectionFetcher *)top:(int)value;
- (MSGraphResourceCollectionFetcher *)skip:(int)value;
- (MSGraphResourceCollectionFetcher *)expand:(NSString *)value;
- (MSGraphResourceCollectionFetcher *)orderBy:(NSString *)params;
- (MSGraphResourceCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphResourceCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@end

#endif