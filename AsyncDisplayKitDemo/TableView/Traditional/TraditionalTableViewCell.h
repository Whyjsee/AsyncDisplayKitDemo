//
//  TraditionalTableViewCell.h
//  AsyncDisplayKitDemo
//
//  Created by 恺撒 on 2016/11/10.
//  Copyright © 2016年 Meili Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

/*
 *  传统模式做一个cell，应用xib与否不影响运行时的UI流畅性与响应速度
 */

@interface TraditionalTableViewCell : UITableViewCell

- (void)bindDataSourceModel:(id)model;

@end
