//
//  VPHAlbumCell.h
//  vPhoto
//
//  Created by Danis Tazetdinov on 18.12.13.
//  Copyright (c) 2013 Danis Tazetdinov. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VPHAlbumCell : UICollectionViewCell

@property (nonatomic, weak) IBOutlet UIImageView *coverImage;
@property (nonatomic, weak) IBOutlet UILabel *title;

@property (nonatomic, copy) NSString *flickrUserName;

@end
