//
//  RightTableViewCell.h
//  DMLinkage
//
//  Created by demin on 16/8/29.
//  Copyright © 2016年 Demin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FoodModel;

#define kCellIdentifier_Right @"RightTableViewCell"

@interface RightTableViewCell : UITableViewCell

@property (nonatomic, strong) FoodModel *model;

@end
