//
//  DetailViewController.h
//  TestKS
//
//  Created by Cape on 16/8/24.
//  Copyright © 2016年 Cape. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

