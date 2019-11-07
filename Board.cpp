#include "Board.h"
#include <iostream>

using namespace std;

Board::Board() {
  for(int i = 0; i < 6; i++) {
    for(int j = 0; j < 7; j++) {
      boardArray[i][j] = '_';
    }
  }
}

Board::~Board() {
}

void Board::printBoard() {
  for(int i = 0; i < 6; i++) {
    cout << endl;
    cout << "|";
    for(int j = 0; j < 7; j++) {
      cout << this->getSpace(i,j) << "|";
    }
  }
  cout << endl;
}


char Board::getSpace(int i, int j) {
  return boardArray[i][j];
}

char Board::p1Game(int move) {
  if (move > 0 && move < 8) {
    for (int i = 6; i >= 0; i--) {
      if (boardArray[i][move-1] == '_') {
	boardArray[i][move-1] = 'X';
	return boardArray[6][7];
      }
    }
  }
  return boardArray[6][7];
}

char Board::p2Game(int move) {
  if (move > 0 && move < 8) {
    for (int i = 6; i >= 0; i--) {
      if (boardArray[i][move-1] == '_') {
	boardArray[i][move-1] = 'O';
	return boardArray[6][7];
      }
    }
  }
  return boardArray[6][7];
}

