#include "Puyo.h"

//Class representing a pair of puyo blobs, which fall together
class Puyo_Pair
{
    public:
        Puyo head;
        Puyo tail;
        void rotate_clock();
        void rotate_ccw();
        void translate(int, int);
        Puyo_Pair(double, double, double, double, double, double );
};
