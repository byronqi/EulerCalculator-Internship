#include <iostream>
#include "euler.h"

// square = 0; square45 = 1, tri30 = 2; tri60 = 3
class euler
{
    public:
        int pattern;
        float pitch;
        float diameter;
        float Re;
        euler(int x, float y, float z, float j)
        {
            pattern = x;
            pitch = y;
            diameter = z;
            Re = j;
        }
        void printme(){
            std::cout << pattern;
        }
    private:
        float calculate_a_b()
        {
            float a;
            float b;
            if (pattern == SQUARE)
            {
                a = pitch/diameter;
                b = pitch/diameter;
            }
            if (pattern == SQUARE45)
            {
                a = 1.414*pitch/diameter;
                b = 0.707*pitch/diameter;
            }
            if (pattern == TRIANGULAR)
            {
                a = pitch/diameter;
                b = 0.866*pitch/diameter;
            }
            if (pattern == TRIANG60)
            {
                a = 0.866*pitch/diameter;
                b = pitch/diameter;
            }
        }
    };

int main()
{
    euler myEuler(1, 1., 2., 3.);
    myEuler.printme();
    return 1;
};
