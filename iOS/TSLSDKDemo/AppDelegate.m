//
//  AppDelegate.m
//  TSLSDKDemo
//
//  Created by Tom on 2017/6/26.
//  Copyright © 2017年 Tom. All rights reserved.
//

#import "AppDelegate.h"
#import <Terminus/TerminusSDK.h>
#import <TerminusUI/KeyCardModel.h>
#import <TerminusUI/TerminusKeyBean+TSL.h>


@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {

    [TerminusSDK registerApp:@"638147c9e83612e0d6525b2ec10891c8"];

    return YES;
}


- (void)applicationWillResignActive:(UIApplication *)application {
}


- (void)applicationDidEnterBackground:(UIApplication *)application {
    
    
}


- (void)applicationWillEnterForeground:(UIApplication *)application {
    // Called as part of the transition from the background to the active state; here you can undo many of the changes made on entering the background.
}


- (void)applicationDidBecomeActive:(UIApplication *)application {
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}


- (void)applicationWillTerminate:(UIApplication *)application {
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}


@end
