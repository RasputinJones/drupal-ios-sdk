//
//  TTURLPlistResponse.h
//  Aflicka
//
//  Created by Ugo Enyioha on 3/30/11.
//  Copyright 2011 Avient-Ivy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Three20Network/TTURLResponse.h"

@interface TTURLPlistResponse : NSObject <TTURLResponse>

@property (nonatomic, retain, readonly) id plist;

@end
