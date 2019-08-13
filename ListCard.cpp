#include "ListCard.hpp"

void CardList::addCard(Card card) {
  this->cardsList.push_back(card);
}

void CardList::showCards() {
  for (std::vector<Card>::iterator it=this->cardsList.begin(); it != this->cardsList.end(); ++it)
    std::cout << it->getName() << " " << it->getLevel() << std::endl;
}

int CardList::getCardsNumber() {
  int card_nb;

  card_nb = 0;
  for (std::vector<Card>::iterator it=this->cardsList.begin(); it != this->cardsList.end(); ++it)
    card_nb++;
  return (card_nb);
}

int CardList::getId() {
  return (this->id);
}
