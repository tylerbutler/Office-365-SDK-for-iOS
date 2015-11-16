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


#ifndef MSGRAPHSERVICEOUTLOOKITEM_H
#define MSGRAPHSERVICEOUTLOOKITEM_H

#import <Foundation/Foundation.h>
#import "core/MSOrcChangesTrackingArray.h"

#import "MSGraphServiceEntity.h"
#import "api/MSOrcInteroperableWithDictionary.h"

/** Interface MSGraphServiceOutlookItem
 *
 */
@interface MSGraphServiceOutlookItem : MSGraphServiceEntity <MSOrcInteroperableWithDictionary>

/** Property createdDateTime
 *
 */
@property (nonatomic,  copy, setter=setCreatedDateTime:, getter=createdDateTime) NSDate * createdDateTime;

/** Property lastModifiedDateTime
 *
 */
@property (nonatomic,  copy, setter=setLastModifiedDateTime:, getter=lastModifiedDateTime) NSDate * lastModifiedDateTime;

/** Property changeKey
 *
 */
@property (nonatomic,  copy, setter=setChangeKey:, getter=changeKey) NSString * changeKey;

/** Property categories
 *
 */
@property (nonatomic,  copy, setter=setCategories:, getter=categories) NSMutableArray * categories;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings;


@end

#endif