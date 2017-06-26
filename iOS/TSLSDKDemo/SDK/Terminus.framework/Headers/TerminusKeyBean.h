//
//  TerminusKeyBean.h
//  TerminusDemo
//
//  Created by huangdroid on 15-1-29.
//  Copyright (c) 2015年 重庆市特斯联科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ColumnPropertyMappingDelegate.h"
#import "TerminusConstants.h"

@interface TerminusKeyBean : NSObject <ColumnPropertyMappingDelegate>
//蓝牙唯一标示   32位
@property (copy, nonatomic  ) NSString    * keyUid;
//锁的别名
@property (copy, nonatomic  ) NSString   * keyName;
//锁授权id
@property (nonatomic,copy   ) NSString   * empowerId;
//锁id
@property (nonatomic,copy   ) NSString   * chipId;
//标示该用户配对了，是否是管理员类型
@property (nonatomic ,copy  ) NSString   * isAdmin;
//该用户蓝牙模块地址
@property (nonatomic,copy   ) NSString   * macAddress;
//用户在底层地址
@property (nonatomic,copy   ) NSString   * keyPwd;
//用户在底层地址
@property (nonatomic,assign ) DevicePowerLevels keyBatV;
//用户当前授权了多少次
@property (nonatomic,copy   ) NSString   * authorizationTimes;
//锁底层被授权了多少次 10 － （authorizationTimes - lockAuthorizationTimes）＝ 剩余授权次数
@property (nonatomic,copy   ) NSString   * lockAuthorizationTimes;
// 锁类别 默认为门锁类型
@property (nonatomic,assign ) BlueDeviceType keyCate;
//开门方式
@property (nonatomic,copy   ) NSString   * OpenTypeMode;
//index
@property (nonatomic,copy   ) NSString   * IndexString;
// 门锁类型编号
@property (nonatomic,copy   ) NSString   * identifier;
#pragma mark - 新增属性
//钥匙类型 1:本地钥匙 2:远程钥匙 3: 本地分享钥匙
@property (nonatomic,assign ) KeyAuthType keyType;
//分享类型
@property (nonatomic,assign ) NSInteger   AuthType;
// 分组ID
@property (nonatomic,copy   ) NSString  * groupId;
//分组名称
@property (nonatomic,copy   ) NSString  * groupName;
//临时钥匙  开始时间
@property (nonatomic,copy   ) NSString  * StartTime;
//临时钥匙  结束时间
@property (nonatomic,copy   ) NSString  * EndTime;
//接收人
@property (nonatomic,copy   ) NSString  * UserTo;
//国家代码
@property (nonatomic,copy   ) NSString  * CountryCode;
//授权人电话号码
@property (nonatomic,copy   ) NSString  * UserFromMobile;
//授权人姓名
@property (nonatomic,copy   ) NSString  * UserNameFrom;
//远程钥匙密文
@property (nonatomic,copy   ) NSString  * Cipher;
//备注
@property (nonatomic,copy   ) NSString  *  Memo;
//备注
@property (nonatomic,copy   ) NSString  *  Alias;
//是否可分享
@property (nonatomic,assign   ) NSInteger  IsShareable;
//是否在钥匙列表或开锁中显示（是否启用）
@property (nonatomic,assign ) NSInteger IsShow;
//排序
@property (nonatomic,assign ) NSInteger sort;

//创建时间
@property (nonatomic,copy) NSString * CreateTime;
@property (nonatomic,assign) NSInteger State;
@property (nonatomic,copy)NSString * UserNameTo;
// 小区Id
@property (nonatomic,copy   ) NSString * villageId;
@property (nonatomic,copy   ) NSString * villageName;
// 楼栋Id
@property (nonatomic,copy   ) NSString * buildingId;
@property (nonatomic,copy   ) NSString * buildingName;

@property (nonatomic,assign ) NSInteger flag;




#pragma mark - 搜索字段使用
@property (nonatomic,assign ) long int refreshTimeOverlook;
@property (nonatomic,assign ) int rissOverlook;


//设置考勤锁
- (void)setNeedCheckin:(BOOL)needCheckin;
// 是否是考勤锁
- (BOOL)isNeedCheckin;
// 是否是分组钥匙
- (BOOL)isDisplayGroup;
//是否是永久钥匙
- (BOOL)isPermanentKey;
//获取ID
- (NSString *)getLockCode;

- (BOOL)isLocalPermanentKey;
//拷贝钥匙数据
- (void)coupyKeyModelData:(TerminusKeyBean *)keyModel;


@end





