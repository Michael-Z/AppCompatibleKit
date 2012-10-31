//
//  UIViewController+AppCompatible.h
//  AppCompatibleKitDemo
//
//  Created by Zhang zhihui on 12-10-31.
//  Copyright (c) 2012年 Zhang zhihui. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIViewController (AppCompatible)

//设备翻转
#define AC_VC_ROTATION_DEVICE_ORIENTATION( bAuto, macroUIInterfaceOrientation )\
\
- (BOOL) shouldAutorotateToInterfaceOrientation: (UIInterfaceOrientation) orientation\
{ \
return ( macroUIInterfaceOrientation & orientation );\
}\
\
- (BOOL)shouldAutorotate NS_AVAILABLE_IOS(6_0){\
    return bAuto;\
}\
\
- (NSUInteger)supportedInterfaceOrientations NS_AVAILABLE_IOS(6_0){\
    return macroUIInterfaceOrientation;\
}

@end
