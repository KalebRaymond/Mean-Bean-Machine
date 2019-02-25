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
    this->tail.posX -= this->head.posX;
    this->tail.posY -= this->head.posY;

    int oldX = this->tail.posX;
    this->tail.posX = -1 * this->tail.posY;
    this->tail.posY = oldX;

    this->tail.posX += this->head.posX;
    this->tail.posY += this->head.posY;
}
