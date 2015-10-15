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


#ifndef MSGRAPHUSEROPERATIONS_H
#define MSGRAPHUSEROPERATIONS_H
				  		

#import <orc.h>
#import "MSGraphModels.h"
#import "MSGraphDirectoryObjectOperations.h"


/** MSGraphUserOperations
 *
 */
@interface MSGraphUserOperations : MSGraphDirectoryObjectOperations

- (instancetype)initOperationWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

- (void)assignLicenseWithAddLicenses:(MSGraphAssignedLicense *)addLicenses removeLicenses:(NSString *)removeLicenses callback:(void (^)(MSGraphUser *, MSOrcError*))callback ;
- (void)assignLicenseRawWithAddLicenses:(NSString *)addLicenses removeLicenses:(NSString *)removeLicenses callback:(void (^)(NSString *, MSOrcError*))callback ;
- (void)sendMailWithMessage:(MSGraphMessage *)message saveToSentItems:(bool)saveToSentItems callback:(void (^)(int, MSOrcError*))callback ;
- (void)sendMailRawWithMessage:(NSString *)message saveToSentItems:(NSString *)saveToSentItems callback:(void (^)(NSString *, MSOrcError*))callback ;

@end

#endif