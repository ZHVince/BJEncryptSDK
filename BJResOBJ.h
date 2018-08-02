//
//  BJResOBJ.h
//  sdsdsdsd
//
//  Created by 铂金数据 on 2018/7/17.
//  Copyright © 2018年 王健超. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BJResOBJ : NSObject
//加密后的密码
@property (nonatomic, strong) NSString * mPassWord;
//加密后的秘钥
@property (nonatomic, strong) NSString * mKey;
//加密后的报文
@property (nonatomic, strong) NSString * mJson;
@end
