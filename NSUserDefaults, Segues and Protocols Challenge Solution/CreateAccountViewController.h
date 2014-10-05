//
//  CreateAccountViewController.h
//  NSUserDefaults, Segues and Protocols Challenge Solution
//
//  Created by Andrew Bell on 10/5/14.
//  Copyright (c) 2014 Andrew Bell. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CreateAccountViewControllerDelegate <NSObject>

@required

-(void)didCancel;
-(void)didCreateAccount;

@end

@interface CreateAccountViewController : UIViewController

@property (weak, nonatomic) id <CreateAccountViewControllerDelegate> delegate;

@property (strong, nonatomic) IBOutlet UITextField *userNameTextField;
@property (strong, nonatomic) IBOutlet UITextField *passwordTextField;
@property (strong, nonatomic) IBOutlet UITextField *confirmPasswordTextField;

- (IBAction)createAccountButtonPressed:(UIButton *)sender;
- (IBAction)cancelButtonPressed:(UIButton *)sender;

@end
