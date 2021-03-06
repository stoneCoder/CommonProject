//
//  CCSegment.h
//  Chat
//
//  Created by 怡龙谷 on 14-8-19.
//  Copyright (c) 2014年 Huang Xiu Yong. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol CCSegmentDelegate <NSObject>
-(void)selectIndex:(NSInteger)index;
@end

@interface BaseSegment : UIControl

@property (nonatomic, strong) NSArray *items;

@property (nonatomic) NSUInteger selectIndex;
@property (strong, nonatomic) id<CCSegmentDelegate> delegate;

- (void)setSelectIndex:(NSUInteger)selectIndex animated:(BOOL)animated;
- (void)setBottomLineViewWidth:(CGFloat)width;
- (void)setItemTitleColorForNormal:(UIColor *)normal andForSelected:(UIColor *)selected;
- (void)setItemTitleFontSize:(CGFloat)size;
- (void)hiddenSeparatorView:(BOOL)hidden;


@end
