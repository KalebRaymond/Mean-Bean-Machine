#include <iostream>
#include "Board.h"
#include "Puyo_Pair.h"

int main()
{
    Board test;
    Puyo_Pair pp('R', 'G');
    pp.head.posX = 2;
    pp.head.posY = 4;
    pp.tail.posX = 1;
    pp.tail.posY = 4;
    test.board[pp.head.posX][pp.head.posY = 4] = pp.head.color;
    test.board[pp.tail.posX][pp.tail.posY = 4] = pp.tail.color;
    test.printBoard();
}
