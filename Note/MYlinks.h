//
//  MYlinks.h
//  vpn
//
//  Created by 曾宪杰 on 2018/11/13.
//  Copyright © 2018 super. All rights reserved.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface MYlinks : NSObject
@property (nonatomic,copy) NSString *name;
@property (nonatomic,copy) NSString *region;
@property (nonatomic,strong) NSArray *ips;

@end

NS_ASSUME_NONNULL_END
