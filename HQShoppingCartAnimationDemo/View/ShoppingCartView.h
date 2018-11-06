//
//  ShoppingCartView.h
//  HQShoppingCartAnimationDemo
//
//  Created by Mr_Han on 2018/11/6.
//  Copyright © 2018 Mr_Han. All rights reserved.
//  CSDN <https://blog.csdn.net/u010960265>
//  GitHub <https://github.com/HanQiGod>
//

#import <UIKit/UIKit.h>

#import "ZFReOrderTableView.h"
@class BadgeView;


@interface ShoppingCartView : UIView

@property (nonatomic,strong) BadgeView *badge;
@property (nonatomic,strong) UIButton *shoppingCartBtn;

@property (nonatomic,strong) UIView *parentView;

@property (nonatomic,strong) ZFReOrderTableView *OrderList;


-(instancetype) initWithFrame:(CGRect)frame inView:(UIView *)parentView withObjects:(NSMutableArray *)objects;

-(void)updateFrame:(UIView *)view;

-(void)setTotalMoney:(NSInteger)nTotal;

-(void)setCartImage:(NSString *)imageName;

-(void)dismissAnimated:(BOOL) animated;
@end

