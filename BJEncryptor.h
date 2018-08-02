//
//  BJEncryptor.h
//  sdsdsdsd
//
//  Created by 铂金数据 on 2018/7/10.
//  Copyright © 2018年 王健超. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BJEncryptor : NSObject
//密码加密
+(NSDictionary *)BJ_encodePassWord:(NSString *)passWord;
//报文加密
+(NSDictionary *)BJ_encodeJson:(NSDictionary *)jsonDic;
//数据验签
+(BOOL)checkJson:(NSDictionary *)jsonDic;



@end
