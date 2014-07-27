//
//  SLEmployerDashboardViewController.h
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLEmployerDashboardViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIButton *employerCreateProjectButton;
@property (strong, nonatomic) IBOutlet UIButton *employerSignOutButton;

- (IBAction)employerCreateProjectButtonPressed:(id)sender;
- (IBAction)employerSignOutButtonPressed:(id)sender;
@end
