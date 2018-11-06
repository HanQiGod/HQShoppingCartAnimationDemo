//
//  OverlayView.m
//  HQShoppingCartAnimationDemo
//
//  Created by Mr_Han on 2018/11/6.
//  Copyright © 2018 Mr_Han. All rights reserved.
//  CSDN <https://blog.csdn.net/u010960265>
//  GitHub <https://github.com/HanQiGod>
//

#import "OverlayView.h"
#import "ShoppingCartView.h"

@implementation OverlayView

-(instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.backgroundColor = [[UIColor blackColor] colorWithAlphaComponent:0.6];
//        [self setAlpha:0.8];
    }
    return self;
}

-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
{
    UITouch *touch = [touches anyObject];
    UIView *view = touch.view;
    
    if (view == self) {

        [self.ShoppingCartView dismissAnimated:YES];
    }
}


@end

