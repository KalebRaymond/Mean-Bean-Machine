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
    int sin = 1; //Sin(pi/2)
    this->tail.posX -= this->head.posX;
    this->tail.posY -= this->head.posY;

    this->tail.posX = -1 * this->tail.posY * sin;
    this->tail.posY = this->tail.posX * sin;

    this->tail.posX += this->head.posX;
    this->tail.posY += this->head.posY;
}

void Puyo_Pair::rotate_ccw()
{
    int sin = -1; //Sin(-pi/2)
    this->tail.posX -= this->head.posX;
    this->tail.posY -= this->head.posY;

    this->tail.posX = -1 * this->tail.posY * sin;
    this->tail.posY = this->tail.posX * sin;

    this->tail.posX += this->head.posX;
    this->tail.posY += this->head.posY;
}
