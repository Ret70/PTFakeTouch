# PTFakeTouch
Simulate touch events for iOS ［User mode］

Just build it and add this framework to your project.
Then you can use it.

Addtions are from kif.

USE CASE
-------------
Click a point at screen

	NSInteger pointId = [PTFakeTouch fakeTouchId:[PTFakeTouch getAvailablePointId] AtPoint:CGPointMake(100,100) withTouchPhase:UITouchPhaseBegan];
	[PTFakeTouch fakeTouchId:pointId AtPoint:CGPointMake(100,100) withTouchPhase:UITouchPhaseEnded];

Swipe screen

	NSInteger pointId = [PTFakeTouch fakeTouchId:[PTFakeTouch getAvailablePointId] AtPoint:CGPointMake(100,100) withTouchPhase:UITouchPhaseBegan];
	[PTFakeTouch fakeTouchId:pointId AtPoint:CGPointMake(300,300) withTouchPhase:UITouchPhaseMoved];
	[PTFakeTouch fakeTouchId:pointId AtPoint:CGPointMake(300,300) withTouchPhase:UITouchPhaseEnded];
