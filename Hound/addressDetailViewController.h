//
//  addressDetailViewController.h
//  Hound
//
//  Created by Joshua Curtiss on 5/1/14.
//  Copyright (c) 2014 Cranky Bit. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface addressDetailViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *addr1;
@property (strong) NSManagedObject *address;
@end
