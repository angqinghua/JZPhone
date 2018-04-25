//
//  UCSIPCCSDKLog.h
//  ucsipccsdk
//
//  Created by Jozo.Chan on 16/7/5.
//  Copyright © 2016年 i.Jozo. All rights reserved.
//

#import <Foundation/Foundation.h>

#define CLOSE_LOG           0
#define SHOW_ON_CONSOLE     1
#define SAVE_TO_FILE        2
#define SAVE_AND_SHOW       3

@interface UCSIPCCSDKLog : NSObject

+ (void) saveDemoLogInfo:(NSString *) summary withDetail:(NSString *) detail;
+ (void)set_log_level:(int)level;

@end
