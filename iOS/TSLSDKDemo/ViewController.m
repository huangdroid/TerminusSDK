//
//  ViewController.m
//  TSLSDKDemo
//
//  Created by Tom on 2017/6/26.
//  Copyright © 2017年 Tom. All rights reserved.
//

#import "ViewController.h"

#import <TerminusUI/TerminusSDKUI.h>


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];

    
    
    UIButton * btn = [[UIButton alloc]initWithFrame:CGRectMake(50, 100,( [UIScreen mainScreen].bounds.size.width - 100)/2, 40)];
    btn.backgroundColor = [UIColor redColor];
    [self.view addSubview:btn];
    [btn addTarget:self action:@selector(vcAction) forControlEvents:UIControlEventTouchUpInside];
    
    
}

- (void)vcAction{
    [TerminusSDKUI pushTerminusVCFromNav:self.navigationController];
}
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
