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
            //test stuff
        }
    private:
        float a;
        float b;
        float a_b;
        void calculate_a_and_b()
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
            a_b = a/b;
        }
        bool checkBoundary()
        {
            bool return_value = true;
            if (pattern == TRIANGULAR || pattern == SQUARE45) //boundary check: staggered
            {
                //checking for a/b vs. k1 graph:
                if(Re < 100) //assume it's just 1
                {
                    //if a/b > 1.25 and Re < 100 it's out of bounds b/c no data for this region
                    if (a_b > 1.25 || a_b <= 0.5) //not sure of lower bound for 100
                    {
                        return_value = false;
                    }
                }
                else if (Re <= 1000)
                {
                    if (a_b <= 0.5) //lower bound for 1000 unsure of lower bound for 100
                    {
                        return_value = false;
                    }
                    if (a_b > 1.2 && a_b < 1.25) //both undefined
                    {
                        return_value = false;
                    }
                    if (a_b >= 3.5) //upper for both
                    {
                        return_value = false;
                    }
                }
                else if (Re <= 1000000) //1000 is undefined for 1.2-1.25- still calculate for 1000 & interpolate
                {
                    if (a_b <= 0.45 || a_b >= 3.5)
                    {
                        return_value = false;
                    }
                }
                else // we don't have over 1E6.
                {
                    return_value = false;
                }

                //checking for Re vs Eu/k1 graph
                if(a < 1.25) // we don't have under 2.
                {
                    return_value = false;
                }
                else if(a <= 2)
                {
                    if(Re < 2)
                    {
                        return_value = false;
                    }
                }
                else if(a <= 2.5)
                {
                    if(Re < 7)
                    {
                        return_value = false;
                    }
                }
                else
                {
                    return_value = false;
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
        float K1_staggered()
        {
            float k1;
            if (Re < 100)
            {
                if (a_b < 1.2)
                {
                    k1 = 1;
                }
            }
        }
    };

int main()
{
    euler myEuler(1, 1., 2., 3.);
    myEuler.printme();
    return 1;
};
