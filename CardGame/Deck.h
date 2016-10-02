//
//  Deck.h
//  CardGame
//
//  Created by Volodymyr Romanov on 10/1/16.
//  Copyright © 2016 Vladimir Romanov. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

@property (nonatomic) int numberOfCardsInDeck;

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
