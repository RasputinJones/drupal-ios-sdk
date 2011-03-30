//
// DIOSConfig.h
//
// ***** BEGIN LICENSE BLOCK *****
// Version: MPL 1.1/GPL 2.0
//
// The contents of this file are subject to the Mozilla Public License Version
// 1.1 (the "License"); you may not use this file except in compliance with
// the License. You may obtain a copy of the License at
// http://www.mozilla.org/MPL/
//
// Software distributed under the License is distributed on an "AS IS" basis,
// WITHOUT WARRANTY OF ANY KIND, either express or implied. See the License
// for the specific language governing rights and limitations under the
// License.
//
// The Original Code is Kyle Browning, released June 27, 2010.
//
// The Initial Developer of the Original Code is
// Kyle Browning
// Portions created by the Initial Developer are Copyright (C) 2010
// the Initial Developer. All Rights Reserved.
//
// Contributor(s):
//
// Alternatively, the contents of this file may be used under the terms of
// the GNU General Public License Version 2 or later (the "GPL"), in which
// case the provisions of the GPL are applicable instead of those above. If
// you wish to allow use of your version of this file only under the terms of
// the GPL and not to allow others to use your version of this file under the
// MPL, indicate your decision by deleting the provisions above and replacing
// them with the notice and other provisions required by the GPL. If you do
// not delete the provisions above, a recipient may use your version of this
// file under either the MPL or the GPL.
//
// ***** END LICENSE BLOCK *****

//#define STAGE

#ifdef __APPLE__
#include "TargetConditionals.h"
#endif

#define DEV

#ifdef STAGE

#define DRUPAL_API_KEY  @"9fae43276b95f36156e143e6ddba2282"
#define DRUPAL_SERVICES_URL  @"http://aflickatest.kicks-ass.net/services/plist"
#define DRUPAL_URL  @"http://aflickatest.kicks-ass.net/"
#define DRUPAL_DOMAIN @"aflickatest.kicks-ass.net" 

#endif

#ifdef DEV

#define DRUPAL_API_KEY  @"9fae43276b95f36156e143e6ddba2282"
#define DRUPAL_SERVICES_URL  @"http://localhost:10088/drupal/services/plist"

#if TARGET_IPHONE_SIMULATOR
    #define DRUPAL_URL  @"http://localhost:10088/drupal/"
#elif TARGET_OS_IPHONE
    #define DRUPAL_URL  @"http://10.0.1.22:10088/drupal/"
#endif

#define DRUPAL_DOMAIN @"localhost" 

#endif

//These are just constants I found myself defining and most likely do not reflect constants you may need.
#define DRUPAL_CELL_DEFAULT_IMAGE @"http://demo.kylebrowning.com/sites/default/files/imagecache/iphone/4986607783_45b49e2493_o.jpg"
#define DRUPAL_IMAGECACHE_URL @"sites/default/files/imagecache/iphone/"
#define DRUPAL_CATEGORY_VID @"1"
#define DRUPAL_VIEWS_IMAGE_FIELD @"files_node_data_field_image_filepath"
#define DRUPAL_NODE_IMAGE_FIELD @"field_image"