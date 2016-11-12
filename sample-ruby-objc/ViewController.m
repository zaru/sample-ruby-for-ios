//
//  ViewController.m
//  sample-ruby-objc
//
//  Created by hiro on 2016/11/10.
//  Copyright © 2016年 zaru. All rights reserved.
//

#import "ViewController.h"
#import "CRuby/CRuby.h"
#import "CRuby/CRBValue.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)doRun:(id)sender {
    
    CRBValue *result = [CRuby evaluate: self.code.text];
    NSString *string = result.inspect;
    self.result.text = string;
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
