//
//  KeyPasswordView.h
//  TerminusUISDK
//
//  Created by tom on 11/18/16.
//  Copyright © 2016 LL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TerminusUISDK.h"

@protocol PasswordViewDelegate <NSObject>

-(void)didTouchupIndet:(NSString *)txt;

@end

@class ThemeButton;
@interface TextFieldWithUnderLine : UITextField

@property (nonatomic,strong)UIView *underLine;

@end

@interface KeyPasswordView : UIView <UITextFieldDelegate>
@property (nonatomic,weak)id <PasswordViewDelegate>delegate;
@property (nonatomic,strong) ThemeButton * sureBtn;
@property (nonatomic,strong) TextFieldWithUnderLine *pasword;
@end
