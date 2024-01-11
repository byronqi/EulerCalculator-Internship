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
        bool check_boundary()
        {
            bool return_value = true;
            if (pattern == TRIANGULAR || pattern == SQUARE45) //boundary check: staggered
            {
                //checking for a/b vs. k1 graph:
                float a_b = a/b;
                if(Re < 100) //assume it's just 1
                {
                    //if a/b > 1.25 and Re < 100 it's out of bounds b/c no data for this region
                    if (a_b > 1.25 || a_b <= 0.5) //not sure of lower bound for 100
                    {
                        return_value = false;
                    }
                }
                if(Re >= 100 && Re <= 1000)
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
                if(Re > 1000 && Re <= 1000000) //1000 is undefined for 1.2-1.25- still calculate for 1000 & interpolate
                {
                    if (a_b <= 0.45 || a_b >= 3.5)
                    {
                        return_value = false;
                    }
                }
                if(Re > 1000000) // we don't have over 1E6.
                {
                    return_value = false;
                }

                //checking for Re vs Eu/k1 graph
                if(a <= 2 && a >= 1.25)
                {
                    if(Re < 2)
                    {
                        return_value = false;
                    }
                }
                if(a <= 2.5 && a > 2)
                {
                    if(Re < 7)
                    {
                        return_value = false;
                    }
                }
                if(a > 2.5) // we don't have under 2.
                {
                    return_value = false;
                }
            }
            else //boundary check: square
            {

            }
            return return_value;
        }
    };

int main()
{
    euler myEuler(1, 1., 2., 3.);
    myEuler.printme();
    return 1;
};
