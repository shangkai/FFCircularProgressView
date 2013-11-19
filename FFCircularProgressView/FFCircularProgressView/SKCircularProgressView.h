//
//  SKCircularProgressView.h
//  SKCommon
//  用作Dropbox上传状态显示，主要改的地方是下载箭头改为上传箭头
//  Created by 尚 凯 on 13-10-9.
//  Copyright (c) 2013年 Shangkai. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SKCircularProgressView : UIView

@property (nonatomic, assign, readonly) BOOL isSpinning;
/**
 * The progress of the view.
 **/
@property (nonatomic, assign) CGFloat progress;

/**
 * The width of the line used to draw the progress view.
 **/
@property (nonatomic, assign) CGFloat lineWidth;

/**
 * The color of the progress view
 */
@property (nonatomic, strong) UIColor *tintColor;


@property(nonatomic,assign)BOOL isUpload;

/**
 * Make the background layer to spin around its center. This should be called in the main thread.
 */
- (void) startSpinProgressBackgroundLayer;

/**
 * Stop the spinning of the background layer. This should be called in the main thread.
 * WARN: This implementation remove all animations from background layer.
 **/
- (void) stopSpinProgressBackgroundLayer;
@end
