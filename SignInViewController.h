//
//  SignInViewController.h
//  NSUserDefaults, Segues and Protocols Challenge Solution
//
//  Created by Andrew Bell on 10/5/14.
//  Copyright (c) 2014 Andrew Bell. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CreateAccountViewController.h"

@interface SignInViewController : UIViewController <CreateAccountViewControllerDelegate>

@property (strong, nonatomic) IBOutlet UITextField *userNameTextField;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;

- (IBAction)loginButtonPressed:(UIButton *)sender;
- (IBAction)createAccountButtonPressed:(UIBarButtonItem *)sender;

@end
