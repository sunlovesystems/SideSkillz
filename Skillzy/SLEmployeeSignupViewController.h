//
//  SLEmployeeSignupViewController.h
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLEmployeeSignupViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *seekerNameField;
@property (strong, nonatomic) IBOutlet UITextField *seekerEmailField;
@property (strong, nonatomic) IBOutlet UITextField *seekerPasswordField;
@property (strong, nonatomic) IBOutlet UITextField *seekerSkillzField;
@property (strong, nonatomic) IBOutlet UITextField *seekerWebSiteField;
@property (strong, nonatomic) IBOutlet UITextField *seekerBioField;
@property (strong, nonatomic) IBOutlet UIButton *seekerAttachPhotoButton;
@property (strong, nonatomic) IBOutlet UIButton *seekerSubmitButton;

- (IBAction)seekerAttachPhotoButtonPressed:(id)sender;
- (IBAction)seekerSubmitButtonPressed:(id)sender;

@end
