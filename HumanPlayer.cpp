#include "HumanPlayer.h"
#include <iostream>

using namespace std;

HumanPlayer::HumanPlayer() {
  string name1;
  cin >> name1;
  this->setName(name1);
}

int HumanPlayer::move() {
  int move;
  cin >> move;
  return move;
}

string HumanPlayer::getName() {
  return this->name;
}
