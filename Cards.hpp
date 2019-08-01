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

  getName() {
    return (this->name);
  }

  getId() {
    return (this->id);
  }

  getLevel() {
    return (this->level);
}

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
}

class    Effect : public Card
{

}
