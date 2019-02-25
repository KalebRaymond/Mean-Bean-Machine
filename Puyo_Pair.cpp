#include "Puyo_Pair.h"
#include <cmath>
#define PI 3.14159265

Puyo_Pair::Puyo_Pair(char hColor, char tColor)
{
    this->head.color = hColor;
    this->tail.color = tColor;
}

void Puyo_Pair::rotate_clock()
{
    //Boundary checks
    this->tail.posX -= this->head.posX;
    this->tail.posY -= this->head.posY;

    int oldX = this->tail.posX;
    this->tail.posX = this->tail.posY;
    this->tail.posY = -1 * oldX;

    this->tail.posX += this->head.posX;
    this->tail.posY += this->head.posY;
}

void Puyo_Pair::rotate_ccw()
{
    //Boundary checks
    this->tail.posX -= this->head.posX;
    this->tail.posY -= this->head.posY;

    int oldX = this->tail.posX;
    this->tail.posX = -1 * this->tail.posY;
    this->tail.posY = oldX;

    this->tail.posX += this->head.posX;
    this->tail.posY += this->head.posY;
}

//dx: -1 = left, +1 = right
//dY: -1 = up,   +1 = down
void Puyo_Pair::translate(int dX, int dY)
{
    //Add boundary checks
    this->head.posX += dX;
    this->head.posY += dY;
    this->tail.posX += dX;
    this->tail.posY += dY;
}
