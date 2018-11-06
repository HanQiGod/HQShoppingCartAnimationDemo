//
//  FoodCell.m
//  HQShoppingCartAnimationDemo
//
//  Created by Mr_Han on 2018/11/6.
//  Copyright © 2018 Mr_Han. All rights reserved.
//  CSDN <https://blog.csdn.net/u010960265>
//  GitHub <https://github.com/HanQiGod>
//

#import "FoodCell.h"

@implementation FoodCell

- (void)awakeFromNib {
    // Initialization code
    
    self.amount = 0;
    self.foodImageView.contentMode = UIViewContentModeScaleAspectFill;
    self.foodImageView.layer.cornerRadius = 5;
    self.foodImageView.layer.masksToBounds = YES;
  
    [self.minus setHidden:YES];
    [self.orderCount setHidden:YES];
    
    [self bringSubviewToFront:self.plusImageView];
}


- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
- (IBAction)plus:(id)sender {
    
    self.amount += 1;

    self.plusBlock(self.amount,YES);
    
    [self showOrderNumbers:self.amount];

}
- (IBAction)minus:(id)sender {
    
    self.amount -= 1;
    
    self.plusBlock(self.amount,NO);
    
    [self showOrderNumbers:self.amount];
}


-(void)layoutSubviews
{
    [super layoutSubviews];

    [self showOrderNumbers:self.amount];

}


-(void)showOrderNumbers:(NSUInteger)count
{
    self.orderCount.text = [NSString stringWithFormat:@"%lu",(unsigned long)self.amount];
    if (self.amount > 0)
    {
        [self.minus setHidden:NO];
        [self.orderCount setHidden:NO];
    }
    else
    {
        [self.minus setHidden:YES];
        [self.orderCount setHidden:YES];
    }
}

@end

