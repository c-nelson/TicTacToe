/************************************************************
 * Author: Christian Nelson
 * Date: August 7, 2017
 *
 * Description: Assignment 9
 * This is the implementation file for the class TicTacToe
 ************************************************************/
#include <iostream>
#include "TicTacToe.hpp"

/************************************************************
 *                  TicTacToe::TicTacToe(char)
 * Constructor who parameter is used to intialize playTurn
 *************************************************************/
TicTacToe::TicTacToe(char turn)
{
    playTurn = turn;
}

/************************************************************
 *                  TicTacToe::play()
 * Method used to start and loop through a tic tac toe game
 * until X or O has won or a draw.
 *************************************************************/
void TicTacToe::play()
{
    // display empty board
    std::cout << std::endl;
    cBoard.print();
    
    // loop while game is unfinished
    while((cBoard.gameState()) == UNFINISHED)
    {
        // used to store the current turns x and y
        int currentX, currentY;
        
        // if current turn is x
        if (playTurn == 'x' || playTurn == 'X')
        {
            // get and store the move for x
            std::cout << "\nPlayer X: please enter your move." << std::endl;
            std::cin >> currentX >> currentY;
            // test for invalid coordinates, and get new ones
            while (currentX < 0 || currentX > 2 || currentY < 0 || currentY > 2)
            {
                std::cout << "Select coordinates between 0 and 2." << std::endl;
                std::cin >> currentX >> currentY;
            }
            // while makeMove is false, get new coordinates
            while (!(cBoard.makeMove(currentX, currentY, 'x')))
            {
                std::cout << "That square is taken, select another." << std::endl;
                std::cin >> currentX >> currentY;
            }
            // change turn to o
            playTurn = 'o';
            
            // display board
            std::cout << std::endl;
            cBoard.print();
        }
        // if current turn is o
        else if (playTurn == 'o' || playTurn == 'O')
        {
            // get and store the move for y
            std::cout << "\nPlayer O: please enter your move." << std::endl;
            std::cin >> currentX >> currentY;
            // test for invalid coordinates, and get new ones
            while (currentX < 0 || currentX > 2 || currentY < 0 || currentY > 2)
            {
                std::cout << "Select coordinates between 0 and 2." << std::endl;
                std::cin >> currentX >> currentY;
            }
            // while makeMove is false, get new coordinates
            while (!(cBoard.makeMove(currentX, currentY, 'o')))
            {
                std::cout << "That square is taken, select another." << std::endl;
                std::cin >> currentX >> currentY;
            }
            // change turn to x
            playTurn = 'x';
            
            // display board
            std::cout << std::endl;
            cBoard.print();
        }
        
    }
    
    // display results
    if (cBoard.gameState() == X_WON)
        std::cout << "\nX won" << std::endl;
    else if (cBoard.gameState() == O_WON)
        std::cout << "\nO won" << std::endl;
    else if (cBoard.gameState() == DRAW)
        std::cout << "\nDraw" << std::endl;
    else
        std::cout << "\nUnfinished" << std::endl;
}

int main()
{
    // variable to pass to a tic tac toe object
    char turn;
    
    // get value from user
    std::cout << "Who is first? X or O: " << std::endl;
    std::cin >> turn;
    
    // while value is not valid, get a new value
    while (turn != 'x' && turn != 'X' && turn != 'o' && turn && turn != 'O')
    {
        std::cout << "Please enter X or O for first turn:" << std::endl;
        std::cin >> turn;
    }
    // pass turn to tictactoe's constructor
    TicTacToe game(turn);
    // call play() on game
    game.play();
    
    return 0;
}
