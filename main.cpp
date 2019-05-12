#include <iostream>
#include "Board.h"
#include "Puyo_Pair.h"
#include "include/sl.h"

//Converts x or y coordinate to px for SIGIL renderer
int xToPx(int c)
{
    return (c * 25) + 25;
}

int yToPx(int c)
{
    return 275 - (c * 25);
}

//Draws board in a SIGIL window
void drawBoard(Board b)
{
    for(int i = 0; i < 12; ++i)
    {
        for(int j = 0; j < 6; ++j)
        {
            int pX = xToPx(j);
            int pY = yToPx(i);
            slSetForeColor(b.board[i][j][0], b.board[i][j][1], b.board[i][j][2], 1.0);
            slRectangleFill(pX, pY, 25, 25);
        }
    }
}

int main()
{
    slWindow(175, 275, "Puyo", false);

    Board test;
    Puyo_Pair pp(1.0, 0.0, 0.0, 0.0, 1.0, 0.0);
    pp.head.posX = 2;
    pp.head.posY = 4;
    pp.tail.posX = 1;
    pp.tail.posY = 4;

    //pp.rotate_clock();
    pp.translate(0, 1);
    std::cout << pp.tail.posX << ", " << pp.tail.posY << "\n";

    test.board[pp.head.posY][pp.head.posX][0] = pp.head.r;
    test.board[pp.head.posY][pp.head.posX][1] = pp.head.g;
    test.board[pp.head.posY][pp.head.posX][2] = pp.head.b;
    test.board[pp.tail.posY][pp.tail.posX][0] = pp.tail.r;
    test.board[pp.tail.posY][pp.tail.posX][1] = pp.tail.g;
    test.board[pp.tail.posY][pp.tail.posX][2] = pp.tail.b;test.board[pp.head.posY][pp.head.posX][0] = pp.head.r;
    test.board[pp.head.posY][pp.head.posX][1] = pp.head.g;
    test.board[pp.head.posY][pp.head.posX][2] = pp.head.b;

    while(!slShouldClose() && !slGetKey(SL_KEY_ESCAPE))
    {
        drawBoard(test);
        slRender();
    }
    slClose();
}
