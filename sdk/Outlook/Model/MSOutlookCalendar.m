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



#import "MSOutlookModels.h"



/** Implementation for MSOutlookCalendar
 *
 */
@implementation MSOutlookCalendar


@synthesize odataType = _odataType;


+ (NSDictionary *) $$$_$$$propertiesNamesMappings
{
    static NSDictionary *_$$$_$$$propertiesNamesMappings=nil; 
    
    if(_$$$_$$$propertiesNamesMappings==nil){
    _$$$_$$$propertiesNamesMappings=[[NSDictionary alloc] initWithObjectsAndKeys:  @"Name", @"name", @"ChangeKey", @"changeKey", @"Color", @"color", @"CalendarView", @"calendarView", @"Events", @"events", @"Id", @"_id", nil];
    
    }
    
    return _$$$_$$$propertiesNamesMappings;
}

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.Calendar";
        
        
		_calendarView = [[NSMutableArray alloc] initWithCollectionType:@"NSMutableArray"];
		_events = [[NSMutableArray alloc] initWithCollectionType:@"NSMutableArray"];
    }

	return self;
}

/** Setter implementation for property name
 *
 */
- (void) setName: (NSString *) value {
    _name = value;
    [self valueChanged:_name forProperty:@"Name"];
}
       
/** Setter implementation for property changeKey
 *
 */
- (void) setChangeKey: (NSString *) value {
    _changeKey = value;
    [self valueChanged:_changeKey forProperty:@"ChangeKey"];
}
       
/** Setter implementation for property color
 *
 */
- (void) setColor: (MSOutlookCalendarColor) value {
    _color = value;
    [self valueChangedForInt:_color forProperty:@"Color"];
}
       

- (void)setColorString:(NSString *)value {
    
    static NSDictionary *stringMappings=nil;
    
    if(stringMappings==nil)
    {
        stringMappings=[[NSDictionary alloc] initWithObjectsAndKeys:
         [NSNumber numberWithInt:MSOutlookCalendarColorLightBlue], @"LightBlue", [NSNumber numberWithInt:MSOutlookCalendarColorLightGreen], @"LightGreen", [NSNumber numberWithInt:MSOutlookCalendarColorLightOrange], @"LightOrange", [NSNumber numberWithInt:MSOutlookCalendarColorLightGray], @"LightGray", [NSNumber numberWithInt:MSOutlookCalendarColorLightYellow], @"LightYellow", [NSNumber numberWithInt:MSOutlookCalendarColorLightTeal], @"LightTeal", [NSNumber numberWithInt:MSOutlookCalendarColorLightPink], @"LightPink", [NSNumber numberWithInt:MSOutlookCalendarColorLightBrown], @"LightBrown", [NSNumber numberWithInt:MSOutlookCalendarColorLightRed], @"LightRed", [NSNumber numberWithInt:MSOutlookCalendarColorMaxColor], @"MaxColor", [NSNumber numberWithInt:MSOutlookCalendarColorAuto], @"Auto",
            nil        
        ];
    }
    
    self.color = [stringMappings[value] intValue]; 
}

/** Setter implementation for property calendarView
 *
 */
- (void) setCalendarView: (NSMutableArray *) value {
    _calendarView = value;
    [self valueChanged:_calendarView forProperty:@"CalendarView"];
}
       
/** Setter implementation for property events
 *
 */
- (void) setEvents: (NSMutableArray *) value {
    _events = value;
    [self valueChanged:_events forProperty:@"Events"];
}
       

@end