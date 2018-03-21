//
//  SWCellScrollView.h
//  SWTableViewCell
//
//  Created by Matt Bowman on 11/27/13.
//  Copyright (c) 2013 Chris Wendel. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SWCellScrollViewDelegate;

@interface SWCellScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (nonatomic, weak) id <SWCellScrollViewDelegate> delegate;

@end

@protocol SWCellScrollViewDelegate <NSObject>

@optional

// (Jesus) Implement this method to avoid the framework clash with the UIGestureRecognizer
- (BOOL)swipeableCellScrollView:(SWCellScrollView *)scrollView withGestureRecognizer:(UIGestureRecognizer *)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer *)otherGestureRecognizer;
@end



