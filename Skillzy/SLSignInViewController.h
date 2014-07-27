//
//  SLSignInViewController.h
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLSignInViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *signinEmailField;
@property (strong, nonatomic) IBOutlet UITextField *signinPasswordField;
@property (strong, nonatomic) IBOutlet UIButton *submitButton;

- (IBAction)submitButtonPressed:(id)sender;

@end
