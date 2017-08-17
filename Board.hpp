/************************************************************
 * Author: Christian Nelson
 * Date: August 7, 2017
 *
 * Description: Assignment 9
 * This is the header file for the class Board
 ************************************************************/

#ifndef BOARD_HPP
#define BOARD_HPP

// enum value used to represent the state of the
// tic tac toe array
enum state {X_WON, O_WON, DRAW, UNFINISHED};

class Board
{
private:
    char boardTable[3][3];          // array used to represent a tic tac toe table
    
public:
    Board();                        // default constructor
    bool makeMove(int, int, char);  // method used to change values in array
    state gameState();              // method used to give current state of table
    void print();                   // method used to visualize tic tac toe table
};



#endif
