//
//  GitApiSessionTask.h
//  xcodeGitApiPractice
//
//  Created by mkdev on 15/03/16.
//  Copyright © 2016 Monitron. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GitApiSessionTask : NSURLSessionTask
+(void)sessionWithPath: (NSString *)path successHandler:(void(^)(NSURLSessionTask *task, id responseObject))responseHandler;
@end
