//
//  GreenContainerViewController.h
//  dismissContainerViewDemo
//
//  Created by James on 2015/2/26.
//  Copyright (c) 2015年 yu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GreenContainerViewController : UIViewController<UITableViewDataSource,UITableViewDelegate>

@property (weak, nonatomic) IBOutlet UITableView *tableVW;

@end
