//
//  TRBaseCollectionView.m
//  Cntianran
//
//  Created by hanjin on 14-8-21.
//  Copyright (c) 2014年 INMEDIA. All rights reserved.
//

#import "BaseCollectionView.h"

@implementation BaseCollectionView

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/
+(BaseCollectionView *)instanceTextView
{
    NSArray* nibView =  [[NSBundle mainBundle] loadNibNamed:[[self class] description] owner:nil options:nil];
    return [nibView objectAtIndex:0];
}
@end
