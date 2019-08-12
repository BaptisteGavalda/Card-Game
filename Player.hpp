#ifndef PLAYER_H_
# define PLAYER_H_

#include "includes.h"

#define MAX_LP 20

class    Player {
private:
  //Hand
  //Deck
  int    life_points;
  int    id;

public:
  Player() {
    this->life_points = MAX_LP;
    //    this->id = getNewId();
  }
  ~Player() {}

  int getLifePoint();

  int getId();

  //addHand(Hand hand)
  //addDeck(Deck deck)
  //getHand()
  //getHandSize()
  //getDeck()
  //getDeckSize()
};

#endif /* PLAYER_H_ */
