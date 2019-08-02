#include "includes.h"

int    main()
{
  Card *card = new Card("nom", 2);
  std::cout << card->getName() << std::endl;
  std::cout << card->getLevel() << std::endl;
}
