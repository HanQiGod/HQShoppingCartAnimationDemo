//
//  BadgeView.h
//  HQShoppingCartAnimationDemo
//
//  Created by Mr_Han on 2018/11/6.
//  Copyright © 2018 Mr_Han. All rights reserved.
//  CSDN <https://blog.csdn.net/u010960265>
//  GitHub <https://github.com/HanQiGod>
//

#import <UIKit/UIKit.h>

@interface BadgeView : UIView

-(instancetype)initWithFrame:(CGRect)frame withString:(NSString *)string;

-(instancetype)initWithFrame:(CGRect)frame withString:(NSString *)string withTextColor:(UIColor *)textColor;

@property (nonatomic,strong) NSString *badgeValue;

@end

