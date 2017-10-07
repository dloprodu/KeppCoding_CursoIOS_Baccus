//
//  SQAWineryModel.h
//  Baccus
//
//  Created by David Lopez Rodriguez on 07/10/2017.
//  Copyright © 2017 David López Rodriguez. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SQAWineModel.h"

@interface SQAWineryModel : NSObject

#pragma mark - Properties

@property (readonly, nonatomic) NSUInteger redWineCount;
@property (readonly, nonatomic) NSUInteger whiteWineCount;
@property (readonly, nonatomic) NSUInteger otherWineCount;

#pragma mark - Methods

-(SQAWineModel*) redWineAtIndex: (NSInteger) index;
-(SQAWineModel*) whiteWineAtIndex: (NSInteger) index;
-(SQAWineModel*) otherWineAtIndex: (NSInteger) index;

@end