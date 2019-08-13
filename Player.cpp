#include "Player.hpp"

int Player::getLifePoint() {
  return (this->life_points);
}

int Player::getId() {
  return (this->id);
}

int Player::drawCard() {
  if (this->deck.size() != 0)
    {
      this->hand.push_back(this->deck.back());
      this->deck.pop_back();
      return (0);
    }
  return (1);
}
