//
//  TSLKeyOpenViewController.h
//  TerminusUI
//
//  Created by Tom on 2017/6/12.
//  Copyright © 2017年 LL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Terminus/TerminusApi.h>
@interface TSLKeyOpenViewController : UIViewController

@property (nonatomic,strong)TerminusKeyBean * keybean;
- (void)setCurrentModel:(TerminusKeyBean *)bean;
- (void) openAnimation ;
@end
