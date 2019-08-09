#include "includes.h"

#define MAX_LP 20

class    Player {
private:
  //Hand
  //Deck
  int    life_points;
  int    id;

public:
  Player(/*Hand, Deck,*/) {
    this->life_points = MAX_LP;
    //    this->id = getNewId();
  }
  ~Player() {}

  int getLifePoint() {
    return (this->life_points);
  }

  int getId() {
    return (this->id);
  }
  //getHand()
  //getHandSize()
  //getDeck()
  //getDeckSize()
};
