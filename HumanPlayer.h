#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

#include "Player.h"

/*
 *This class is a sub-class of Player and represents a
 *human player in a game of connect four.
 */
class HumanPlayer : public Player {
public:
/*
 *Constructor for the HumanPlayer class.
 *Takes in user input for the name and sets the name appropriately.
 */
  HumanPlayer();
    
/*
 *Takes in user input for the move that the player
 *wishes to make and returns it.
 */
  int move();

/*
 *Returns the name of the player.
 */
  string getName();
};

#endif
