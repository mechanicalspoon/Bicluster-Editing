//
//  Node.h
//  Bicluster Editting
//
//  Created by Mohammad Nour Sharaf on 7/2/18.
//  Copyright © 2018 Mohammad Nour Sharaf. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NodeView.h"

@interface Node : NSObject

@property NSString *nodeId;
@property NSMutableArray *nodeEdges;

@property NodeView *nodeView;

@end
