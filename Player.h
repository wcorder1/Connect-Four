#ifndef PLAYER_H
#define PLAYER_H
#include <string>

using namespace std;
/*The Player class represents a player in the connect four game.
 *It is a parent class of two sub classes, HumanPLayer and Simple
 *ComputerPlayer, which represent different types of players in
 *any given instance of the game.
 */
class Player {
protected:
  string name;
public:
    
/*
 *Constructor for the Player class.
 *Assigns default name of Zoey.
 */
  Player();
    
/*
 *Deconstructor for the Player class.
 */
  virtual ~Player();
    
/*
 *Returns the name of the Player object
 */
  virtual string getName();
    
/*
 *Sets the name of the Player object to the given 
 *string value.
 */
  void setName(string name1);

/*
 *Prints the name of the Player object
 */
  void assignName();
/*
 *Takes in user input and returns the desired move.
 */
  int move();    
};




#endif
