//
//  ChieckINModel.h
//  vpn
//
//  Created by 曾宪杰 on 2018/11/14.
//  Copyright © 2018 super. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ChieckINModel : NSObject
@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *enTitle;
@property (nonatomic,strong) NSString *description;
@property (nonatomic,strong) NSString *expDate;
@property (nonatomic,assign) BOOL done;

@end

NS_ASSUME_NONNULL_END

/*
 [
     {
         description = "+1";
         done = 1;
         enTitle = "OK";
         title = "0";
     }
 ]
 
 */

/*    VC  */
/*
 如果和x关键字重名 用这个 @synthesize description =_description;
 - (void)loadData {
 //    __weak XJMainVC *weakSelf = self;
 NSString * uidStr = [NSString stringWithFormat:@"xsv_%@",_uuid];
 [XJNet requestAFURL:@"checkin" parameters:@{@"task":@"每日签到",@"uname":uidStr} succeed:^(id result) {
 //        __strong XJMainVC *strongSelf = weakSelf;
 
 NSLog(@"data %@\n",result);
 NSArray *data = [NSArray yy_modelArrayWithClass:[ChieckINModel class] json:result];
 
 NSDictionary *dic = [data[0] yy_modelToJSONObject];
 NSLog(@"description %@\n",dic[@"description"]);
 
 [SVProgressHUD showWithStatus:dic[@"description"]];
 [SVProgressHUD dismissWithDelay:2];
 
 } failure:^(NSError *error) {
 [SVProgressHUD showErrorWithStatus:error.localizedDescription];
 [SVProgressHUD dismissWithDelay:2];
 }];
 }
 
 
 */
