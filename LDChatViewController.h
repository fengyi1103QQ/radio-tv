//
//  Created by Jesse Squires
//  http://www.jessesquires.com
//
//
//  Documentation
//  http://cocoadocs.org/docsets/JSQMessagesViewController
//
//1231
//  GitHub
//  https://github.com/jessesquires/JSQMessagesViewController
//
//
//  License
//  Copyright (c) 2014 Jesse Squires
//  Released under an MIT license: http://opensource.org/licenses/MIT
//


// Import all the things
#import "JSQMessagesViewController.h"
#import "JSQMessagesBubbleImageFactory.h"
#import "JSQMessagesViewController.h"
#import "JSQMessagesCollectionViewFlowLayout.h"
#import "JSQSystemSoundPlayer.h"

@class LDChatViewController;
@interface LDChatViewController : JSQMessagesViewController <UIActionSheetDelegate>

@property (nonatomic) long long ID;

@end