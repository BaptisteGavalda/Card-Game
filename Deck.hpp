#ifndef DECK_H_
# define DECK_H_

#include "includes.h"

class Deck {
private:
  int id;
  std::string name;
  std::list<Card> cardsList;

public:
  Deck(std::string name) {
    this->name = name;
    //this->id = getId();
  }
  ~Deck() {}

  void addCard(Card card) {
    this->cardsList.push_back(card);
  }
};

#endif /*DECK_H_*/
