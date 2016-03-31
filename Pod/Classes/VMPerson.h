//
//  VMPerson.h
//  Pods
//
//  Created by chengqihan on 16/3/31.
//
//

#import <Foundation/Foundation.h>

@interface VMPerson : NSObject
@property (readwrite, nonatomic, copy) NSString *name;
- (void)introduce;
@end
