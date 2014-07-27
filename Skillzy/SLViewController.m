//
//  SLViewController.m
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import "SLViewController.h"

@interface SLViewController ()

@end

@implementation SLViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.employerButton.titleLabel.numberOfLines = 0;
    self.employerButton.titleLabel.lineBreakMode = NSLineBreakByWordWrapping;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)employerButtonPressed:(id)sender
{
    
}

// Seeker needs to be sponsored by their school or teacher
- (IBAction)seekerButtonPressed:(id)sender
{

}

- (IBAction)signInButtonPressed:(id)sender
{
    // [self performSegueWithIdentifier:@"pushToSignIn" sender:self];
}

@end
