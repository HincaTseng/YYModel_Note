//
//  LoginModel.h
//  vpn
//
//  Created by 曾宪杰 on 2018/11/14.
//  Copyright © 2018 super. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LoginModel : NSObject
@property (nonatomic,strong) NSString *type;
@property (nonatomic,strong) NSString *expiration;
@property (nonatomic,strong) NSString *uid;


+ (NSString *)htcTimeToLocationStr:(NSString*)strM;

@end

NS_ASSUME_NONNULL_END


/*
 {
     expiration = "2018-11-14T04:59:15.000Z";
     type = "";
     uid = "xsv_6";
 }
 
 */

/*    VC  */
/*
- (void)initData {
    __weak XJMainVC *weakSelf = self;
    
    // keychain中存储的UUID 6845A0A5-DD07
    _uuid = [UUIDTool getUUIDInKeychain];
    NSString * uidStr = [NSString stringWithFormat:@"xsv_%@",_uuid];
    NSLog(@"uid = %@\n",uidStr);
    [XJNet checkNetworkingStatus:^(XJState state) {
        NSLog(@"checkNetworkingStatus %ld",(long)state);
        __strong XJMainVC *strongSelf = weakSelf;
        
        if (state > 0) {
            
            [SVProgressHUD show];
            
            [XJNet requestAFURL:@"login" parameters:@{@"type":@"uuid",@"plat":@"ios",@"uid":uidStr} succeed:^(id result) {
                [SVProgressHUD dismiss];
                NSLog(@"data %@\n",result);
                
                NSDictionary *dic = (NSDictionary *)result;
                
                LoginModel *userModel = [LoginModel yy_modelWithDictionary:dic];
                NSString *time = [LoginModel htcTimeToLocationStr:userModel.expiration];
                
                strongSelf.dataArr = [[NSMutableArray alloc] initWithObjects:userModel.uid,userModel.type,time,nil];
                
                [strongSelf.xjTableView reloadData];
                
                dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1 * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
                    [strongSelf checkin];
                });
            } failure:^(NSError *error) {
                [SVProgressHUD showErrorWithStatus:error.localizedDescription];
                [SVProgressHUD dismissWithDelay:2];
            }];
        }
    }];
}
 
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
     cell.titleLab.text = self.defaulfArr[indexPath.section];
     cell.iconImg.image = [UIImage imageNamed:self.iconArr[indexPath.section]];
 }
*/
