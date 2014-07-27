//
//  SLSignInViewController.m
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import "SLSignInViewController.h"

@interface SLSignInViewController ()

@end

@implementation SLSignInViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.signinPasswordField.secureTextEntry = YES;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField
{
    [textField resignFirstResponder];
    return YES;
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (IBAction)submitButtonPressed:(id)sender
{
    // if not recognized
        // error message --> sign up as employer or seeker options
        // also show Forgot password? option
    // if email address is in employer array in currentEmployers
        // go to employer dashboard showing their current projects with option to create a project
    // if they are a seeker (email address in seeker array in currentSkillZers
        // if they passed their interview and are in good standing
            // show dashboard page with projects, reviews rating, inbox
        // if they are waiting for an interview
            // thank you for registering! We will be in touch soon if your skills match employers' needs.
        // if they were interviewed and rejected
            // Your skills did not match our employers'
}
@end
