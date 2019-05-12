#include "Puyo.h"
Puyo::Puyo()
{
    this->r = 1.0;
    this->g = 1.0;
    this->b = 1.0;
}

Puyo::Puyo(double red, double green, double blue)
{
    this->r = red;
    this->g = green;
    this->b = blue;
}
