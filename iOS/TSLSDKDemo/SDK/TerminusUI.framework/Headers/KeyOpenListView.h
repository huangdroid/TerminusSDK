//
//  KeyOpenListView.h
//  NTSLTerminus
//
//  Created by tom on 16/1/22.
//  Copyright © 2016年 tom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TerminusUISDK.h"

typedef void(^disMissBlock)(BOOL isFinish);

@protocol seletKeyModelDelegate <NSObject>

@optional
- (void)didSelectKeyModel:(TerminusKeyBean *)model;

@end

@interface KeyOpenListView : UIView


@property (nonatomic, weak  ) id<seletKeyModelDelegate> delegate;

- (void)showInView:(UIView *)aView backgroundImg:(UIImage *)image animated:(BOOL)animated;

@end

extern NSString *const kPublicKeyVersionKey;
extern const NSInteger PUBLIC_KEY_VERSION;
