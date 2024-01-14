#include <iostream>
#include "euler.h"
#include <cmath>

//arrays for staggered, first declaring as all zeros w/ dummy lengths of 30. will change later.
//TODO: add actual values
float Re_staggered_a_1_25[]={
        4.014486f,
        6.056331f,
        7.965594f,
        9.782305f,
        19.87125f,
        39.50160f,
        59.68459f,
        80.41435f,
        101.1625f,
        201.5320f,
        401.8550f,
        608.4877f,
        821.0904f,
        1010.530f,
        2018.718f,
        4036.483f,
        5085.771f,
        6117.674f,
        7886.213f,
        9708.677f,
        19855.57f,
        39713.98f,
        61582.19f,
        79433.63f,
        102428.3f,
        195775.2f,
        410655.0f,
        608693.8f,
        803792.3f,
        1013362.0f,
};
float Eu_k1_staggered_a_1_25[] = {
        72.78995f,
        46.33061f,
        34.01516f,
        26.82138f,
        12.82645f,
        6.898975f,
        4.937175f,
        3.887464f,
        3.287443f,
        2.083496f,
        1.416660f,
        1.194582f,
        1.057551f,
        0.9825762f,
        0.7689819f,
        0.6456608f,
        0.6138944f,
        0.5841082f,
        0.5423104f,
        0.5158131f,
        0.4131108f,
        0.3550867f,
        0.3136813f,
        0.3052124f,
        0.2900923f,
        0.2677028f,
        0.2525389f,
        0.2451946f,
        0.2441455f,
        0.2432747f
};

float Re_staggered_a_1_5[] = {
        4.055853f,
        5.982282f,
        8.052626f,
        9.671620f,
        20.13785f,
        39.16290f,
        59.20924f,
        81.66886f,
        100.4494f,
        195.7089f,
        409.1295f,
        605.5008f,
        817.5626f,
        1006.188f,
        2057.792f,
        4022.851f,
        6100.764f,
        7869.253f,
        9690.778f,
        19825.06f,
        39592.03f,
        61393.08f,
        81020.93f,
        102082.4f,
        195114.0f,
        409645.8f,
        607384.8f,
        802310.4f,
        1011494.0f,
        2026869.0f,
};

float Eu_k1_staggered_a_1_5[] = {
        27.18803f,
        18.14214f,
        13.31490f,
        11.26782f,
        6.056304f,
        3.578977f,
        2.684181f,
        2.162838f,
        1.917476f,
        1.304242f,
        0.9507342f,
        0.8210020f,
        0.7617079f,
        0.7077069f,
        0.5667971f,
        0.4989190f,
        0.4730183f,
        0.4602476f,
        0.4481418f,
        0.3674253f,
        0.2808921f,
        0.2481382f,
        0.2357614f,
        0.2241620f,
        0.2068610f,
        0.2093594f,
        0.2080915f,
        0.2121152f,
        0.2113587f,
        0.2091052f
};

float Re_staggered_a_2[] = {
        7.874958f,
        9.672720f,
        20.11108f,
        39.10381f,
        59.12059f,
        79.75029f,
        100.3931f,
        195.9622f,
        400.6432f,
        606.5830f,
        799.7947f,
        1007.171f,
        2012.010f,
        3931.500f,
        5954.481f,
        7856.670f,
        9674.111f,
        19332.65f,
        38634.16f,
        59905.77f,
        79015.11f,
        99502.67f,
        194361.3f,
        407829.8f,
        591180.3f,
        781137.1f,
        985411.8f,
        1973409.0f
};
float Eu_k1_staggered_a_2[30] = {
        7.066946f,
        5.838178f,
        3.134279f,
        1.984402f,
        1.558176f,
        1.378250f,
        1.249612f,
        1.023080f,
        0.8368602f,
        0.7215012f,
        0.6535716f,
        0.6065823f,
        0.4963964f,
        0.4359242f,
        0.3847197f,
        0.3651735f,
        0.3552957f,
        0.2976310f,
        0.2493253f,
        0.2251405f,
        0.2087656f,
        0.1937562f,
        0.1662220f,
        0.1638441f,
        0.1704514f,
        0.1776448f,
        0.1853086f,
        0.1785992f,
};

float Re_staggered_a_2_5[] = {
        101.8910f,
        198.5177f,
        405.8710f,
        615.1360f,
        811.7999f,
        1022.828f,
        2048.321f,
        4006.799f,
        5049.923f,
        6076.421f,
        8019.100f,
        9649.142f,
        19752.03f,
        39494.74f,
        61242.21f,
        80796.98f,
        101800.2f,
        194335.5f,
        407509.7f,
        604217.5f,
        797881.2f,
        1029488.0f,
};
float Eu_k1_staggered_a_2_5[] = {
        0.9713363f,
        0.6606900f,
        0.5168832f,
        0.4676073f,
        0.4442835f,
        0.4224249f,
        0.3987817f,
        0.3678720f,
        0.3580680f,
        0.3487744f,
        0.3313779f,
        0.3227770f,
        0.2773417f,
        0.2328647f,
        0.2057111f,
        0.1909226f,
        0.1815292f,
        0.1525265f,
        0.1405533f,
        0.1397022f,
        0.1391045f,
        0.1385588f,
        0.1371305f,
};

// square = 0; square45 = 1, tri30 = 2; tri60 = 3

cEulerNumber::cEulerNumber(int x, float y, float z)
{
    pattern = x;
    pitch = y;
    diameter = z;
}

float cEulerNumber::eulerNumberCalculation(float Re){
    // TODO: finish this and return Euler number
    float Eu;
    float a = calculate_a();
    float b = calculate_b();
    if (pattern == TRIANGULAR || pattern == SQUARE45) //calculate for staggered.
    {
        float a_values[4] = {1.25, 1.5, 2.0, 2.5};
        float Eu_k1_values[4] = {0,0,0,0}; //again not sure if I have to do this.

        //calculate Eu_k1 using quafit & given Re value for each value of a
        //quafit(Re, &Eu_k1_values[0], sizeof(Re_staggered_a_1_25)/sizeof(Re_staggered_a_1_25[0]), Re_staggered_a_1_25, Eu_k1_staggered_a_1_25);
        //quafit(Re, &Eu_k1_values[1], sizeof(Re_staggered_a_1_5)/sizeof(Re_staggered_a_1_5[0]), Re_staggered_a_1_5, Eu_k1_staggered_a_1_5);
        //quafit(Re, &Eu_k1_values[2], sizeof(Re_staggered_a_2)/sizeof(Re_staggered_a_2[0]), Re_staggered_a_2, Eu_k1_staggered_a_2);
        //quafit(Re, &Eu_k1_values[3], sizeof(Re_staggered_a_2_5)/sizeof(Re_staggered_a_2_5[0]), Re_staggered_a_2_5, Eu_k1_staggered_a_2_5);
        //now Eu_k1_values has values for each a

        //calculate Eu_k1 for specific a value using linear interpolation of a and Eu_k1 values
        float Eu_k1;
        float *x;
        x = &a_values[0];
        float *y;
        y = &Eu_k1_values[0];
        //slin(a, 4, x, y, &Eu_k1)

        //calculate Eu
        float k1 = k1Staggered(a, b, Re);
        Eu = Eu_k1*k1;
    }
    else //calculate for square.
    {
        Eu = -1; //replace this
    }
    return Eu;
}

// TODO: write checkBoundary() desc
bool cEulerNumber::checkBoundary(float Re)
{
    float checkBoundary_A = calculate_a();
    float checkBoundary_B = calculate_b();
    bool returnValue;
    if (pattern == TRIANGULAR || pattern == SQUARE45){
        returnValue = checkStaggeredBoundary(checkBoundary_A, checkBoundary_B, Re);
    }
    if (pattern == SQUARE || pattern == TRIANG60){
        returnValue = checkSquareBoundary(checkBoundary_A, checkBoundary_B, Re);
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

bool cEulerNumber::checkStaggeredBoundary(float a, float b, float Re){
    float abValue = a / b;
    bool return_value = true;
    //checking for a/b vs. k1 graph:
    if(Re < 100)
    {
        //if a/b > 1.25 and Re < 100 it's out of bounds b/c no data for this region
        if (abValue >= 1.25 || abValue <= 0.5) //not sure of lower bound for 100
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
    else if (Re <= 1000000)
    {
        if (abValue <= 0.45 || abValue >= 3.5)
        {
            return_value = false;
        }
    }
    else // we don't have a line for Re over 1E6.
    {
        return_value = false;
    }

    //checking for Re vs Eu/k1 graph
    if(a < 1.25) // we don't have a line for a under 1.25.
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
    else if(a < 2.5)
    {
        if(Re < 7)
        {
            return_value = false;
        }
    }
    else if(a == 2.5) //decided to put a shorter error bound on exactly 2.5 since it wouldn't be interpolating b/c its exactly 2.5 and the line has a shorter error bound
    {
        if(Re <= 100)
        {
            return_value = false;
        }
    }
    else //we don't have a line for a over 2.5
    {
        return_value = false;
    }

    if(Re > 2000000)
    {
        return_value = false;
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

    for (float & k1_value : k1_values)
    {
        if (k1_value < 1)
        {
            k1_value = 1;
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
