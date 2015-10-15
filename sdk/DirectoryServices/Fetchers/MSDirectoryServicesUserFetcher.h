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



#ifndef MSDIRECTORYSERVICESUSERFETCHER_H
#define MSDIRECTORYSERVICESUSERFETCHER_H

#import <orc.h>
#import "MSDirectoryServicesModels.h"
#import "MSOrcEntityFetcher.h"

@class MSDirectoryServicesAssignedLicenseCollectionFetcher;
@class MSDirectoryServicesAssignedPlanCollectionFetcher;
@class MSDirectoryServicesPasswordProfileFetcher;
@class MSDirectoryServicesProvisionedPlanCollectionFetcher;
@class MSDirectoryServicesProvisioningErrorCollectionFetcher;
@class MSDirectoryServicesAppRoleAssignmentCollectionFetcher;
@class MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher;
@class MSDirectoryServicesDirectoryObjectCollectionFetcher;
@class MSDirectoryServicesAppRoleAssignmentCollectionFetcher;
@class MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher;
@class MSDirectoryServicesDirectoryObjectCollectionFetcher;
@class MSDirectoryServicesAppRoleAssignmentFetcher;
@class MSDirectoryServicesOAuth2PermissionGrantFetcher;
@class MSDirectoryServicesDirectoryObjectFetcher;
@class MSDirectoryServicesUserOperations;


/** MSDirectoryServicesUserFetcher
 *
 */
@interface MSDirectoryServicesUserFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSDirectoryServicesUserOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSDirectoryServicesUser *, MSOrcError *))callback;
- (void)update:(MSDirectoryServicesUser *)User callback:(void (^)(MSDirectoryServicesUser *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSDirectoryServicesUserFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryServicesUserFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryServicesUserFetcher *)select:(NSString *)params;
- (MSDirectoryServicesUserFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=appRoleAssignments) MSDirectoryServicesAppRoleAssignmentCollectionFetcher *appRoleAssignments;

- (MSDirectoryServicesAppRoleAssignmentFetcher *)appRoleAssignmentsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=oauth2PermissionGrants) MSDirectoryServicesOAuth2PermissionGrantCollectionFetcher *oauth2PermissionGrants;

- (MSDirectoryServicesOAuth2PermissionGrantFetcher *)oauth2PermissionGrantsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=ownedDevices) MSDirectoryServicesDirectoryObjectCollectionFetcher *ownedDevices;

- (MSDirectoryServicesDirectoryObjectFetcher *)ownedDevicesById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=registeredDevices) MSDirectoryServicesDirectoryObjectCollectionFetcher *registeredDevices;

- (MSDirectoryServicesDirectoryObjectFetcher *)registeredDevicesById:(NSString*)identifier;


@end

#endif