//
//  Model.h
//  vpn
//
//  Created by 曾宪杰 on 2018/11/13.
//  Copyright © 2018 super. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Model : NSObject
@property (nonatomic,strong) NSArray *lines;

@end

NS_ASSUME_NONNULL_END

/*
 {
     "lines":
         [
             {
                 "name":"A",
                 "region":"B",
                 "ips":["1.1.1.1"]
             },
             {
 
             },
     ]
 }
 */

/* VC */
/*
 - (void)initData {
 __weak XJBVC *weakSelf = self;
 
 // keychain中存储的UUID 6845A0A5-DD07-43AA-
 NSString *uuid = [UUIDTool getUUIDInKeychain];
 NSString *uid = [NSString stringWithFormat:@"xsv_%@",uuid];
 NSLog(@"keychainUUID = %@\n", [UUIDTool getUUIDInKeychain]);
 NSLog(@"uid = %@\n",uid);
 NSLog(@"myline %@\n",self.myLine);
 NSDictionary *dic = @{@"plat":@"ios",@"uid":uid,@"type":self.myLine};
 [XJNet checkNetworkingStatus:^(XJState state) {
 if (state > 0) {
 
 [SVProgressHUD show];
 
 __strong XJBVC *strongSelf = weakSelf;
 [XJNet requestAFURL:@"getv2lines" parameters:dic succeed:^(id result) {
 
 [SVProgressHUD dismiss];
 
 NSDictionary *dic = (NSDictionary *)result;
 
 strongSelf.dataDic = [NSDictionary dictionaryWithDictionary:dic];
 
 NSLog(@"result %@\n",dic);
 [strongSelf.xjBTableView reloadData];
 
 } failure:^(NSError *error) {
 [SVProgressHUD showErrorWithStatus:error.localizedDescription];
 [SVProgressHUD dismissWithDelay:2];
 }];
 }
 }];
 
 }

 
 - (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
 Model *model = [Model yy_modelWithDictionary:self.dataDic];
 return [model.lines count];
 }
 
 - (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
 XJBTableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:bIdinifier forIndexPath:indexPath];
 
 Model *model = [Model yy_modelWithDictionary:self.dataDic];
 NSDictionary *dic =  model.lines[indexPath.section];
 cell.dataModel = dic;
 
 return cell;
 }
 
 
 
 */
/* cell */
/*
 @property (nonatomic,strong) NSDictionary *dataModel;
 
 
 - (void)setDataModel:(NSDictionary *)dataModel {
 _dataModel = dataModel;
 dataModel = [dataModel yy_modelToJSONObject];
 
 self.titleLab.text = dataModel[@"name"];
 self.iconImg.image = [UIImage imageNamed:dataModel[@"region"]];
 
 }
 
 */

