#ifndef DECK_H_
# define DECK_H_

#include "includes.h"
#include "Cards.hpp"

class CardList {
private:
  int id;
  std::string name;
  std::vector<Card> cardsList;
 
public:
  CardList(std::string name) {
    this->name = name;
    //this->id = initId();
  }
  ~CardList() {}
  
  void addCard(Card card);
  void showCards();

  int getCardsNumber();
  int getId();
};

class Deck : public CardList {

public:
  Deck(std::string name) :CardList(name) {}
  ~Deck() {}

};

#endif /*DECK_H_*/
