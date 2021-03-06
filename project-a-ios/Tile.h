//  Tile.h
//  project-a-ios
//
//  Created by Mike Bell on 2/10/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.

typedef enum {
    TILE_FLOOR_VOID=0,
    TILE_FLOOR_UPSTAIRS,
    TILE_FLOOR_DOWNSTAIRS,
    TILE_FLOOR_STONE,
    TILE_FLOOR_WATER,
    
    // un-implemented
    TILE_FLOOR_GRASS,
    TILE_FLOOR_ICE,
    
    // Trapped Tile-types
    TILE_FLOOR_STONE_TRAP_SPIKES_D6,
    TILE_FLOOR_STONE_TRAP_POISON_D6,
    
} Tile_t;

#define TILE_FLOOR_DEFAULT    TILE_FLOOR_GRASS


@interface Tile : NSObject {
    Tile_t tileType;
    BOOL isSelected;
    BOOL needsRedraw; // not used yet ( i think )
    
    // trap-specific tile variables
    BOOL trapIsSet;
    NSInteger tripDamageBase;
    NSInteger tripDamageMod;
    
    CGPoint position;
    NSMutableArray *contents;
}

@property (atomic) Tile_t tileType;
@property (atomic) BOOL isSelected;
@property (atomic) BOOL needsRedraw;

@property (atomic, assign) BOOL trapIsSet;
@property (atomic, assign) NSInteger tripDamageBase;
@property (atomic, assign) NSInteger tripDamageMod;


@property (atomic) CGPoint position;

-( id ) init;
-( id ) initWithTileType: ( Tile_t ) _tileType;
-( void ) handleTileType: (Tile_t) _tileType;
+( Tile * ) newTileWithType: ( Tile_t ) tileType withPosition: ( CGPoint ) position;

-( NSMutableArray * ) contents;
-( void ) setContents: ( NSMutableArray * ) c;
-( void ) addObjectToContents: ( NSObject * ) obj;
-( void ) removeObjectFromContents: (NSObject *) obj;
    
@end