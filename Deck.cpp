#include "Deck.hpp"

void Deck::addCard(Card card) {
  this->cardsList.push_back(card);
}

void Deck::showCards() {
  for (std::vector<Card>::iterator it=this->cardsList.begin(); it != this->cardsList.end(); ++it)
    std::cout << it->getName() << " " << it->getLevel() << std::endl;
}

int Deck::getCardsNumber() {
  int card_nb;

  card_nb = 0;
  for (std::vector<Card>::iterator it=this->cardsList.begin(); it != this->cardsList.end(); ++it)
    card_nb++;
  return (card_nb);
}

int Deck::getId() {
  return (this->id);
}
