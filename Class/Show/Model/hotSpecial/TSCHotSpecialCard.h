//
//  TSCHotSpecialCard.h
//  Test-inke
//
//  Created by 唐嗣成 on 2017/12/16.
//  Copyright © 2017年 shawnTang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TSCCover.h"
#import "TSCHotSpecialData.h"
@interface TSCHotSpecialCard : NSObject
@property (nonatomic, strong) TSCCover * cover;
@property (nonatomic, strong) TSCHotSpecialData *data;
@end
