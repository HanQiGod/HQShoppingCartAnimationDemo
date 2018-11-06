//
//  FoodCell.h
//  HQShoppingCartAnimationDemo
//
//  Created by Mr_Han on 2018/11/6.
//  Copyright © 2018 Mr_Han. All rights reserved.
//  CSDN <https://blog.csdn.net/u010960265>
//  GitHub <https://github.com/HanQiGod>
//

#import <UIKit/UIKit.h>

@interface FoodCell : UITableViewCell


@property (weak, nonatomic) IBOutlet UIImageView *foodImageView;

@property (weak, nonatomic) IBOutlet UILabel *name;

@property (weak, nonatomic) IBOutlet UILabel *price;

@property (weak, nonatomic) IBOutlet UILabel *month_saled;

@property (weak, nonatomic) IBOutlet UILabel *praise_num;

@property (weak, nonatomic) IBOutlet UIButton *minus;

@property (weak, nonatomic) IBOutlet UIButton *plus;

@property (weak, nonatomic) IBOutlet UILabel *orderCount;

@property (assign, nonatomic) NSInteger foodId;

@property (assign, nonatomic) NSUInteger amount;

//减少订单数量 不需要动画效果
@property (copy, nonatomic) void (^plusBlock)(NSInteger count,BOOL animated);

@property (weak, nonatomic) IBOutlet UIImageView *plusImageView;
@end

