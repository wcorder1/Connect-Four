#include <iostream>
#include <string>
#include "Player.h"

using namespace std;

Player::Player() {
    name = "Zoey";
}

Player::~Player() {
}

void Player::setName(string name1) {
  name = name1;
}

string Player::getName() {
    return this->name;
}

/*
bool Player::winCheck(char arrayBoard[6][7], int row, int col, int stepRow, int stepCol) {
  char start = arrayBoard[row][col];
  if(start == '_') {
    return false;
  }
  for(int i = 0; i < 3; i++) {
      if(arrayBoard[row + i * stepRow][col + i * stepCol] != start) {
          return false;
      }
  }
  return true;
}
*/

void Player::assignName() {
  cout << name << endl;
}

int Player::move() {
  int move;
  cin >> move;
  return move;
}
