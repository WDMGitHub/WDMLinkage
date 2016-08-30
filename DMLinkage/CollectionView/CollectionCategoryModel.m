//
//  CollectionCategoryModel.m
//  DMLinkage
//
//  Created by demin on 16/8/30.
//  Copyright © 2016年 Demin. All rights reserved.
//

#import "CollectionCategoryModel.h"

@implementation CollectionCategoryModel

+ (NSDictionary *)objectClassInArray
{
    return @{@"subcategories": @"GoodsModel"};
}

+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"ID": @"id"};
}

@end

@implementation GoodsModel

+ (NSDictionary *)replacedKeyFromPropertyName
{
    return @{@"ID": @"id"};
}

@end


