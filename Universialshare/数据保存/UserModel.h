//
//  UserModel.h
//  813DeepBreathing
//
//  Created by rimi on 15/8/13.
//  Copyright (c) 2015年 . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UserModel : NSObject<NSCoding>
@property (nonatomic, assign) BOOL needAutoLogin;

@property (nonatomic, assign)BOOL   loginstatus;//登陆状态

@property (nonatomic, copy)NSString  *uid;//用户uid
@property (nonatomic, copy)NSString  *phone;//用户手机号
@property (nonatomic, copy)NSString  *name;//用户ID
@property (nonatomic, copy)NSString  *banknumber;//默认银行卡
@property (nonatomic, copy)NSString  *groupId;//用户组id
@property (nonatomic, copy)NSString  *regTime;//注册时间
@property (nonatomic, copy)NSString  *lastTime;//上次登录时间
@property (nonatomic, copy)NSString  *token;//token 校验码
@property (nonatomic, copy)NSString  *headPic;//头像地址
@property (nonatomic, copy)NSString  *mark;//积分
@property (nonatomic, copy)NSString  *loveNum;//爱心数量
@property (nonatomic, copy)NSString  *ketiBean;//志愿豆 可提豆
@property (nonatomic, copy)NSString  *recommendMark;//推荐提成 注册奖励
@property (nonatomic, copy)NSString  *lastFanLiTime;//上次返利时间
@property (nonatomic, copy)NSString  *giveMeMark;//获赠的豆豆
@property (nonatomic, copy)NSString  *version;//版本号
@property (nonatomic, copy)NSString  *vsnUpdateTime;//版本上次更新时间
@property (nonatomic, copy)NSString  *vsnAddress;//版本地址
@property (nonatomic, copy)NSString  *counta;//
@property (nonatomic, copy)NSString  *usrtype;//用户类型
@property (nonatomic ,copy)NSString  *djs_bean;//代缴税
@property (nonatomic ,copy)NSString  *idcard;//身份证
@property (nonatomic ,copy)NSString  *truename;//真实姓名
@property (nonatomic ,copy)NSString  *tjr;//推荐人
@property (nonatomic ,copy)NSString  *tjrname;//推荐人姓名
@property (nonatomic ,copy)NSString  *AudiThrough;//判断商家是否通过审核
@property (nonatomic ,copy)NSString  *rzstatus;//是否认证，0没有认证，1申请认证，2审核通过，3失败
@property (nonatomic ,copy)NSString  *is_main;//是否是主店,0:主点  1:分店

@property (nonatomic ,copy)NSString  *shop_name;//商家
@property (nonatomic ,copy)NSString  *shop_address;//商家地址
@property (nonatomic ,copy)NSString  *shop_type;//商家类型

//兑换比例
@property (nonatomic ,copy)NSString  *t_one;
@property (nonatomic ,copy)NSString  *t_two;
@property (nonatomic ,copy)NSString  *t_three;
//商家额度
@property (nonatomic ,copy)NSString  *surplusLimit;//剩余额度
@property (nonatomic ,copy)NSString  *allLimit;//总额度
@property (nonatomic ,copy)NSString  *isapplication;//判断是否正在申请额度 0 为没有申请 1 为正在申请

//@property (nonatomic ,copy)NSString  *defaultBanknumber;//默认银行卡号
@property (nonatomic ,copy)NSString  *defaultBankname;//默认银行名
@property (nonatomic ,copy)NSString  *defaultBankIcon;//默认银行图标


+(UserModel*)defaultUser;

@end
