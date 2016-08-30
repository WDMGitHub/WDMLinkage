//
//  CollectionViewCell.h
//  DMLinkage
//
//  Created by demin on 16/8/30.
//  Copyright © 2016年 Demin. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kCellIdentifier_CollectionView @"CollectionViewCell"

@class GoodsModel;

@interface CollectionViewCell : UICollectionViewCell

@property (nonatomic, strong) GoodsModel *model;

@end
