//
//  all.h
//  igetnonce
//
//  Created by tihmstar on 08.01.17.
//  Copyright © 2017 tihmstar. All rights reserved.
//

#ifndef all_h
#define all_h

#ifdef DEBUG // this is for developing with Xcode
#define IGETNONCE_VERSION_COUNT "undefined version"
#define IGETNONCE_VERSION_SHA "undefined commit"
#else
#include <config.h>
#endif

#endif /* all_h */
