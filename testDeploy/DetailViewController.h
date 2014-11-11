//
//  DetailViewController.h
//  testDeploy
//
//  Created by Dariy Dzyndra on 11/11/14.
//  Copyright (c) 2014 SoftJourn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

