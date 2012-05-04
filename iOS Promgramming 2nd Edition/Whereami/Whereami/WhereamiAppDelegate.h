//
//  WhereamiAppDelegate.h
//  Whereami
//
//  Created by Suen David on 12-5-4.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreLocation/CoreLocation.h>

@interface WhereamiAppDelegate : UIResponder <UIApplicationDelegate>
{
    CLLocationManager *locationManager;
}

@property (strong, nonatomic) IBOutlet UIWindow *window;

@end
