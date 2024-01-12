#include <iostream>
#include "euler.h"
#include <cmath>

// square = 0; square45 = 1, tri30 = 2; tri60 = 3

cEulerNumber::cEulerNumber(int x, float y, float z)
{
    pattern = x;
    pitch = y;
    diameter = z;
}

float cEulerNumber::eulerNumberCalculation(float Re){
    // TODO: finish this and return Euler number
    float Eu = 1.0;
    return Eu;
}

// TODO: write checkBoundary() desc
bool cEulerNumber::checkBoundary(float Re)
{
    float checkBoundary_A = calculate_a();
    float checkBoundary_B = calculate_b();
    if (pattern == TRIANGULAR || pattern == SQUARE45){
        checkStaggeredBoundary(checkBoundary_A, checkBoundary_B, Re);
    }
    if (pattern == SQUARE || pattern == TRIANG60){
        checkSquareBoundary(checkBoundary_A, checkBoundary_B, Re);
    }
    // TODO: return a value
    return false; // TEMP REMOVE WHEN COMPLETE
}

float cEulerNumber::calculate_a()
{
    float a;
    if (pattern == SQUARE)
    {
        a = pitch/diameter;
    }
    if (pattern == SQUARE45)
    {
        a = 1.414f*pitch/diameter;
    }
    if (pattern == TRIANGULAR)
    {
        a = pitch/diameter;
    }
    if (pattern == TRIANG60)
    {
        a = 0.866f*pitch/diameter;
    }
    return a;
}

float cEulerNumber::calculate_b()
{
    float b;
    if (pattern == SQUARE)
    {
        b = pitch/diameter;
    }
    if (pattern == SQUARE45)
    {
        b = 0.707f*pitch/diameter;
    }
    if (pattern == TRIANGULAR)
    {
        b = 0.866f*pitch/diameter;
    }
    if (pattern == TRIANG60)
    {
        b = pitch/diameter;
    }
    return b;
}

bool cEulerNumber::checkStaggeredBoundary(float a, float b, float Re){
    float abValue = a / b;
    bool return_value = true;
    if (pattern == TRIANGULAR || pattern == SQUARE45) //boundary check: staggered
    {
        //checking for a/b vs. k1 graph:
        if(Re < 100) //assume it's just 1
        {
            //if a/b > 1.25 and Re < 100 it's out of bounds b/c no data for this region
            if (abValue > 1.25 || abValue <= 0.5) //not sure of lower bound for 100
            {
                return_value = false;
            }
        }
        else if (Re <= 1000)
        {
            if (abValue <= 0.5 || abValue >= 3.5) //lower bound for 1000 unsure of lower bound for 100
            {
                return_value = false;
            }
        }
        else if (Re <= 1000000) //1000 is undefined for 1.2-1.25- still calculate for 1000 & interpolate
        {
            if (abValue <= 0.45 || abValue >= 3.5)
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
    return return_value;
}

bool cEulerNumber::checkSquareBoundary(float a, float b, float Re){
    // TODO: finish this
}

float cEulerNumber::k1Square(float a, float b, float Re) {
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
    //TODO: linear interpolation w/ k1_1 & k1_2
    return 0;
}

float cEulerNumber::k1Staggered(float a, float b, float Re)
{
    float a_b = a/b;
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
}

int main()
{

};
