//
//  ShangpinguanliVC.h
//  YHB_Prj
//
//  Created by  striveliu on 15/9/9.
//  Copyright (c) 2015年 striveliu. All rights reserved.
//

#import "BaseViewController.h"
#import "DJScanViewController.h"
@interface ShangpinguanliVC : BaseViewController<UITableViewDelegate,UITableViewDataSource,DJScanDelegate>
//是否来自盘点车
@property(nonatomic, assign) BOOL isFromProductCheckCart;
//是否需要立即跳转扫码
@property(nonatomic, assign) BOOL isNeedJumpToScan;
//是否是从商品盘点跳转过来
@property(nonatomic, assign) BOOL isJumpFromPanDian;
@end
