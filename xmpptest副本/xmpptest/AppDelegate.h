//
//  AppDelegate.h
//  xmpptest
//
//  Created by 王长旭 on 15/9/12.
//  Copyright (c) 2015年 王长旭. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XMPP.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>{
    XMPPStream *xmppStream;
    NSString * password;
    BOOL isOpen;
}

@property (strong, nonatomic) UIWindow *window;

@property (nonatomic,readonly)XMPPStream * xmppStream;

@end

