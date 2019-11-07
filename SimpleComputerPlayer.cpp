#include "SimpleComputerPlayer.h"
#include "Board.h"
#include <iostream>

using namespace std;

SimpleComputerPlayer::SimpleComputerPlayer() {
  this->setName("Zoey"); 
}

void SimpleComputerPlayer::assignName() {
  cout << name << endl;
}

string SimpleComputerPlayer::getName() {
  return this->name;
}

int SimpleComputerPlayer::move(char boardArray[6][7]) {
  for (int i = 0; i < 7; i++) {
    for (int j = 6; j >= 0; j--) {
      if (boardArray[j][i] == '_') {
	cout << i+1;
	return i+1;
      }
    }
  }
  return 1;
}
