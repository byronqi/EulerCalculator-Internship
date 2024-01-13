#include <iostream>
#include "euler.h"
#include <cmath>
// Tri = 0, Tri60 = 1, Sq = 2, Sq45 = 3

//arrays for staggered, first declaring as all zeros w/ dummy lengths of 30. will change later.
// TODO: add actual values
float Re_staggered_a_1_25[30] = {};
float Eu_k1_staggered_a_1_25[30] = {};

float Re_staggered_a_1_5[30] = {};
float Eu_k1_staggered_a_1_5[30] = {};

float Re_staggered_a_2[30] = {};
float Eu_k1_staggered_a_2[30] = {};

float Re_staggered_a_2_5[30] = {};
float Eu_k1_staggered_a_2_5[30] = {};

// Square Arrays
float sq_xValuesForAll[]= {

};

cEulerNumber::cEulerNumber(int x, float y, float z)
{
    pattern = x;
    pitch = y;
    diameter = z;
}

float cEulerNumber::eulerNumberCalculation(float Re){
    // TODO: finish this and return Euler number
    if (pattern == TRIANGULAR || pattern == SQUARE45) //calculate for staggered.
    {
        float a = calculate_a();
        float a_values[4] = {1.25, 1.5, 2.0, 2.5};
        float Eu_k1_values[4] = {0,0,0,0}; //again not sure if I have to do this.

    }
    else if (pattern == SQUARE || pattern == TRIANG60) //calculate for square.
    {

    }
}

// TODO: write checkBoundary() description
bool cEulerNumber::checkBoundary(float Re)
{
    float checkBoundary_A = calculate_a();
    float checkBoundary_B = calculate_b();
    bool returnValue;
    if (pattern == TRIANGULAR || pattern == SQUARE45){
        returnValue = checkStaggeredBoundary(checkBoundary_A, checkBoundary_B, Re);
    }
    if (pattern == SQUARE || pattern == TRIANG60){
        returnValue = checkSquareBoundary(Re);
    }
    return returnValue;
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

bool cEulerNumber::checkSquareBoundary(float Re){
    bool returnValue = true;
    // TODO: finish this
    // if Re is less than 1000 or greater than 10^7 must extrapolate using slin()
    if (Re < 1000){
        returnValue = false;
        return returnValue;
    }
    if (Re < 10000000){
        returnValue = false;
        return returnValue;
    }
    else{
        return returnValue;
    }
}

bool cEulerNumber::checkStaggeredBoundary(float a, float b, float Re){
    float abValue = a / b;
    bool return_value = true;
    //checking for a/b vs. k1 graph:
    if(Re < 100)
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

    if(Re > 2000000)
    {
        return_value = false;
    }
    return return_value;
}

float cEulerNumber::k1Square(float a, float b, float Re) {
    float k1;
    float abCombined = (a-1)/(b-1);
    float ReValues[] = {1000, 10000, 100000, 10000000, 10000000};
    float getReValuesLength = sizeof(ReValues)/ sizeof(float);
    float k1Values[5];
    for (int i = 0; i > sizeof ReValues; i++){

    }

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
    float Re_values[5] = {100, 1000, 10000, 100000, 1000000};
    float k1_values[5] = {0,0,0,0,0}; //not sure if I have to do this.
    if (a_b <= 1.25)
    {
        k1_values[0] = 1;
        k1_values[1] = pow(a_b, -0.048f); //from eqn 53
    }
    else
    {
        k1_values[0] = 0.93f*pow(a_b, 0.48); //from eqn 56
        k1_values[1] = 0.951f*pow(a_b, 0.284f); //from eqn 57
    }
    k1_values[2] = 1.28 - 0.708f/a_b + 0.55/pow(a_b, 2) - 0.113f/pow(a_b, 3); //eqn 54
    k1_values[3] = 2.016f - 1.675f*a_b + 0.948f*pow(a_b, 2) - 0.234f*pow(a_b, 3) + 0.021f*pow(a_b, 4); //eqn 55
    k1_values[4] = 2.016f - 1.675f*a_b + 0.948f*pow(a_b, 2) - 0.234f*pow(a_b, 3) + 0.021f*pow(a_b, 4); //eqn 55

    for (int i = 0; i < 5; i++)
    {
        if (k1_values[i] < 1)
        {
            k1_values[i] = 1;
        }
    }
    float k1;
    float *x;
    x = &Re_values[0];
    float *y;
    y = &k1_values[0];
    //slin(Re, 5, x, y, &k1)
    return k1;
}

int main()
{

};
