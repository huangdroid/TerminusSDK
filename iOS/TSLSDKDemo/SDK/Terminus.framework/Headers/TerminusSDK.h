//
//  TerminusSDK.h
//  Terminus
//
//  Created by tom on 11/15/16.
//  Copyright © 2016 重庆市特斯联科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

#import "HttpSessionBaseManager.h"
#import "TerminusKeyBean.h"

@class KeyCardModel;








@protocol TerminusSDKDelegate <NSObject>


/**
 *  开门成功
 *
 *  @param keyBean 钥匙对象
 */
- (void)openDoorSuccess:(TerminusKeyBean *)keyBean;

/**
 *  开门失败
 *
 *  @param msg 失败说明
 */
- (void)openDoorErrorMsg:(NSString *)msg;
/**
 *  开门提示密码错误被修改
 *
 *  @param key 钥匙对象
 */
- (void)passwordError:(TerminusKeyBean *)key;



@optional
// 重新打开蓝牙
- (void)OpenBlueOn;
//蓝牙已经关闭
- (void)CloseBunOff;

/**
 *  进入钥匙正在开门状态
 *
 *  @param key 钥匙实体
 */
- (void)openKeyLoading:(TerminusKeyBean *)key;

//验证网络钥匙 是否有效 针对特殊 钥匙权限
/**
 *  Toast 展示 eg: 网络请求中
 *
 *  @param msg 提示信息
 */
- (void)showHudView:(NSString *)msg;
/**
 *  隐藏Toast 或网络请求Toast
 *
 *  @param msg 提示信息
 */
- (void)hidHUDView:(NSString *)msg;

@end


@protocol TerminusSDKDataSourceDelegate <NSObject>

@required
//返回当前开锁有效钥匙 1s 回调一次
- (void)terminsSDKSearchedKeys:(NSMutableArray *)keys;


@end





@interface TerminusSDK : NSObject


@property (nonatomic,readonly,copy) NSString * registerKey;

@property (nonatomic,weak)id<TerminusSDKDelegate> delegate;
@property (nonatomic,weak)id<TerminusSDKDataSourceDelegate> dataSourceDelegate;

+(TerminusSDK*)defaultTerminus;


+(void)enableDebugMode;


//获取当前appkey 是否有效
+(BOOL)getAPPKEYUseable;
/**
 *  注册第三方应用，第三方APP启动时调用，初始化SDK，如果处于已登录状态，同时会同步用户钥匙列表
 *  appkey : 特斯联提供的APPKEY
 *
 */
+ (void)registerApp:(NSString * )appKey;

/*
 * 第三方APP成功获取特斯联Token后调用，会同步用户钥匙列表
 * token: 特斯联服务器返回的Token
 */
+ (BOOL)login:(NSString *)token;

/**
 * 退出登录需要清理当前用户钥匙信息
 * token: 特斯联服务器返回的Token
 */
+ (void)logout;

//界面设置
+ (void)viewWillAppear:(UIViewController *)VC;

+ (void)viewWillDisappear:(UIViewController *)VC;



#pragma mark - 钥匙相关

//获取用户的钥匙列表
- (void)terminusGetUserKeySuccess:(TSLSuccessBlock)successBlock errorBlock:(TSLErrorBlock)errorBlock;

/**
 *  钥匙对象开门
 * model: 钥匙对象
 */
- (void)openDoor:(TerminusKeyBean *)model;

/**
 *  钥匙对象密码错误 修正密码后去开门
 * model: 钥匙对象
 * password: 新密码
 */
- (void)changePwd:(NSString *)password keyBean:(TerminusKeyBean *)key;


/**
 * 指定keybean是否正在开锁
 *
 * @param model
 * @return
 */
- (BOOL)isOpening:(TerminusKeyBean *)model;

/**
 * 取消开锁
 *
 * @param model keybean钥匙对象
 */
- (void)cancelOpenDoor:(TerminusKeyBean *)model;
/**
 * 获取所有钥匙数据
 *
 * @return 所有钥匙信息
 */
- (NSArray *)getAllKeys;
//获取当前钥匙的小区信息
- (NSArray *)getAllVillageInfor;
//获取当前钥匙的楼栋信息
- (NSArray *)getAllVillageBuildingInfor;

/**
 * 开始扫描。
 */
- (void)startScan;
/**
 * 停止扫描
 */
- (void)stopScan;



#pragma mark -

#pragma mark - 用户相关

/**
 *  获取当前使用的token。
 *
 *  @return 特斯联token，若未登录则为空。
 */
+ (NSString *)fetchUserToken;
//获取当前登陆使用的用户唯一ID
+ (NSString *)fetchUserID;
/*!
 *   获取特斯联SDK 版本
 *
 *  @return 返回SDK版本
 */

+ (NSString *)getAPIVersion;

@end

//成功获取钥匙数据 obj 为钥匙实体数组
extern NSString * const TerminusDidGetKeyNotification;

extern NSString * const TerminusDidLoginNotification;

//调用退出登录
extern NSString * const TerminusDidLogoutNotification;


extern NSString * const TerminusUserDefaultsKey;


extern NSString * const DDNotificationOPENKEY;


extern NSString * const DDNotificationOpenDoorFailed;
extern NSString * const DDNotificationOpenDoorSuccess;
