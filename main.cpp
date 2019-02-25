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

    //pp.rotate_clock();
    pp.translate(0, 1);
    std::cout << pp.tail.posX << ", " << pp.tail.posY << "\n";

    test.board[pp.head.posY][pp.head.posX] = pp.head.color;
    test.board[pp.tail.posY][pp.tail.posX] = pp.tail.color;
    test.printBoard();
}
