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
        float a;
        float b;
        float calculate_a_and_b()
        {
            if (pattern == SQUARE)
            {
                a = pitch/diameter;
                b = pitch/diameter;
            }
            if (pattern == SQUARE45)
            {
                a = 1.414f*pitch/diameter;
                b = 0.707f*pitch/diameter;
            }
            if (pattern == TRIANGULAR)
            {
                a = pitch/diameter;
                b = 0.866f*pitch/diameter;
            }
            if (pattern == TRIANG60)
            {
                a = 0.866f*pitch/diameter;
                b = pitch/diameter;
            }
        }
        bool checkBoundary()
        {
            bool return_value = true;
            if (pattern == TRIANGULAR || pattern == SQUARE45) //boundary check: staggered
            {
                //checking for a/b vs. k1 graph
                float a_b = a/b;
                if(Re < 100)
                {
                    //if a/b > 1.2 it's out of bounds
                    if (a_b > 1.2)
                    {
                        return_value = false;
                    }
                }
                if(Re >= 100 && Re < 1000)
                {

                }
                if(Re >= 1000 && Re < 10000)
                {

                }
                if(Re >= 10000 && Re < 100000)
                {

                }
                if(Re >= 100000 && Re < 1000000)
                {

                }
                if(Re >= 1000000)
                {

                }
            }
            if (pattern == SQUARE || pattern == TRIANG60)
            {
                // check if Euler is reasonable
            }
            return return_value;
        }
        float calcK1Square(float a, float b, float Re) {
            if (Re == 1000)
            {

            }
            if (Re == 10000){

            }
            if (Re == 100000){

            }
            if (Re == 1000000){

            }
        };
    };



int main()
{
    euler myEuler(1, 1., 2., 3.);
    myEuler.printme();
    return 1;
};
