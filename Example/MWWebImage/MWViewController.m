//
//  MWViewController.m
//  MWWebImage
//
//  Created by MahmoudMMB on 03/09/2021.
//  Copyright (c) 2021 MahmoudMMB. All rights reserved.
//

#import "MWViewController.h"
#import <MWWebImage/MWWebImage.h>

@interface MWViewController ()

@end

@implementation MWViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    [self.imgPhoto MW_setImageWithURL:[NSURL URLWithString: @"https://www.nature.com/immersive/d41586-021-00095-y/assets/efKDUpxlH1/2021-01-xx_jan-iom_tree-of-life_sm-1066x600.jpeg"]];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
