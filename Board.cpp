#include <iostream>
#include "Board.h"


Board::Board()
{
    for(int i = 0; i < 12; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            this->board[i][j][0] = 1.0;
            this->board[i][j][1] = 1.0;
            this->board[i][j][2] = 1.0;
        }
    }
}

void Board::setColor(int x, int y, double r, double g, double b)
{
    this->board[y][x][0] = r;
    this->board[y][x][1] = g;
    this->board[y][x][2] = b;
}

/*void Board::printBoard()
{
    for(int i = 0; i < 12; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            std::cout << this->board[i][j] << " ";
        }

        std::cout << "\n";
    }
}*/
