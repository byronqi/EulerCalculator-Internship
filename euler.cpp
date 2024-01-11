#include <iostream>
#include "euler.h"
#include <math.h>

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
                    if (a_b <= 0.5 || a_b >= 3.5) //lower bound for 1000 unsure of lower bound for 100
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
                if(a < 1.25) // we don't have under 1.25.
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

                if(a > 2000000)
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
            float k1;
            float abCombined = (a-1)/(b-1);
            if (Re == 1000)
            {
                k1 = 1.009f* pow(abCombined,-0.744);
                return k1;
            }
            if (Re == 10000){
                k1 = 1.007f* pow(abCombined,-0.655);
                return k1;
            }
            if (Re == 100000){
                k1 = 1.004f* pow(abCombined, -0.539);
                return k1;
            }
            if (Re == 1000000){
                k1 = 1.218f - (0.297f*abCombined) + (0.0265* pow(abCombined, 2));
                return k1;
            }
            return 0;
        }
        float K1_staggered()
        {
            float k1;
            float k1_1;
            float k1_2;
            if (Re < 100)
            {
                k1 = 1;
                return k1;
            }
            else if (Re < 1000)
            {
                if (a_b <= 1.25)
                {
                    k1_1 = 1;
                    k1_2 = pow(a_b, -0.048f); //from eqn 53
                    if (k1_2 < 1)
                    {
                        k1_2 = 1;
                    }
                }
                else
                {
                    k1_1 = 0.93f*pow(a_b, 0.48); //from eqn 56
                    k1_2 = 0.951f*pow(a_b, 0.284f); //from eqn 57
                }
            }
            else if (Re < 10000)
            {
                if (a_b < 1.25)
                {
                    k1_1 = pow(a_b, -0.048f); //from eqn 53
                    if (k1_1 < 1)
                    {
                        k1_1 = 1;
                    }
                }
                else
                {
                    k1_1 = 0.951f*pow(a_b, 0.284f); //from eqn 57
                }
                k1_2 = 1.28 - 0.708/a_b + 0.55/pow(a_b, 2) - 0.113/pow(a_b, 3); //eqn 54
            }
            else if (Re < 100000)
            {
                k1_1 = 1.28 - 0.708f/a_b + 0.55/pow(a_b, 2) - 0.113f/pow(a_b, 3); //eqn 54
                k1_2 = 2.016f - 1.675f*a_b + 0.948f*pow(a_b, 2) - 0.234f*pow(a_b, 3) + 0.021f*pow(a_b, 4);
            }
            else if (Re < 1000000)
            {
                k1 = 2.016f - 1.675f*a_b + 0.948f*pow(a_b, 2) - 0.234f*pow(a_b, 3) + 0.021f*(a_b, 4);
                return k1;
            }
            //TODO: linear interpolation w/ k1_1 & k1_2
            k1 = -1; //for now
            return k1;
        };
};


int main()
{
    euler myEuler(1, 1., 2., 3.);
    myEuler.printme();
    return 1;
};
