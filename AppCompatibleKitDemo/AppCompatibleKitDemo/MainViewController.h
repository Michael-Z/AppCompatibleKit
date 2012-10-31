//
//  MainViewController.h
//  AppCompatibleKitDemo
//
//  Created by Zhang zhihui on 12-10-31.
//  Copyright (c) 2012年 Zhang zhihui. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
