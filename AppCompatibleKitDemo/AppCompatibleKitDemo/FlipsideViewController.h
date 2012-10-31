//
//  FlipsideViewController.h
//  AppCompatibleKitDemo
//
//  Created by Zhang zhihui on 12-10-31.
//  Copyright (c) 2012年 Zhang zhihui. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FlipsideViewController;

@protocol FlipsideViewControllerDelegate
- (void)flipsideViewControllerDidFinish:(FlipsideViewController *)controller;
@end

@interface FlipsideViewController : UIViewController

@property (assign, nonatomic) id <FlipsideViewControllerDelegate> delegate;

- (IBAction)done:(id)sender;

@end
