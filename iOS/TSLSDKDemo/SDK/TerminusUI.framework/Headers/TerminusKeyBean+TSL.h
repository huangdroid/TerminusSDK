//
//  TerminusKeyBean+TSL.h
//  TerminusUI
//
//  Created by Tom on 2017/6/13.
//  Copyright © 2017年 LL. All rights reserved.
//

#import <Terminus/TerminusKeyBean.h>

#import "KeyCardModel.h"

#import <objc/runtime.h>
#import <objc/message.h>


@interface TerminusKeyBean (TSL)


@property (nonatomic,weak) KeyCardModel * cardModelOverlook;


@property (nonatomic,assign) BOOL blueModelChangeOverlook;
@property (nonatomic,assign)NSTimeInterval groupStrongRISSTimeOverlook;
@property (nonatomic,copy) NSNumber * keyCardTyeOverlook;

@property (nonatomic,assign) BOOL isRefreshedOverlook;


@end
