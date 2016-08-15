//
//  IOHIDEvent+KIF.h
//  testAnything
//
//  Created by 唐炫 on 16/4/1.
//  Copyright © 2016年 唐炫. All rights reserved.
//


typedef struct __IOHIDEvent * IOHIDEventRef;
IOHIDEventRef kif_IOHIDEventWithTouches(NSArray *touches) CF_RETURNS_RETAINED;