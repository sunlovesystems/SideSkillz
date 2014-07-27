//
//  SLViewController.h
//  Skillzy
//
//  Created by Transcend on 7/26/14.
//  Copyright (c) 2014 SunLoveSystems. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SLViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *accountLabel;
@property (strong, nonatomic) IBOutlet UIButton *employerButton;
@property (strong, nonatomic) IBOutlet UIButton *seekerButton;
@property (strong, nonatomic) IBOutlet UIButton *signInButton;


- (IBAction)seekerButtonPressed:(id)sender;
- (IBAction)signInButtonPressed:(id)sender;
- (IBAction)employerButtonPressed:(id)sender;

@end
