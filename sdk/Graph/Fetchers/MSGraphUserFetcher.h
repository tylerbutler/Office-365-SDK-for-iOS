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



#ifndef MSGRAPHUSERFETCHER_H
#define MSGRAPHUSERFETCHER_H

#import <orc.h>
#import "MSGraphModels.h"
#import "MSOrcEntityFetcher.h"

@class MSGraphAssignedLicenseCollectionFetcher;
@class MSGraphAssignedPlanCollectionFetcher;
@class MSGraphPasswordProfileFetcher;
@class MSGraphProvisionedPlanCollectionFetcher;
@class MSGraphProvisioningErrorCollectionFetcher;
@class MSGraphAppRoleAssignmentCollectionFetcher;
@class MSGraphOAuth2PermissionGrantCollectionFetcher;
@class MSGraphDirectoryObjectCollectionFetcher;
@class MSGraphDirectoryObjectFetcher;
@class MSGraphMessageCollectionFetcher;
@class MSGraphCalendarCollectionFetcher;
@class MSGraphCalendarFetcher;
@class MSGraphCalendarGroupCollectionFetcher;
@class MSGraphEventCollectionFetcher;
@class MSGraphPhotoFetcher;
@class MSGraphPhotoCollectionFetcher;
@class MSGraphFileCollectionFetcher;
@class MSGraphGroupCollectionFetcher;
@class MSGraphDriveFetcher;
@class MSGraphItemCollectionFetcher;
@class MSGraphAppRoleAssignmentCollectionFetcher;
@class MSGraphOAuth2PermissionGrantCollectionFetcher;
@class MSGraphDirectoryObjectCollectionFetcher;
@class MSGraphDirectoryObjectFetcher;
@class MSGraphMessageCollectionFetcher;
@class MSGraphCalendarCollectionFetcher;
@class MSGraphCalendarFetcher;
@class MSGraphCalendarGroupCollectionFetcher;
@class MSGraphEventCollectionFetcher;
@class MSGraphPhotoFetcher;
@class MSGraphPhotoCollectionFetcher;
@class MSGraphFileCollectionFetcher;
@class MSGraphGroupCollectionFetcher;
@class MSGraphDriveFetcher;
@class MSGraphItemCollectionFetcher;
@class MSGraphAppRoleAssignmentFetcher;
@class MSGraphOAuth2PermissionGrantFetcher;
@class MSGraphDirectoryObjectFetcher;
@class MSGraphMessageFetcher;
@class MSGraphCalendarFetcher;
@class MSGraphCalendarGroupFetcher;
@class MSGraphEventFetcher;
@class MSGraphPhotoFetcher;
@class MSGraphFileFetcher;
@class MSGraphUserFetcher;
@class MSGraphGroupFetcher;
@class MSGraphItemFetcher;
@class MSGraphUserOperations;


/** MSGraphUserFetcher
 *
 */
@interface MSGraphUserFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphUserOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphUser *, MSOrcError *))callback;
- (void)update:(MSGraphUser *)User callback:(void (^)(MSGraphUser *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphUserFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphUserFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphUserFetcher *)select:(NSString *)params;
- (MSGraphUserFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=appRoleAssignments) MSGraphAppRoleAssignmentCollectionFetcher *appRoleAssignments;

- (MSGraphAppRoleAssignmentFetcher *)appRoleAssignmentsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=oauth2PermissionGrants) MSGraphOAuth2PermissionGrantCollectionFetcher *oauth2PermissionGrants;

- (MSGraphOAuth2PermissionGrantFetcher *)oauth2PermissionGrantsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=ownedDevices) MSGraphDirectoryObjectCollectionFetcher *ownedDevices;

- (MSGraphDirectoryObjectFetcher *)ownedDevicesById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=registeredDevices) MSGraphDirectoryObjectCollectionFetcher *registeredDevices;

- (MSGraphDirectoryObjectFetcher *)registeredDevicesById:(NSString*)identifier;


@property (strong, nonatomic, readonly, getter=manager) MSGraphDirectoryObjectFetcher *manager;
@property (strong, nonatomic, readonly, getter=directReports) MSGraphDirectoryObjectCollectionFetcher *directReports;

- (MSGraphDirectoryObjectFetcher *)directReportsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=memberOf) MSGraphDirectoryObjectCollectionFetcher *memberOf;

- (MSGraphDirectoryObjectFetcher *)memberOfById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=createdObjects) MSGraphDirectoryObjectCollectionFetcher *createdObjects;

- (MSGraphDirectoryObjectFetcher *)createdObjectsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=ownedObjects) MSGraphDirectoryObjectCollectionFetcher *ownedObjects;

- (MSGraphDirectoryObjectFetcher *)ownedObjectsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=messages) MSGraphMessageCollectionFetcher *messages;

- (MSGraphMessageFetcher *)messagesById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=calendars) MSGraphCalendarCollectionFetcher *calendars;

- (MSGraphCalendarFetcher *)calendarsById:(NSString*)identifier;


@property (strong, nonatomic, readonly, getter=calendar) MSGraphCalendarFetcher *calendar;
@property (strong, nonatomic, readonly, getter=calendarGroups) MSGraphCalendarGroupCollectionFetcher *calendarGroups;

- (MSGraphCalendarGroupFetcher *)calendarGroupsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=events) MSGraphEventCollectionFetcher *events;

- (MSGraphEventFetcher *)eventsById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=calendarView) MSGraphEventCollectionFetcher *calendarView;

- (MSGraphEventFetcher *)calendarViewById:(NSString*)identifier;


@property (strong, nonatomic, readonly, getter=userPhoto) MSGraphPhotoFetcher *userPhoto;
@property (strong, nonatomic, readonly, getter=userPhotos) MSGraphPhotoCollectionFetcher *userPhotos;

- (MSGraphPhotoFetcher *)userPhotosById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=trendingAround) MSGraphFileCollectionFetcher *trendingAround;

- (MSGraphFileFetcher *)trendingAroundById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=workingWith) MSGraphUserCollectionFetcher *workingWith;

- (MSGraphUserFetcher *)workingWithById:(NSString*)identifier;

@property (strong, nonatomic, readonly, getter=joinedGroups) MSGraphGroupCollectionFetcher *joinedGroups;

- (MSGraphGroupFetcher *)joinedGroupsById:(NSString*)identifier;


@property (strong, nonatomic, readonly, getter=drive) MSGraphDriveFetcher *drive;
@property (strong, nonatomic, readonly, getter=files) MSGraphItemCollectionFetcher *files;

- (MSGraphItemFetcher *)filesById:(NSString*)identifier;


@end

#endif