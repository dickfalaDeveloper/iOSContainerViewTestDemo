//
//  ViewController.h
//  dismissContainerViewDemo
//
//  Created by James on 2015/2/26.
//  Copyright (c) 2015年 yu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ParentViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIView *containerView;


- (IBAction)showContainerAction:(id)sender;

@end

