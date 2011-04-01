//
//  TTURLPlistResponse.m
//  Aflicka
//
//  Created by Ugo Enyioha on 3/30/11.
//  Copyright 2011 Avient-Ivy. All rights reserved.
//

#import "TTURLPlistResponse.h"
#import "Three20/Three20.h"

#import "Three20Core/TTCorePreprocessorMacros.h"
#import "Three20Core/TTDebug.h"

@implementation TTURLPlistResponse

@synthesize plist = _plist;

- (void)dealloc {
    TT_RELEASE_SAFELY(_plist);
    [super dealloc];
}

- (NSError*)request:(TTURLRequest*)request processResponse:(NSHTTPURLResponse*)response data:(id)data
{
    // this response is designed for NSData Objects, so if we get anyting else it's probably a mistake
    TTDASSERT([data isKindOfClass:[NSData class]]);
    TTDASSERT(nil == _plist);
    
    NSPropertyListFormat format;
    
    NSError *err = nil, *serializeError = nil;
    
    if (data == nil) {
        err = [NSError errorWithDomain:@"DIOS-Error" 
                                  code:1 
                              userInfo:[NSDictionary dictionaryWithObject:@"I couldnt get a response, is the site down?" forKey:NSLocalizedDescriptionKey]];
    } else if ([data isKindOfClass:[NSData class]])    {
        _plist = [[NSPropertyListSerialization propertyListWithData:data options:NSPropertyListMutableContainersAndLeaves format:&format error:&serializeError] retain];
        
        if (serializeError) {
            err = [NSError errorWithDomain:@"DIOS-Error" 
                                             code:1 
                                         userInfo:[NSDictionary dictionaryWithObject:[serializeError localizedDescription] forKey:NSLocalizedDescriptionKey]];
        }
    }
    
    return err;
}

@end
