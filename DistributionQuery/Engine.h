//
//  Engine.h
//  DistributionQuery
//
//  Created by Macx on 16/10/8.
//  Copyright © 2016年 Macx. All rights reserved.
//

#import <Foundation/Foundation.h>
typedef void (^SuccessBlock)(NSDictionary*dic);
typedef void (^ErrorBlock)(NSError*error);
@interface Engine : NSObject
//**********************************首页**********************//
#pragma mark --1.会员注册
+(void)zhuCeAccountPhoneNumber:(NSString*)str Pwd:(NSString*)pwd CodeStr:(NSString*)code success:(SuccessBlock)aSuccess error:(ErrorBlock)aError;
#pragma mark --2.会员登录
+(void)loginAccountPhoneNumber:(NSString*)str Pwd:(NSString*)pwd CodeStr:(NSString*)code success:(SuccessBlock)aSuccess error:(ErrorBlock)aError;



#pragma mark --3.获取验证码
+(void)getCodePhone:(NSString*)phone typeStr:(NSString*)type success:(SuccessBlock)aSuccess error:(ErrorBlock)aError;
#pragma mark --5.获取首页特价专区
+(void)FirstTeJiaZhuanQusuccess:(SuccessBlock)aSuccess error:(ErrorBlock)aError;

#pragma mark --6.1（优质现货1，最新采购2）特价专区列表
+(void)tejiaZhuanQuLieBiaoHangYeID:(NSString*)category DiQu:(NSString*)area GuanJianZi:(NSString*)keyword Page:(NSString*)page PageSize:(NSString*)pagesize GongQiu:(NSString*)gq TeJia:(NSString*)tejia success:(SuccessBlock)aSuccess error:(ErrorBlock)aError;

#pragma mark --6.2.列表详情界面
+(void)tableViewXiangQingJieMianMessageID:(NSString*)messageId success:(SuccessBlock)aSuccess error:(ErrorBlock)aError;

#pragma mark --6获取顶级产品分类
+(void)getHangYeChanPinFenLeisuccess:(SuccessBlock)aSuccess error:(ErrorBlock)aError;
#pragma mark --7根据行业获取分类
+(void)getHangYeWithID:(NSString*)Idd success:(SuccessBlock)aSuccess error:(ErrorBlock)aError;


#pragma mark --9获取省级地区
+(void)getShengJiDiQusuccess:(SuccessBlock)aSuccess error:(ErrorBlock)aError;
#pragma mark --10.根据省获取市
+(void)getCityWithShengCode:(NSString*)code uccess:(SuccessBlock)aSuccess error:(ErrorBlock)aError;
@end
