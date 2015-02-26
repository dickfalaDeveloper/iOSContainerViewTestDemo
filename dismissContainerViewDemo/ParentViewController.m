//
//  ViewController.m
//  dismissContainerViewDemo
//
//  Created by James on 2015/2/26.
//  Copyright (c) 2015年 yu. All rights reserved.
//

#import "ParentViewController.h"

@interface ParentViewController ()

@end

@implementation ParentViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    _containerView.hidden = YES;
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
}

- (IBAction)showContainerAction:(id)sender {
    _containerView.hidden = NO;
}
@end
