#include "Player.hpp"

int Player::getLifePoint() {
  return (this->life_points);
}

int Player::getId() {
  return (this->id);
}

int Player::drawCard() {
  if (this->deck.begin())
    {
      this->hand.push_back(this->deck.begin());
      this->deck.pop_front();
      return (0);
    }
  return (1);
}
