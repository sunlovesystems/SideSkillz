//
//  SLEmployerSignupViewController.h
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLEmployerSignupViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *employerNameField;
@property (strong, nonatomic) IBOutlet UITextField *employerWebSiteField;
@property (strong, nonatomic) IBOutlet UITextField *employerContactNameField;
@property (strong, nonatomic) IBOutlet UITextField *employerContactEmailField;
@property (strong, nonatomic) IBOutlet UITextField *employerPasswordField;

- (IBAction)employerSignupButtonPressed:(id)sender;

@end
