#include "includes.h"

int    main()
{
  Card *card = new Card("nom", 2);
  Player *player = new Player();
  std::cout << card->getName() << std::endl;
  std::cout << card->getLevel() << std::endl;
  std::cout << player->getLifePoint() << std::endl;
}
