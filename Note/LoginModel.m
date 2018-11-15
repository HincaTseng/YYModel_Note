//
//  LoginModel.m
//  vpn
//
//  Created by 曾宪杰 on 2018/11/14.
//  Copyright © 2018 super. All rights reserved.
//

#import "LoginModel.h"

@implementation LoginModel


+ (NSString *)htcTimeToLocationStr:(NSString*)strM
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat:@"yyyy-MM-dd'T'HH:mm:ss.SSSZ"];
    dateFormatter.timeZone = [NSTimeZone timeZoneWithName:@"Asia/Shanghai"];
    NSDate *dateFormatted = [dateFormatter dateFromString:strM];
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss"];
    NSString *locationTimeString=[dateFormatter stringFromDate:dateFormatted];
    return locationTimeString;
}

@end
