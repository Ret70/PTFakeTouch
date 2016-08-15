//
//  FakeTouch.h
//  FakeTouch
//
//  Created by PugaTang on 16/4/7.
//  Copyright © 2016年 PugaTang. All rights reserved.
//

#import <UIKit/UIKit.h>


//! Project version number for HJGameController.
FOUNDATION_EXPORT double HJGameControllerVersionNumber;

//! Project version string for HJGameController.
FOUNDATION_EXPORT const unsigned char HJGameControllerVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <HJGameController/PublicHeader.h>
#import <PTFakeTouch/PTFakeMetaTouch.h>

#ifdef DEBUG
#define RLog(fmt, ...)
#define DLog(fmt, ...) NSLog((@"PThelper   " fmt), ##__VA_ARGS__);
#else
#define DLog(fmt, ...)
#define RLog(fmt, ...) NSLog((@"PThelper   " fmt), ##__VA_ARGS__);
#endif