//
//  Model.m
//  vpn
//
//  Created by 曾宪杰 on 2018/11/13.
//  Copyright © 2018 super. All rights reserved.
//

#import "Model.h"
#import "MYlinks.h"
@implementation Model
+ (nullable NSDictionary<NSString *, id> *)modelContainerPropertyGenericClass{
    return @{
             @"lines": MYlinks.class
             };
}

@end
