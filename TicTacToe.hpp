/************************************************************
 * Author: Christian Nelson
 * Date: August 7, 2017
 *
 * Description: Assignment 9
 * This is the header file for the class TicTacToe
 ************************************************************/
#include "Board.hpp"

#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

class TicTacToe
{
private:
    Board cBoard;
    char playTurn;
    
public:
    TicTacToe(char);            // default constructor
    void play();                // initialize a game
};

#endif
