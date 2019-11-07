#include <iostream>
#include "Board.h"
#include "Player.h"
#include "HumanPlayer.h"
#include "SimpleComputerPlayer.h"

using namespace std;

/*
 *Handles a game loop for a Human vs Human game.
 */
void hvh();

/*
 *Handles a game loop for a Computer vs Computer game.
 */
void cvc();

/*
 *Handles game loop for a Human vs Computer game
 */
void hvc();

/*
 *Handles game loop for a Computer vs Human game.
 */
void cvh();

/*
 *Checks board to see if there is a winning configuration
 */
bool isWin(char boardArray[6][7]);

/*
 *Checks for 4 continous tokens in a specified direction.
 */
bool winCheck(char arrayBoard[6][7], int row, int col, int stepRow, int stepCol);

/*
 *Main method for running connect four game.
 *Evaluates command line arguments to determine the opponents of game.
 */
int main(int argc, char* argv[]) {

  string a1 = argv[1];
  string a2 = argv[2];

  cout << "Let's Start a Game of Connect 4" << endl << endl;
  
  if (a1 == "-h" && a2 == "-h") { hvh(); }
  if (a1 == "-c" && a2 == "-c") { cvc(); }
  if (a1 == "-h" && a2 == "-c") { hvc(); }
  if (a1 == "-c" && a2 == "-h") { cvh(); }

  return 0;
}

void hvh() {
  int count = 0;
  bool gameOver = false;
  //Creating player objects
  cout << "Player One, please enter your name: ";
  HumanPlayer *p1 = new HumanPlayer;
  cout << "Player Two, please enter your name: ";
  HumanPlayer *p2 = new HumanPlayer;
  
  Board *b1 = new Board;
  b1->printBoard();

  //Loop for game
  while (count < 42 && gameOver == false) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p1Game(p1->move());
    b1->printBoard();
    if(isWin(b1->boardArray)) {
        cout << p1->getName() << " Connected Four and Wins!" << endl;
        gameOver = true;
    }
    count++;
    //If statement prevents loop from continuing after a win
    if(gameOver != true) {
      cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
      b1->p2Game(p2->move());
      b1->printBoard();
      if(isWin(b1->boardArray)) {
          cout << p2->getName() << " Connected Four and Wins!" << endl;
          gameOver = true;
      }    
  
      count++; 
    }
    if (count == 42) {
      cout << endl << "The board is full, it is a draw!" << endl;
    }
  }
  delete (b1); delete (p1); delete (p2);
}

void cvc() {
  int count = 0;
  bool gameOver = false;
  //Creating player objects
  SimpleComputerPlayer *p1 = new SimpleComputerPlayer;
  SimpleComputerPlayer *p2 = new SimpleComputerPlayer;
  cout << "Player One, please enter your name: ";
  p1->assignName();
  cout << "Player Two, please enter your name: ";
  p2->assignName();

  Board *b1 = new Board();
  b1->printBoard();
  //Loop for game
  while (count < 42 && gameOver == false) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p1Game(p1->move(b1->boardArray));
    b1->printBoard();
    if(isWin(b1->boardArray)) {
        cout << p1->getName() << " Connected Four and Wins!" << endl;
        gameOver = true;
    }
    count++;
    if(gameOver != true) {
      cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
      b1->p2Game(p2->move(b1->boardArray));
      b1->printBoard();
      if(isWin(b1->boardArray)) {
          cout << p2->getName() << " Connected Four and Wins!" << endl;
          gameOver = true;
      }    
  
      count++;
    }
    
    if (count == 42) {

        cout << endl << "The board is full, it is a draw!" << endl;
    }
  }  
  delete (b1); delete (p1); delete (p2);
}

void hvc() {
  int count = 0;
  bool gameOver = false;
  SimpleComputerPlayer *p2 = new SimpleComputerPlayer;
  cout << "Player One, please enter your name: ";
  HumanPlayer *p1 = new HumanPlayer;
  cout << "Player Two, please enter your name: ";
  p2->assignName();

  Board *b1 = new Board();
  b1->printBoard();
  
  //Loop for game
  while (count < 42 && gameOver == false) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p1Game(p1->move());
    b1->printBoard();
    if(isWin(b1->boardArray)) {
        cout << p1->getName() << " Connected Four and Wins!" << endl;
        gameOver = true;
    }    

    count++;
    if(gameOver != true) {
      cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
      b1->p2Game(p2->move(b1->boardArray));
      b1->printBoard();
      if(isWin(b1->boardArray)) {
          cout << p2->getName() << " Connected Four and Wins!" << endl;
          gameOver = true;
      }
      count++;
    }
    if (count == 42) {
      cout << endl << "The board is full, it is a draw!" << endl;
    }
  }
  delete (b1); delete (p1); delete (p2);
}

void cvh() {
  int count = 0;
  bool gameOver = false;
  //Creating player objects
  SimpleComputerPlayer *p1 = new SimpleComputerPlayer;
  cout << "Player One, please enter your name: ";
  p1->assignName();
  cout << "Player Two, please enter your name: ";
  HumanPlayer *p2 = new HumanPlayer;

  Board *b1 = new Board();
  b1->printBoard();

  //Loop for game
  while (count < 42 && gameOver == false) {
    cout << p1->getName() << "'s turn, Please enter an integer between 1 and 7: ";
    b1->p2Game(p1->move(b1->boardArray));
    b1->printBoard();
    if(isWin(b1->boardArray)) {
        cout << p1->getName() << " Connected Four and Wins!" << endl;
        gameOver = true;
    }
    count++;
    if(gameOver!= true) {
      cout << p2->getName() << "'s turn, Please enter an integer between 1 and 7: ";
      b1->p1Game(p2->move());
      b1->printBoard();
      if(isWin(b1->boardArray)) {
          cout << p2->getName() << " Connected Four and Wins!" << endl;
          gameOver = true;
      }
      count++;
    }
    if (count == 42) {
      cout << endl << "The board is full, it is a draw!" << endl;
    }
  }
  delete (b1); delete (p1); delete (p2);
}

bool winCheck(char arrayBoard[6][7], int row, int col, int stepRow, int stepCol) {
  char start = arrayBoard[row][col];
  //prevents from checking empty spaces
  if(start == '_') {
      return false;
  }
  for(int i = 0; i < 4; i++) {
      if(arrayBoard[row + i * stepRow][col + i * stepCol] != start) {
          return false;
      }
  }
  return true;
}



bool isWin(char arrayBoard[6][7]) {
    //cout << "Checking for win..." << endl;
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 7; j++){
            if(winCheck(arrayBoard, i, j, 0, 1) || //Horizontal
               winCheck(arrayBoard, i, j, 1, 0) || //Vertical
               winCheck(arrayBoard, i, j, 1, 1) || //UpDiagnol
               winCheck(arrayBoard, i, j, 1, -1)){ //DownDiagnol
               
                return true;
            }
        }
    }
    return false;
}

