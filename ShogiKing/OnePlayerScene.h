//
//  OnePlayerScene.h
//  ShogiKing
//
//  Created by Conner DiPaolo on 1/27/15.
//  Copyright (c) 2015 Conner DiPaolo. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>
#import "ShogiBoard.h"
#import "Tree.h"
#import "MainMenuScene.h"

@interface OnePlayerScene : SKScene

@property (nonatomic) ShogiBoard* board;
@property (nonatomic) NSMutableArray* selectedPiece;
@property (nonatomic) int gridBoxWidth;
@property (nonatomic) int capGridBoxWidth;
@property (nonatomic) bool possibleMovesShowing;
@property (nonatomic) bool gameMenuShowing;
@property (nonatomic) bool promotedPieceOptionShowing;
@property (nonatomic) bool gameOverShowing;
@property (nonatomic) NSMutableArray* selectedMove;
@property (nonatomic) NSMutableArray* indices;
@property (nonatomic) NSNumber* selectedDropPiece;

-(void) updateBoard;
-(void) showGameMenu;
-(void) hideGameMenu;
-(void) updateTurn;
-(void) gameOver;
-(void) showPromotionOptionForPiece:(int)piece;
-(void) hidePromotionOptionPiece;
-(void) showPossibleDropsForPiece: (SKNode*)piece;
-(void) showPossibleMovesFromArray:(NSArray*)moves;
-(NSArray*) indicesForNode: (SKNode* )node;
-(NSNumber*) pieceForDropNode:(SKNode*)node;

@end
