#ifndef SIMPLEHUMANPLAYER_H
#define SIMPLEHUMANPLAYER_H

#include "Player.h"

/*
 *This class represents a computer player in a game of connect four.
 */
class SimpleComputerPlayer : public Player {
private:
  int moveCount = 0;
public:
/*
 *Constructor for the SimpleComputerPlayer class.
 *Sets default name to Zoey
 */
  SimpleComputerPlayer();
    
/*
 *Returns the name of the SimpleComputerPlayer object.
 */
  string getName();

/*
 *Prints the name of the SimpleComputerPlayer object.
 */
  void assignName();
/*
 *Handles the move of the Simple ComputerPlayer, wherein they
 *always choose the leftmost possible space.
 */
  int move(char boardArray[6][7]);
};

#endif
