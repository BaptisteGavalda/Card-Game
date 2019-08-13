#ifndef DECK_H_
# define DECK_H_

#include "includes.h"
#include "Cards.hpp"

class Deck {
private:
  int id;
  std::string name;
  std::vector<Card> cardsList;

public:
  Deck(std::string name) {
    this->name = name;
    //this->id = initId();
  }
  ~Deck() {}

  void addCard(Card card);
  void showCards();

  int getCardsNumber();
  int getId();
};

#endif /*DECK_H_*/
