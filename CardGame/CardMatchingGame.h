//
//  CardMatchingGame.h
//  CardGame
//
//  Created by Volodymyr Romanov on 10/1/16.
//  Copyright © 2016 Vladimir Romanov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"

@interface CardMatchingGame : NSObject

//designated initializer
-(instancetype)initWithCardCount:(NSUInteger)count usingDeck:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;

- (Card *)cardAtIndex:(NSUInteger)index;

@property (nonatomic,readonly) NSInteger score;

@end
