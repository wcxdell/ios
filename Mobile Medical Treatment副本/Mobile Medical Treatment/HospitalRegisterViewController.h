//
//  HospitalRegisterViewController.h
//  Mobile Medical Treatment
//
//  Created by appel on 15/9/6.
//  Copyright (c) 2015年 appel. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HospitalRegisterViewController : UIViewController

@property (strong, nonatomic) NSMutableArray *functionType;
@property (weak, nonatomic) IBOutlet UIButton *button;
- (IBAction)goToRegister:(id)sender;

@end
