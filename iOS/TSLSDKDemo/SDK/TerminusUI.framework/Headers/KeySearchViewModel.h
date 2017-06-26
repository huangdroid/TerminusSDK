//
//  KeySearchViewModel.h
//  TerminusUI
//
//  Created by Tom on 2017/6/13.
//  Copyright © 2017年 LL. All rights reserved.
//

#import <Foundation/Foundation.h>


typedef void(^TSLRefreshBlock)(NSMutableArray * objArray);


@interface KeySearchViewModel : NSObject
@property (nonatomic,strong)NSMutableArray * dataSource;

@property (nonatomic,strong)TSLRefreshBlock commpletBlock;


- (void)divideIntoGroupsFromKeys:(NSMutableArray *)keys;

@end
