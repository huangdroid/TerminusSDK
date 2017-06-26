//
//  KeyCardModel.h
//  Terminus
//
//  Created by Tom on 2017/6/6.
//  Copyright © 2017年 重庆市特斯联科技有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Terminus/TerminusApi.h>
typedef enum : NSUInteger {
    DoorBuilding,
    DoorTK1,
    DoorBreak,
    DoorVisual,
    DoorHomeKey,
    DoorDefaut,
    DoorVillage,
    DoorTK2,
    DoorLandKey,
    DoorHotel,
    DoorCompany,
} KeyShowViewType;


@interface KeyCommunityInforModel : NSObject


@property (nonatomic,copy) NSString * villageId;
@property (nonatomic,copy) NSString * villageName;
@property (nonatomic,copy) NSString * buildingId;
@property (nonatomic,copy) NSString * buildingName;
@property (nonatomic,assign) NSInteger type;
@property (nonatomic,copy) NSString * Address;
@property (nonatomic,copy) NSString * showContent;
@end

@class KeyCardModel;

@interface KeyBlueModel : NSObject
@property (nonatomic,strong)NSMutableArray * keyModels;

@property (nonatomic,weak) KeyCardModel * cardModel;

@property (nonatomic,assign) BOOL isLocal;

@property (nonatomic,assign) BOOL isRefreshed;


@property (nonatomic,assign) BOOL isGroup;

@property (nonatomic,copy) NSString * macAdress;
@property (nonatomic,copy) NSString * KeyName;
@property (nonatomic,copy) NSString * gid;
@property (nonatomic,copy) NSString * gidName;
@property (nonatomic,copy) NSNumber * RSSI;
@property (nonatomic,copy) NSString * villageId;
@property (nonatomic,copy) NSString * villageName;
@property (nonatomic,copy) NSString * buildingId;
@property (nonatomic,copy) NSString * buildingName;
@property (nonatomic,assign)BlueDeviceType  keyCate;
@property (nonatomic,assign) NSTimeInterval refreshTime;
@property (nonatomic,copy) NSString * nomalKeyUid;
@property (nonatomic,assign) BOOL blueModelChange;
@property (nonatomic,assign)NSTimeInterval groupStrongRISSTime;

@property (nonatomic,copy) NSNumber * keyCardTye;



- (BOOL)isShowMoreCard;
@end


@interface KeyCardModel : NSObject
@property (nonatomic,strong)NSMutableArray * blueModels;
@property (nonatomic,copy)NSNumber * cardType;

@property (nonatomic,strong)NSString * villageID;
@property (nonatomic,strong)NSString * villageName;
@property (nonatomic,copy)NSNumber * rssi;
@property (nonatomic,copy)NSString * macAdrss;
@property (nonatomic,assign)BOOL isGroup;
//@property (nonatomic,assign)BOOL moreInfor;


- (int)getKeyMinRssi;



- (KeyShowViewType) getKeyCartType;
@end










