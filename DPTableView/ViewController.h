//
//  ViewController.h
//  DPTableView
//
//  Created by Divya on 21/09/16.
//  Copyright © 2016 Divya Patil. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController :UIViewController<UITableViewDelegate,UITableViewDataSource>
{
    NSMutableArray *allValues;
}
@property (strong, nonatomic) IBOutlet UITextField *numberField;

//@property (strong, nonatomic) IBOutlet UITextField *numberField;
@property (strong, nonatomic) IBOutlet UITextField *limitField;
@property (strong, nonatomic) IBOutlet UIButton *calculateButton;
- (IBAction)calculateButton:(id)sender;
@property (strong, nonatomic) IBOutlet UITableView *tableView;

@end

