//
//  KeyGroupTableViewCell.h
//  TerminusUI
//
//  Created by Tom on 2017/6/16.
//  Copyright © 2017年 LL. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KeyCardModel.h"
typedef void(^TSLTouchBlock)(id obj);

@interface KeyGroupTableViewCell : UITableViewCell

@property (nonatomic,copy)TSLTouchBlock onTouchBlock;



- (void)setCellViewData:(KeyBlueModel *)blue;
@end




@interface KeyHeaderFootView : UITableViewHeaderFooterView

- (void)setGroupHeaderViewType:(NSUInteger) type villageInfor:(NSString *)infor;

@end
