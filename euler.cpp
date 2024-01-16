#include <iostream>
#include "euler.h"
#include <cmath>

/*!
 * \brief Reynold's number x axis points for staggered tube bundles where
 * a = 1.25
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of the transverse pitch to tube diameter (a)
 * of 1.25 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding y axis data is given by Eu_k1_staggered_a_1_25.
 *
 * \see Eu_k1_staggered_a_1_25
 * \see eulerNumberCalculation
 */
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

/*!
 * \brief Euler number/k1 y axis points for staggered tube bundles where
 * a = 1.25
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of the transverse pitch to tube diameter (a)
 * of 1.25 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding x axis data is given by Re_staggered_a_1_25.
 *
 * \see Re_staggered_a_1_25
 * \see eulerNumberCalculation
 */
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

/*!
 * \brief Reynold's number x axis points for staggered tube bundles where
 * a = 1.5
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of the transverse pitch to tube diameter (a)
 * of 1.5 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding y axis data is given by Eu_k1_staggered_a_1_5.
 *
 * \see Eu_k1_staggered_a_1_5
 * \see eulerNumberCalculation
 */
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
        1984566.0f,
};

/*!
 * \brief Euler number/k1 y axis points for staggered tube bundles where
 * a = 1.5
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of the transverse pitch to tube diameter (a)
 * of 2 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding x axis data is given by Re_staggered_a_1_5.
 *
 * \see Re_staggered_a_1_5
 * \see eulerNumberCalculation
 */
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

/*!
 * \brief Reynold's number x axis points for staggered tube bundles where
 * a = 2
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of the transverse pitch to tube diameter (a)
 * of 2 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding y axis data is given by Eu_k1_staggered_a_2.
 *
 * \see Eu_k1_staggered_a_2
 * \see eulerNumberCalculation
 */
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

/*!
 * \brief Euler number/k1 y axis points for staggered tube bundles where
 * a = 2
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of the transverse pitch to tube diameter (a)
 * of 2 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding x axis data is given by Re_staggered_a_2.
 *
 * \see Re_staggered_a_2
 * \see eulerNumberCalculation
 */
float Eu_k1_staggered_a_2[] = {
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

/*!
 * \brief Reynold's number x axis points for staggered tube bundles where
 * a = 2.5
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of the transverse pitch to tube diameter (a)
 * of 2.5 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding y axis data is given by Eu_k1_staggered_a_2_5.
 *
 * \see Eu_k1_staggered_a_2_5
 * \see eulerNumberCalculation
 */
float Re_staggered_a_2_5[] = {
        103.2424f,
        200.6465f,
        400.3279f,
        606.8412f,
        800.3716f,
        985.6726f,
        2066.340f,
        3952.041f,
        5990.742f,
        8094.998f,
        9735.564f,
        19920.98f,
        39827.81f,
        60311.47f,
        81412.34f,
        102561.0f,
        191167.4f,
        410373.6f,
        594784.6f,
        804117.0f,
        1037839.0f,
        1986990.0f
};

/*!
 * \brief Euler number/k1 y axis points for staggered tube bundles where
 * a = 2_5
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of the transverse pitch to tube diameter (a)
 * of 2_5 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is referenced for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * The corresponding x axis data is given by Re_staggered_a_2_5.
 *
 * \see Re_staggered_a_2_5
 * \see eulerNumberCalculation
 */
float Eu_k1_staggered_a_2_5[] = {
        0.9458241f,
        0.6580855f,
        0.5139590f,
        0.4644369f,
        0.4407258f,
        0.4189552f,
        0.3795085f,
        0.3631325f,
        0.3439929f,
        0.3265733f,
        0.3179197f,
        0.2726198f,
        0.2284748f,
        0.2016038f,
        0.1914781f,
        0.1776606f,
        0.1455801f,
        0.1370082f,
        0.1359965f,
        0.1352869f,
        0.1346397f,
        0.1330061
};

// square = 0; square45 = 1, tri30 = 2; tri60 = 3

/*!
 * \brief Calculates Euler number and determines whether or not the calculations
 * involved extrapolation from current data
 * \ingroup htxr
 * \param[in] pattern The pattern of the tube array.
 * \param[in] pitch The pitch of the tubes.
 * \param[in] diameter The diameter of each tube in the array.
 *
 * \see eulerNumberCalculation
 * \see checkBoundary
 * TODO: add square arrays here:
 * \see [names of square arrays]
 */
cEulerNumber::cEulerNumber(int pattern, float pitch, float diameter)
{
    m_pattern = pattern;
    m_pitch = pitch;
    m_diameter = diameter;
}

/*!
 * \brief Returns the euler number for Bell method pressure drop in heat exchangers
 * \ingroup htxr
 * \param[in] Re Reynolds number of shell-side fluid in heat exchanger
 * \return Euler number (Eu)
 *
 * The original smoothed data comes from  figure 9 on p2.2.4-7 (for inline tubes)
 * and figure 10 on p2.4-8 (for staggered tubes) in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is the source for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * \see Re_staggered_a_1_25, Eu_k1_staggered_a_1_25, Re_staggered_a_1_5,
 * Eu_k1_staggered_a_1_5, Re_staggered_a_2, Eu_k1_staggered_a_2,
 * Re_staggered_a_1_2_5, Eu_k1_staggered_a_2_5
 * TODO: add square arrays here:
 * \see [names of square arrays]
 */
float cEulerNumber::eulerNumberCalculation(float Re){
    // TODO: finish this and return Euler number
    float Eu;
    float a = calculate_a();
    float b = calculate_b();
    if (m_pattern == TRIANGULAR || m_pattern == SQUARE45) //calculate for staggered.
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

/*!
 * \brief Returns a boolean describing whether the calculation of euler number for Bell
 * method pressure drop in heat exchangers extrapolates from current data.
 * \ingroup htxr
 * \param[in] Re Reynolds number of shell-side fluid in heat exchanger
 * \return false if the calculation extrapolates and true if the calculation does not.
 *
 * \see checkStaggeredBoundary, checkSquareBoundary
 * \see eulerNumberCalculation
 * \see k1Square
 * \see k1Staggered
 */
bool cEulerNumber::checkBoundary(float Re)
{
    float checkBoundary_A = calculate_a();
    float checkBoundary_B = calculate_b();
    bool returnValue;
    if (m_pattern == TRIANGULAR || m_pattern == SQUARE45){
        returnValue = checkStaggeredBoundary(checkBoundary_A, checkBoundary_B, Re);
    }
    if (m_pattern == SQUARE || m_pattern == TRIANG60){
        returnValue = checkSquareBoundary(checkBoundary_A, checkBoundary_B, Re);
    }
    return returnValue;
}

/*!
 * \brief Returns the transverse pitch ratio (a) depending on tube pattern
 * \ingroup htxr
 * \return Ratio of the transverse pitch to tube diameter (a)
 *
 * The transverse pitch ratio is defined in figure 2 in 2.2.4 in the Heat
 * Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * \see checkStaggeredBoundary, checkSquareBoundary
 * \see eulerNumberCalculation
 * \see k1Square
 * \see k1Staggered
 */
float cEulerNumber::calculate_a()
{
    float a;
    if (m_pattern == SQUARE)
    {
        a = m_pitch/m_diameter;
    }
    if (m_pattern == SQUARE45)
    {
        a = 1.414f*m_pitch/m_diameter;
    }
    if (m_pattern == TRIANGULAR)
    {
        a = m_pitch/m_diameter;
    }
    if (m_pattern == TRIANG60)
    {
        a = 0.866f*m_pitch/m_diameter;
    }
    return a;
}

/*!
 * \brief Returns the longitudinal pitch ratio (b) depending on tube pattern
 * \ingroup htxr
 * \return Ratio of the longitudinal pitch ratio (b)
 *
 * The longitudinal pitch ratio is defined in figure 2 in 2.2.4 in the Heat
 * Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * \see checkStaggeredBoundary, checkSquareBoundary
 * \see eulerNumberCalculation
 * \see k1Square
 * \see k1Staggered
 */
float cEulerNumber::calculate_b()
{
    float b;
    if (m_pattern == SQUARE)
    {
        b = m_pitch/m_diameter;
    }
    if (m_pattern == SQUARE45)
    {
        b = 0.707f*m_pitch/m_diameter;
    }
    if (m_pattern == TRIANGULAR)
    {
        b = 0.866f*m_pitch/m_diameter;
    }
    if (m_pattern == TRIANG60)
    {
        b = m_pitch/m_diameter;
    }
    return b;
}

/*!
 * \brief Returns a boolean describing whether the calculation of euler number for Bell
 * method pressure drop in heat exchangers for staggered tubes extrapolates from current data.
 * \ingroup htxr
 * \param[in] a Transverse pitch ratio for heat exchanger tubes
 * \param[in] b Longitudinal pitch ratio for heat exchanger tubes
 * \param[in] Re Reynolds number of shell-side fluid in heat exchanger
 *
 * \return false if the calculation extrapolates and true if the calculation does not.
 *
 * The original smoothed data comes from  figure 10 on p2.4-8 in Heat Exchanger Design
 * Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * To calculate k1, functions 53-57 on p2.2.4-9 were used, again from HEDH.
 *
 * TODO: update:
 * This data is the source for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * \see eulerNumberCalculation
 * \see k1Staggered
 */
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

/*!
 * \brief Returns a boolean describing whether the calculation of euler number for Bell
 * method pressure drop in heat exchangers in inline tubes extrapolates from current data.
 * \ingroup htxr
 * \param[in] a Transverse pitch ratio for heat exchanger tubes
 * \param[in] b Longitudinal pitch ratio for heat exchanger tubes
 * \param[in] Re Reynolds number of shell-side fluid in heat exchanger
 * \return false if the calculation extrapolates and true if the calculation does not.
 *
 * The original smoothed data comes from  figure 9 on p2.2.4-7 in Heat Exchanger Design
 * Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * To calculate k1, functions 40-42 on p2.2.4-8 were used, again from HEDH.
 *
 * TODO: update:
 * This data is the source for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * \see eulerNumberCalculation
 * \see k1Square
 */
bool cEulerNumber::checkSquareBoundary(float a, float b, float Re){
    // TODO: finish this
}

/*!
 * \brief Returns geometry parameter k1 for inline tubes.
 * \ingroup htxr
 * \param[in] a Transverse pitch ratio for heat exchanger tubes
 * \param[in] b Longitudinal pitch ratio for heat exchanger tubes
 * \param[in] Re Reynolds number of shell-side fluid in heat exchanger
 * \return k1
 *
 * The source for the functions that calculate k1 was p2.2.4-8 in Heat Exchanger Design
 * Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is the source for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * \see eulerNumberCalculation
 * \see k1Square
 */
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

/*!
 * \brief Returns geometry parameter k1 for staggered tubes.
 * \ingroup htxr
 * \param[in] a Transverse pitch ratio for heat exchanger tubes
 * \param[in] b Longitudinal pitch ratio for heat exchanger tubes
 * \param[in] Re Reynolds number of shell-side fluid in heat exchanger
 * \return k1
 *
 * To calculate k1, functions 53-57 on p2.2.4-9 were used from Heat Exchanger Design
 * Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * TODO: update:
 * This data is the source for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * \see eulerNumberCalculation
 * \see k1Square
 */
float cEulerNumber::k1Staggered(float a, float b, float Re)
{
    float a_b = a/b;
    if (m_pattern == TRIANGULAR)
    {
        return 1;
    }
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
