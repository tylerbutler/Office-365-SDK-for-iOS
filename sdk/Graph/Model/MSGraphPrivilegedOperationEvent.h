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


#ifndef MSGRAPHPRIVILEGEDOPERATIONEVENT_H
#define MSGRAPHPRIVILEGEDOPERATIONEVENT_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

#import "core/MSOrcBaseEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphPrivilegedOperationEvent
 *
 */
@interface MSGraphPrivilegedOperationEvent : MSOrcBaseEntity <MSOrcInteroperableWithDictionary>

/** Property _id
 *
 */
@property (nonatomic,  copy, setter=setId:, getter=_id) NSString * _id;

/** Property userId
 *
 */
@property (nonatomic,  copy, setter=setUserId:, getter=userId) NSString * userId;

/** Property userName
 *
 */
@property (nonatomic,  copy, setter=setUserName:, getter=userName) NSString * userName;

/** Property userMail
 *
 */
@property (nonatomic,  copy, setter=setUserMail:, getter=userMail) NSString * userMail;

/** Property roleId
 *
 */
@property (nonatomic,  copy, setter=setRoleId:, getter=roleId) NSString * roleId;

/** Property roleName
 *
 */
@property (nonatomic,  copy, setter=setRoleName:, getter=roleName) NSString * roleName;

/** Property expirationTime
 *
 */
@property (nonatomic,  copy, setter=setExpirationTime:, getter=expirationTime) NSDate * expirationTime;

/** Property creationTime
 *
 */
@property (nonatomic,  copy, setter=setCreationTime:, getter=creationTime) NSDate * creationTime;

/** Property requestorId
 *
 */
@property (nonatomic,  copy, setter=setRequestorId:, getter=requestorId) NSString * requestorId;

/** Property requestorName
 *
 */
@property (nonatomic,  copy, setter=setRequestorName:, getter=requestorName) NSString * requestorName;

/** Property tenantId
 *
 */
@property (nonatomic,  copy, setter=setTenantId:, getter=tenantId) NSString * tenantId;

/** Property requestType
 *
 */
@property (nonatomic,  copy, setter=setRequestType:, getter=requestType) NSString * requestType;

/** Property additionalInformation
 *
 */
@property (nonatomic,  copy, setter=setAdditionalInformation:, getter=additionalInformation) NSString * additionalInformation;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif