//
//  UIImageViewTap.h
//  Momento
//
//  Created by Michael Waterfall on 04/11/2009.
//  Copyright 2009 d3i. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@protocol MWTapDetectingImageViewDelegate;

@interface MWTapDetectingImageView : UIImageView {}

@property (nonatomic, weak) id <MWTapDetectingImageViewDelegate> tapDelegate;

@end

@protocol MWTapDetectingImageViewDelegate <NSObject>

@optional

- (void)imageView:(UIImageView *)imageView singleTapDetected:(UITouch *)touch;
- (void)imageView:(UIImageView *)imageView doubleTapDetected:(UITouch *)touch;
- (void)imageView:(UIImageView *)imageView tripleTapDetected:(UITouch *)touch;
- (void)imageView:(UIImageView *)imageView longClickDetected:(UITouch *)touch;

@end
