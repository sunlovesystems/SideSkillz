//
//  SLEmployerCreateProjectViewController.h
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLEmployerCreateProjectViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextField *employerProjectNameField;
@property (strong, nonatomic) IBOutlet UITextField *employerProjectDescriptionField;
@property (strong, nonatomic) IBOutlet UITextField *employerProjectDurationField;
@property (strong, nonatomic) IBOutlet UITextField *employerProjectMaxHourlyRateField;
@property (strong, nonatomic) IBOutlet UITextField *employerProjectSkillsRequiredField;
@property (strong, nonatomic) IBOutlet UIButton *employerCreateProjectSubmitButton;

- (IBAction)employerCreateProjectSubmitButtonPressed:(id)sender;

@end
