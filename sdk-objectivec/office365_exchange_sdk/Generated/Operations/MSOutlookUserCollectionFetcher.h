/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

@class MSOutlookUserFetcher;

#import <office365_odata_base/office365_odata_base.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookUserCollectionFetcher.
*/

@protocol MSOutlookUserCollectionFetcher<MSODataCollectionFetcher>

@optional
-(NSURLSessionTask*)read:(void (^)(NSArray<MSOutlookUser> *users, MSODataException *error))callback;

-(id<MSOutlookUserCollectionFetcher>)select : (NSString*) params;
-(id<MSOutlookUserCollectionFetcher>)filter : (NSString*) params;
-(id<MSOutlookUserCollectionFetcher>)top : (int) value;
-(id<MSOutlookUserCollectionFetcher>)skip : (int) value;
-(id<MSOutlookUserCollectionFetcher>)expand : (NSString*) value;
-(id<MSOutlookUserCollectionFetcher>)orderBy : (NSString*) params;
-(id<MSOutlookUserCollectionFetcher>)addCustomParameters : (NSString*)name : (id)value;
-(id<MSOutlookUserCollectionFetcher>)addCustomHeaderWithName : (NSString*)name andValue : (NSString*) value;

@required

-(id)initWithUrl:(NSString *)urlComponent parent:(id<MSODataExecutable>)parent;
-(MSOutlookUserFetcher*)getById:(NSString *)Id;
-(NSURLSessionTask*)addUser:(MSOutlookUser* )entity withCallback:(void (^)(MSOutlookUser *user, MSODataException *e))callback;

@end

@interface MSOutlookUserCollectionFetcher : MSODataCollectionFetcher<MSOutlookUserCollectionFetcher>

@end