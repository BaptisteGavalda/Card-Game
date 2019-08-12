#ifndef CARDS_H_
# define CARDS_H_

#include "includes.h"

class    Card
{
private:
  std::string    name;
  int            id;
  int            level;

public:
  Card(std::string name, int level)
  {
    this-> name = name;
    this-> level = level;
    //    this-> id = getNewId();
  }
  ~Card() {}

  std::string getName();
 
  int getId();

  int getLevel();
};

class    Unit : public Card
{
private:
  int    attack;
  int    defence;
  int    mouvement;

public:
  Unit(std::string name, int level, int attack, int defence, int mouvement) : Card(name, level) {
    this->attack = attack;
    this->defence = defence;
    this->mouvement = mouvement;
  }
  ~Unit(){}
};

class    Effect : public Card
{
private:
  std::string    effect;

public:
  Effect(std::string name, int level, std::string effect) : Card(name, level) {
    this->effect = effect;
  }
  ~Effect(){}
};

#endif /* CARDS_H_ */
