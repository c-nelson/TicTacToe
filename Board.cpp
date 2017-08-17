/************************************************************
 * Author: Christian Nelson
 * Date: August 7, 2017
 *
 * Description: Assignment 9
 * This is the implementation file for the class Board
 ************************************************************/
#include <iostream>
#include "Board.hpp"

/************************************************************
*                       Board::Board
* This is the default constructor. It sets all boardTable's
* values to the period (.) char value.
*************************************************************/
Board::Board()
{
    for (int i = 0; i < 3; i++)
        for (int k = 0; k < 3; k++)
            boardTable[i][k] = '.';      // period code
    
}

/************************************************************
 *               Board::makeMove(int, int, char)
 * This method takes the X and Y coordinates, and the current
 * player's turn as parameters and assigns the values to
 * boardTable according. It returns false if the array position
 * is already taken and true if the assignment was made.
 *************************************************************/
bool Board::makeMove(int xIn, int yIn, char turn)
{
    // if array value is not empty
    if (boardTable[xIn][yIn] != '.')
    {
        return false;
    }
    // if array is empty
    else
    {
        if (turn == 'x')
        {
            boardTable[xIn][yIn] = 'x';
        }
        if (turn == 'o')
        {
            boardTable[xIn][yIn] = 'o';
        }
        
        return true;
    }
}

/************************************************************
 *                       Board::gameState
 * This function returns the enum values of X_WON (if there are
 * three x's in a row), O_WON (if there are three o's in a row),
 * DRAW (if there is neither has three in a row), or UNFINISHED
 * (if there are still moves to be made).
 *************************************************************/
state Board::gameState()
{
    // if all first row is 'x'
    if (boardTable[0][0] == 'x' && boardTable[0][1] == 'x' && boardTable [0][2] == 'x')
        return X_WON;
    // if all second row is 'x'
    if (boardTable[1][0] == 'x' && boardTable[1][1] == 'x' && boardTable [1][2] == 'x')
        return X_WON;
    // if all third row is 'x'
    if (boardTable[2][0] == 'x' && boardTable[2][1] == 'x' && boardTable [2][2] == 'x')
        return X_WON;
    // if all first column is 'x'
    if (boardTable[0][0] == 'x' && boardTable[1][0] == 'x' && boardTable [2][0] == 'x')
        return X_WON;
    // if all second column is 'x'
    if (boardTable[0][1] == 'x' && boardTable[1][1] == 'x' && boardTable [2][1] == 'x')
        return X_WON;
    // if all third column is 'x'
    if (boardTable[0][2] == 'x' && boardTable[1][2] == 'x' && boardTable [2][2] == 'x')
        return X_WON;
    // if all diagonal '\' is 'x'
    if (boardTable[0][0] == 'x' && boardTable[1][1] == 'x' && boardTable [2][2] == 'x')
        return X_WON;
    // if all diagonal '/' is 'x'
    if (boardTable[0][2] == 'x' && boardTable[1][1] == 'x' && boardTable [2][0] == 'x')
        return X_WON;
    
    // if all first row is 'o'
    if (boardTable[0][0] == 'o' && boardTable[0][1] == 'o' && boardTable [0][2] == 'o')
        return O_WON;
    // if all second row is 'o'
    if (boardTable[1][0] == 'o' && boardTable[1][1] == 'o' && boardTable [1][2] == 'o')
        return O_WON;
    // if all third row is 'o'
    if (boardTable[2][0] == 'o' && boardTable[2][1] == 'o' && boardTable [2][2] == 'o')
        return O_WON;
    // if all first column is 'o'
    if (boardTable[0][0] == 'o' && boardTable[1][0] == 'o' && boardTable [2][0] == 'o')
        return O_WON;
    // if all second column is 'o'
    if (boardTable[0][1] == 'o' && boardTable[1][1] == 'o' && boardTable [2][1] == 'o')
        return O_WON;
    // if all third column is 'o'
    if (boardTable[0][2] == 'o' && boardTable[1][2] == 'o' && boardTable [2][2] == 'o')
        return O_WON;
    // if all diagonal '\' is 'o'
    if (boardTable[0][0] == 'o' && boardTable[1][1] == 'o' && boardTable [2][2] == 'o')
        return O_WON;
    // if all diagonal '/' is 'o'
    if (boardTable[0][2] == 'o' && boardTable[1][1] == 'o' && boardTable [2][0] == 'o')
        return O_WON;
    
    // check all values, if any is still a period return UNFINISHED
    // placed after all the if functions so it will be checked after
    for (int i = 0; i < 3; i++)
        for (int k = 0; k < 3; k++)
        {
            if (boardTable[i][k] == 46)
                return UNFINISHED;
        }
    
    // if none of the above are true return DRAW
    return DRAW;
}


/************************************************************
 *                    Board::print()
 * This prints a table of the current game board
 *************************************************************/
void Board::print()
{
    std::cout << "  0 1 2" << std::endl;
    std::cout << "0 " << boardTable[0][0] << " " << boardTable[0][1] << " " << boardTable[0][2] << std::endl;
    std::cout << "1 " << boardTable[1][0] << " " << boardTable[1][1] << " " << boardTable[1][2] << std::endl;
    std::cout << "2 " << boardTable[2][0] << " " << boardTable[2][1] << " " << boardTable[2][2] << std::endl;
}














