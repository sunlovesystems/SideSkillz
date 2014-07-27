//
//  SLEmployeeSignupViewController.m
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import "SLEmployeeSignupViewController.h"

@interface SLEmployeeSignupViewController ()

@end

@implementation SLEmployeeSignupViewController

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
    self.seekerPasswordField.secureTextEntry = YES;
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

- (IBAction)seekerAttachPhotoButtonPressed:(id)sender {
}

- (IBAction)seekerSubmitButtonPressed:(id)sender {
}
@end
