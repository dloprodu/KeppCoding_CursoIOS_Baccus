//
//  SQAWineViewController.h
//  Baccus
//
//  Created by David Lopez Rodriguez on 04/10/2017.
//  Copyright © 2017 David López Rodriguez. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SQAWineModel.h"

@interface SQAWineViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIImageView *photoView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *companyLabel;
@property (weak, nonatomic) IBOutlet UILabel *typeLabel;
@property (weak, nonatomic) IBOutlet UILabel *originLabel;
@property (weak, nonatomic) IBOutlet UILabel *grapesLabel;
@property (weak, nonatomic) IBOutlet UILabel *notesLabel;
@property (strong, nonatomic) IBOutletCollection(UIImageView) NSArray *ratingView;

@property (strong, nonatomic) SQAWineModel *model;

-(id) initWithModel: (SQAWineModel *) model;

-(IBAction)displayWeb:(id)sender;

@end