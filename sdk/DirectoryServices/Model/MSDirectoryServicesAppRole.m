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



#import "MSDirectoryServicesModels.h"


/** Implementation for MSDirectoryServicesAppRole
 *
 */
@implementation MSDirectoryServicesAppRole


@synthesize odataType = _odataType;

+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"allowedMemberTypes", @"allowedMemberTypes", @"description", @"_description", @"displayName", @"displayName", @"id", @"_id", @"isEnabled", @"isEnabled", @"value", @"value", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.DirectoryServices.AppRole";

        
		_allowedMemberTypes = [[NSMutableArray alloc] initWithCollectionType:@"NSMutableArray"];
    }

	return self;
}

/** Setter implementation for property allowedMemberTypes
 *
 */
- (void) setAllowedMemberTypes: (NSMutableArray *) value {
    _allowedMemberTypes = value;
    [self valueChanged:_allowedMemberTypes forProperty:@"allowedMemberTypes"];
}
       
/** Setter implementation for property _description
 *
 */
- (void) setDescription: (NSString *) value {
    __description = value;
    [self valueChanged:__description forProperty:@"description"];
}
       
/** Setter implementation for property displayName
 *
 */
- (void) setDisplayName: (NSString *) value {
    _displayName = value;
    [self valueChanged:_displayName forProperty:@"displayName"];
}
       
/** Setter implementation for property _id
 *
 */
- (void) setId: (NSString *) value {
    __id = value;
    [self valueChanged:__id forProperty:@"id"];
}
       
/** Setter implementation for property isEnabled
 *
 */
- (void) setIsEnabled: (bool) value {
    _isEnabled = value;
    [self valueChangedForBool:_isEnabled forProperty:@"isEnabled"];
}
       
/** Setter implementation for property value
 *
 */
- (void) setValue: (NSString *) value {
    _value = value;
    [self valueChanged:_value forProperty:@"value"];
}
       

@end