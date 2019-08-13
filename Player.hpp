#ifndef PLAYER_H_
# define PLAYER_H_

#include "includes.h"
#include "ListCard.hpp"

#define MAX_LP 20

class    Player {
private:
  int    life_points;
  int    id;
  std::vector<Deck> deck;
  std::vector<Deck> hand;

public:
  Player() {
    this->life_points = MAX_LP;
    //    this->id = getNewId();
  }
  ~Player() {}

  int getLifePoint();
  int getId();

  int drawCard();

  //addHand(Hand hand)
  //addDeck(Deck deck)
  //getHand()
  //getHandSize()
  //getDeck()
  //getDeckSize()
};

#endif /* PLAYER_H_ */
