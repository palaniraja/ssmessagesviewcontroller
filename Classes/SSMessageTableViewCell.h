//
//  SSMessageTableViewCell.h
//  Messages
//
//  Created by Sam Soffes on 3/10/10.
//  Copyright 2010-2011 Sam Soffes. All rights reserved.
//

typedef enum {
	SSMessageStyleLeft = 0,
	SSMessageStyleRight = 1
} SSMessageStyle;

@class SSMessageTableViewCellBubbleView;

@interface SSMessageTableViewCell : UITableViewCell {

@private
	
	SSMessageTableViewCellBubbleView *_bubbleView;
}

@property (nonatomic, copy) NSString *messageText;
@property (nonatomic, copy) NSString *detailText;
@property (nonatomic, copy) UIColor *detailTextColor;
@property (nonatomic, copy) UIColor *detailBackgroundColor;
@property (nonatomic, assign) SSMessageStyle messageStyle;

- (void)setBackgroundImage:(UIImage *)backgroundImage forMessageStyle:(SSMessageStyle)messsageStyle;

- (void)setUserImage:(UIImage *)image;
- (void)setBuddyImage:(UIImage *)image;

@end
