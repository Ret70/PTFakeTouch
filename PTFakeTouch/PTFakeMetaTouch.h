//
//  HJFakeMetaTouch.h
//  HJFakeTouch
//
//  Created by 唐炫 on 16/4/20.
//  Copyright © 2016年 唐炫. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface HJFakeMetaTouch : NSObject
/**
 *  构造一个触屏基础操作
 *
 *  @param pointId 触屏操作的序列号
 *  @param point   操作的目的位置
 *  @param phase   操作的类别
 *
 *  @return 返回操作的序列号
 */
+ (NSInteger)fakeTouchId:(NSInteger)pointId AtPoint:(CGPoint)point withTouchPhase:(UITouchPhase)phase;
/**
 *  获取一个没有使用过的触屏序列号
 *
 *  @return 返回序列号
 */
+ (NSInteger)getAvailablePointId;

@end
