//
//  Define.h
//  AutoTour
//
//  Created by hanjin on 14-3-10.
//  Copyright (c) 2014年 WHZM. All rights reserved.
//

#define API @""

#pragma mark - 单例

#define DEFINE_SINGLETON_FOR_HEADER(className) \
+ (className *)shared##className;

#define DEFINE_SINGLETON_FOR_CLASS(className) \
\
+ (className *)shared##className { \
static className *shared##className = nil; \
static dispatch_once_t onceToken; \
dispatch_once(&onceToken, ^{ \
shared##className = [[self alloc] init]; \
}); \
return shared##className; \
}

#pragma mark - 颜色
#define LightBgColor [UIColor colorWithRed:245.0/255 green:245.0/255 blue:245.0/255 alpha:1];
#define BoxColor [UIColor colorWithRed:38.0/255.0 green:193.0/255.0 blue:252.0/255.0 alpha:1.0].CGColor;

#define UIColorFromRGBA(rgb,a) [UIColor colorWithRed:((float)((rgb & 0xFF0000) >> 16))/255.0 green:((float)((rgb & 0xFF00) >> 8))/255.0 blue:((float)(rgb & 0xFF))/255.0 alpha:a]
#define UIColorFromRGB(rgb) UIColorFromRGBA(rgb,1.0f)


#pragma mark - 适配
// 判断是否为iOS7
#define iOS7 ([[UIDevice currentDevice].systemVersion doubleValue] >= 7.0)
//判断是否时iphone5
#define IS_IPHONE5 (([[UIScreen mainScreen] bounds].size.height-568)?NO:YES)

#pragma mark - 其他
#define ccp CGPointMake