//
//  ClassBrowserAppDelegate.h
//  ClassBrowser
//

#import <UIKit/UIKit.h>
#import "ClassBrowserViewController.h"

@interface ClassBrowserAppDelegate : NSObject <UIApplicationDelegate,UINavigationControllerDelegate> {
	UIWindow *window;
	UIViewController *splashViewController;
	UIActivityIndicatorView *activityIndicatorView;
	UINavigationController *navigationController;
	ClassBrowserViewController *rootViewController;
	NSMutableArray *autoPushClassNames;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UIViewController *splashViewController;
@property (nonatomic, retain) IBOutlet UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, retain) IBOutlet ClassBrowserViewController *rootViewController;
@property (retain) NSMutableArray *autoPushClassNames;

- (void)pushClass:(NSString*)className;
- (void)pushProtocol:(NSString*)protocolName;

@end
