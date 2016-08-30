//
//  CollectionCategoryModel.h
//  DMLinkage
//
//  Created by demin on 16/8/30.
//  Copyright © 2016年 Demin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CollectionCategoryModel : NSObject

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, copy) NSString *icon_url;

@property (nonatomic, assign) NSInteger order;

@property (nonatomic, copy) NSString *name;

@property (nonatomic, strong) NSArray *subcategories;

@end

@interface GoodsModel : NSObject

@property (nonatomic, assign) NSInteger status;

@property (nonatomic, assign) NSInteger ID;

@property (nonatomic, assign) NSInteger items_count;

@property (nonatomic, assign) NSInteger order;

@property (nonatomic, copy) NSString *icon_url;

@property (nonatomic, assign) NSInteger parent_id;

@property (nonatomic, copy) NSString *name;

@end

