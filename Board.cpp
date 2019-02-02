#include <iostream>
#include "Board.h"

Board::Board()
{
    for(int i = 0; i < 12; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            this->board[i][j] = '-';
        }
    }
}

void Board::printBoard()
{
    for(int i = 0; i < 12; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            std::cout << this->board[i][j] << " ";
        }

        std::cout << "\n";
    }
}
