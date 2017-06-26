//
//  TSLCommon.h
//  TerminusUI
//
//  Created by tom on 16/11/21.
//  Copyright © 2016年 LL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define SCREENWIDTH_TSL [UIScreen mainScreen].bounds.size.width
#define SCREENHEIGHT_TSL [UIScreen mainScreen].bounds.size.height


#define kRGB(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

static NSString *getSearchImageBundlePath(NSString *filename) {
    
    NSBundle *libBundle = [NSBundle bundleWithPath:[[[NSBundle mainBundle] resourcePath] stringByAppendingPathComponent:@"TerminusUISource.bundle"]];
    
    if (libBundle && filename) {
        
        NSString *path = [[libBundle resourcePath] stringByAppendingPathComponent:filename];
        
        path = [path stringByAppendingString:@".png"];
        
        return path;
        
    }
    
    return nil;
    
}


@interface TSLCommon : NSObject


+ (CGFloat) getViewHeigth;
+ (BOOL)isIphone4S;

+ (void)stopInfiniteRotation:(UIImage *)changeIamge view:(UIView *)view;
+ (void)startInfiniteRotation:(UIImage *)changeIamge view:(UIView *)view;
@end
