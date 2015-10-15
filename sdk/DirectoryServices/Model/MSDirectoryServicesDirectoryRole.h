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


#ifndef MSDIRECTORYSERVICESDIRECTORYROLE_H
#define MSDIRECTORYSERVICESDIRECTORYROLE_H

#import <Foundation/Foundation.h>

#import "MSDirectoryServicesDirectoryObject.h"

/** Interface MSDirectoryServicesDirectoryRole
 *
 */
@interface MSDirectoryServicesDirectoryRole : MSDirectoryServicesDirectoryObject

/** Property _description
 *
 */
@property (nonatomic,  copy, setter=setDescription:, getter=_description) NSString * _description;

/** Property displayName
 *
 */
@property (nonatomic,  copy, setter=setDisplayName:, getter=displayName) NSString * displayName;

/** Property isSystem
 *
 */
@property (nonatomic,  setter=setIsSystem:, getter=isSystem) bool isSystem;

/** Property roleDisabled
 *
 */
@property (nonatomic,  setter=setRoleDisabled:, getter=roleDisabled) bool roleDisabled;

/** Property roleTemplateId
 *
 */
@property (nonatomic,  copy, setter=setRoleTemplateId:, getter=roleTemplateId) NSString * roleTemplateId;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif