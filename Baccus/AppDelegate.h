//
//  AppDelegate.h
//  Baccus
//
//  Created by David Lopez Rodriguez on 03/10/2017.
//  Copyright © 2017 David López Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IS_PHONE UI_USER_INTERFACE_IDIOM()==UIUserInterfaceIdiomPhone

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;


@end

