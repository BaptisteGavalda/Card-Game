#include "includes.h"

int    main()
{
  Card *card = new Card("test1", 1);
  Card *card1 = new Card("test2", 0);
  Card *card2 = new Card("test3", 2);
  Deck *deck = new Deck("test");

  deck->addCard(*card);
  deck->addCard(*card1);
  deck->addCard(*card2);
  deck->showCards();
}
