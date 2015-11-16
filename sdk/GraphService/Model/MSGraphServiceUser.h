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


#ifndef MSGRAPHSERVICEUSER_H
#define MSGRAPHSERVICEUSER_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

@class MSGraphServiceAssignedLicense;
@class MSGraphServiceAssignedPlan;
@class MSGraphServicePasswordProfile;
@class MSGraphServiceProvisionedPlan;
@class MSGraphServiceDirectoryObject;
@class MSGraphServiceMessage;
@class MSGraphServiceGroup;
@class MSGraphServiceMailFolder;
@class MSGraphServiceCalendar;
@class MSGraphServiceCalendarGroup;
@class MSGraphServiceEvent;
@class MSGraphServiceContact;
@class MSGraphServiceContactFolder;
@class MSGraphServiceProfilePhoto;
@class MSGraphServiceDrive;
#import "MSGraphServiceDirectoryObject.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphServiceUser
 *
 */
@interface MSGraphServiceUser : MSGraphServiceDirectoryObject <MSOrcInteroperableWithDictionary>

/** Property accountEnabled
 *
 */
@property (nonatomic,  setter=setAccountEnabled:, getter=accountEnabled) bool accountEnabled;

/** Property assignedLicenses
 *
 */
@property (nonatomic,  copy, setter=setAssignedLicenses:, getter=assignedLicenses) NSMutableArray * assignedLicenses;

/** Property assignedPlans
 *
 */
@property (nonatomic,  copy, setter=setAssignedPlans:, getter=assignedPlans) NSMutableArray * assignedPlans;

/** Property businessPhones
 *
 */
@property (nonatomic,  copy, setter=setBusinessPhones:, getter=businessPhones) NSMutableArray * businessPhones;

/** Property city
 *
 */
@property (nonatomic,  copy, setter=setCity:, getter=city) NSString * city;

/** Property companyName
 *
 */
@property (nonatomic,  copy, setter=setCompanyName:, getter=companyName) NSString * companyName;

/** Property country
 *
 */
@property (nonatomic,  copy, setter=setCountry:, getter=country) NSString * country;

/** Property department
 *
 */
@property (nonatomic,  copy, setter=setDepartment:, getter=department) NSString * department;

/** Property displayName
 *
 */
@property (nonatomic,  copy, setter=setDisplayName:, getter=displayName) NSString * displayName;

/** Property givenName
 *
 */
@property (nonatomic,  copy, setter=setGivenName:, getter=givenName) NSString * givenName;

/** Property jobTitle
 *
 */
@property (nonatomic,  copy, setter=setJobTitle:, getter=jobTitle) NSString * jobTitle;

/** Property mail
 *
 */
@property (nonatomic,  copy, setter=setMail:, getter=mail) NSString * mail;

/** Property mailNickname
 *
 */
@property (nonatomic,  copy, setter=setMailNickname:, getter=mailNickname) NSString * mailNickname;

/** Property mobilePhone
 *
 */
@property (nonatomic,  copy, setter=setMobilePhone:, getter=mobilePhone) NSString * mobilePhone;

/** Property onPremisesImmutableId
 *
 */
@property (nonatomic,  copy, setter=setOnPremisesImmutableId:, getter=onPremisesImmutableId) NSString * onPremisesImmutableId;

/** Property onPremisesLastSyncDateTime
 *
 */
@property (nonatomic,  copy, setter=setOnPremisesLastSyncDateTime:, getter=onPremisesLastSyncDateTime) NSDate * onPremisesLastSyncDateTime;

/** Property onPremisesSecurityIdentifier
 *
 */
@property (nonatomic,  copy, setter=setOnPremisesSecurityIdentifier:, getter=onPremisesSecurityIdentifier) NSString * onPremisesSecurityIdentifier;

/** Property onPremisesSyncEnabled
 *
 */
@property (nonatomic,  setter=setOnPremisesSyncEnabled:, getter=onPremisesSyncEnabled) bool onPremisesSyncEnabled;

/** Property passwordPolicies
 *
 */
@property (nonatomic,  copy, setter=setPasswordPolicies:, getter=passwordPolicies) NSString * passwordPolicies;

/** Property passwordProfile
 *
 */
@property (nonatomic,  copy, setter=setPasswordProfile:, getter=passwordProfile) MSGraphServicePasswordProfile * passwordProfile;

/** Property officeLocation
 *
 */
@property (nonatomic,  copy, setter=setOfficeLocation:, getter=officeLocation) NSString * officeLocation;

/** Property postalCode
 *
 */
@property (nonatomic,  copy, setter=setPostalCode:, getter=postalCode) NSString * postalCode;

/** Property preferredLanguage
 *
 */
@property (nonatomic,  copy, setter=setPreferredLanguage:, getter=preferredLanguage) NSString * preferredLanguage;

/** Property provisionedPlans
 *
 */
@property (nonatomic,  copy, setter=setProvisionedPlans:, getter=provisionedPlans) NSMutableArray * provisionedPlans;

/** Property proxyAddresses
 *
 */
@property (nonatomic,  copy, setter=setProxyAddresses:, getter=proxyAddresses) NSMutableArray * proxyAddresses;

/** Property state
 *
 */
@property (nonatomic,  copy, setter=setState:, getter=state) NSString * state;

/** Property streetAddress
 *
 */
@property (nonatomic,  copy, setter=setStreetAddress:, getter=streetAddress) NSString * streetAddress;

/** Property surname
 *
 */
@property (nonatomic,  copy, setter=setSurname:, getter=surname) NSString * surname;

/** Property usageLocation
 *
 */
@property (nonatomic,  copy, setter=setUsageLocation:, getter=usageLocation) NSString * usageLocation;

/** Property userPrincipalName
 *
 */
@property (nonatomic,  copy, setter=setUserPrincipalName:, getter=userPrincipalName) NSString * userPrincipalName;

/** Property userType
 *
 */
@property (nonatomic,  copy, setter=setUserType:, getter=userType) NSString * userType;

/** Property aboutMe
 *
 */
@property (nonatomic,  copy, setter=setAboutMe:, getter=aboutMe) NSString * aboutMe;

/** Property birthday
 *
 */
@property (nonatomic,  copy, setter=setBirthday:, getter=birthday) NSDate * birthday;

/** Property hireDate
 *
 */
@property (nonatomic,  copy, setter=setHireDate:, getter=hireDate) NSDate * hireDate;

/** Property interests
 *
 */
@property (nonatomic,  copy, setter=setInterests:, getter=interests) NSMutableArray * interests;

/** Property mySite
 *
 */
@property (nonatomic,  copy, setter=setMySite:, getter=mySite) NSString * mySite;

/** Property pastProjects
 *
 */
@property (nonatomic,  copy, setter=setPastProjects:, getter=pastProjects) NSMutableArray * pastProjects;

/** Property preferredName
 *
 */
@property (nonatomic,  copy, setter=setPreferredName:, getter=preferredName) NSString * preferredName;

/** Property responsibilities
 *
 */
@property (nonatomic,  copy, setter=setResponsibilities:, getter=responsibilities) NSMutableArray * responsibilities;

/** Property schools
 *
 */
@property (nonatomic,  copy, setter=setSchools:, getter=schools) NSMutableArray * schools;

/** Property skills
 *
 */
@property (nonatomic,  copy, setter=setSkills:, getter=skills) NSMutableArray * skills;

/** Property ownedDevices
 *
 */
@property (nonatomic,  copy, setter=setOwnedDevices:, getter=ownedDevices) NSMutableArray * ownedDevices;

/** Property registeredDevices
 *
 */
@property (nonatomic,  copy, setter=setRegisteredDevices:, getter=registeredDevices) NSMutableArray * registeredDevices;

/** Property manager
 *
 */
@property (nonatomic,  copy, setter=setManager:, getter=manager) MSGraphServiceDirectoryObject * manager;

/** Property directReports
 *
 */
@property (nonatomic,  copy, setter=setDirectReports:, getter=directReports) NSMutableArray * directReports;

/** Property memberOf
 *
 */
@property (nonatomic,  copy, setter=setMemberOf:, getter=memberOf) NSMutableArray * memberOf;

/** Property createdObjects
 *
 */
@property (nonatomic,  copy, setter=setCreatedObjects:, getter=createdObjects) NSMutableArray * createdObjects;

/** Property ownedObjects
 *
 */
@property (nonatomic,  copy, setter=setOwnedObjects:, getter=ownedObjects) NSMutableArray * ownedObjects;

/** Property messages
 *
 */
@property (nonatomic,  copy, setter=setMessages:, getter=messages) NSMutableArray * messages;

/** Property joinedGroups
 *
 */
@property (nonatomic,  copy, setter=setJoinedGroups:, getter=joinedGroups) NSMutableArray * joinedGroups;

/** Property mailFolders
 *
 */
@property (nonatomic,  copy, setter=setMailFolders:, getter=mailFolders) NSMutableArray * mailFolders;

/** Property calendar
 *
 */
@property (nonatomic,  copy, setter=setCalendar:, getter=calendar) MSGraphServiceCalendar * calendar;

/** Property calendars
 *
 */
@property (nonatomic,  copy, setter=setCalendars:, getter=calendars) NSMutableArray * calendars;

/** Property calendarGroups
 *
 */
@property (nonatomic,  copy, setter=setCalendarGroups:, getter=calendarGroups) NSMutableArray * calendarGroups;

/** Property calendarView
 *
 */
@property (nonatomic,  copy, setter=setCalendarView:, getter=calendarView) NSMutableArray * calendarView;

/** Property events
 *
 */
@property (nonatomic,  copy, setter=setEvents:, getter=events) NSMutableArray * events;

/** Property contacts
 *
 */
@property (nonatomic,  copy, setter=setContacts:, getter=contacts) NSMutableArray * contacts;

/** Property contactFolders
 *
 */
@property (nonatomic,  copy, setter=setContactFolders:, getter=contactFolders) NSMutableArray * contactFolders;

/** Property photo
 *
 */
@property (nonatomic,  copy, setter=setPhoto:, getter=photo) MSGraphServiceProfilePhoto * photo;

/** Property drive
 *
 */
@property (nonatomic,  copy, setter=setDrive:, getter=drive) MSGraphServiceDrive * drive;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif