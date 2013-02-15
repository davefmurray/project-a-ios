//  DungeonFloor.h
//  project-a-ios
//
//  Created by Mike Bell on 2/12/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.

@interface DungeonFloor : NSObject {
@public
    NSUInteger width, height;
    NSMutableArray *tileDataArray;
}

+( DungeonFloor * ) newFloor;

@end