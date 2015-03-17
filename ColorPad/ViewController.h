//
//  ViewController.h
//  ColorPad
//
//  Created by Francisco Surroca on 10/21/13.
//  Copyright (c) 2013 Francisco Surroca. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController {
    CGPoint lastPoint;
    CGFloat red;
    CGFloat green;
    CGFloat blue;
    CGFloat brush;
    CGFloat opacity;
    
    BOOL mouseSwiped;
}

@property (weak, nonatomic) IBOutlet UIImageView *mainImage;

@property (weak, nonatomic) IBOutlet UIImageView *tempDrawImage;

- (IBAction)pencilPressed:(id)sender;
- (IBAction)reset:(id)sender;
- (IBAction)save:(id)sender;

@end
