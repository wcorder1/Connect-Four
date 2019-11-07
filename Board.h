#ifndef BOARD_H
#define BOARD_H

/*
 *This class represents a playing board of connect four.
 */
class Board {
public:
  char boardArray[6][7];
/*
 *Constructor for the Board class. Populatues the array used 
 *to store the board values with underscores, which represents an empty space
 *on the board.
 */
  Board();
/*
 *Deconstructor for Board class.
 */
  ~Board();
/*
 *Prints the current state of the board to output.
 */
  void printBoard();
/*
 *Returns char located at specified index in the board array.
 */
  char getSpace(int i, int j);

/*
 *Handles the placement of the correct token into the
 *correct space on the board for player 1.
 */
  char p1Game(int move);

/*
 *Handles the placement of the correct token into the 
 *correct space on the board for player 2.
 */
  char p2Game(int move);
};

#endif

