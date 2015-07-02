/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

@class NSData;

#import <Foundation/Foundation.h>
#import "MSGraphProtocols.h"
#import "MSOrcBaseEntity.h"

/**
* The header for type KeyCredential.
*/

@interface MSGraphKeyCredential : MSOrcBaseEntity
@property (retain, nonatomic, readwrite, getter=customKeyIdentifier, setter=setCustomKeyIdentifier:) NSData *customKeyIdentifier;
@property (retain, nonatomic, readwrite, getter=endDate, setter=setEndDate:) NSDate *endDate;
@property (retain, nonatomic, readwrite, getter=keyId, setter=setKeyId:) NSString *keyId;
@property (retain, nonatomic, readwrite, getter=startDate, setter=setStartDate:) NSDate *startDate;
@property (retain, nonatomic, readwrite, getter=type, setter=setType:) NSString *type;
@property (retain, nonatomic, readwrite, getter=usage, setter=setUsage:) NSString *usage;
@property (retain, nonatomic, readwrite, getter=value, setter=setValue:) NSData *value;

@end