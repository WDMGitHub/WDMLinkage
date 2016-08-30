//
//  CategoryModel.m
//  DMLinkage
//
//  Created by demin on 16/8/29.
//  Copyright © 2016年 Demin. All rights reserved.
//

#import "CategoryModel.h"

@implementation CategoryModel

+ (NSDictionary *)objectClassInArray
{
    return @{@"spus": @"FoodModel"};
}

@end

@implementation FoodModel

+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"foodId": @"id"};
}

@end