#include "euler.h"

/*!
 * \brief Reynold's number x axis points for staggered tube bundles where
 * a = 1.25
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of the transverse pitch to tube diameter (a)
 * of 1.25 from figure 10 on p2.2.4-8 in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
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

/*!
 * \brief Reynold's number x axis points for square tube bundles where
 * b = 1.25
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of longitudinal tube pitch to diameter of 1.25 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding y axis data is given by Euk1Square_b_1_25.
 *
 * \see Euk1Square_b_1_25
 * \see eulerNumberCalculation
 */
float ReSquare_b_1_25[]= {
        6.06457623f,
        8.038564834f,
        10.02362078f,
        19.67692288f,
        40.09959589f,
        60.50424366f,
        80.74790903f,
        102.0018652f,
        200.6407126f,
        397.372125f,
        589.5153937f,
        797.4579806f,
        995.7768721f,
        3856.564547f,
        5846.652584f,
        7773.860095f,
        9897.377477f,
        19325.5932f,
        38946.4248f,
        57563.78352f,
        78014.04803f,
        96932.7367f,
        182532.2813f,
        379720.5287f,
        582860.9905f,
        775590.1151f,
        1000804.166f
};

/*!
 * \brief Euler number y axis points for square tube bundles where
 * b = 1.25
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of longitudinal tube pitch to diameter of 1.25 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding x axis data is given by ReSquare_b_1_25.
 *
 * \see ReSquare_b_1_25
 * \see eulerNumberCalculation
 */
float Euk1Square_b_1_25[]={
        40.07657123f,
        29.19014968f,
        23.08300723f,
        11.41245705f,
        5.710220729f,
        3.875000466f,
        2.966892639f,
        2.450675805f,
        1.425538511f,
        0.87167854f,
        0.67895528f,
        0.56729454f,
        0.502048841f,
        0.498082817f,
        0.49496412f,
        0.462961198f,
        0.436029723f,
        0.380896007f,
        0.347458204f,
        0.330619291f,
        0.320974617f,
        0.313977708f,
        0.297671041f,
        0.287124212f,
        0.285272919f,
        0.28404536f,
        0.290122181f
};

/*!
 * \brief Reynold's number x axis points for square tube bundles where
 * b = 1.5
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of longitudinal tube pitch to diameter of 1.25 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding y axis data is given by Euk1Square_b_1_5.
 *
 * \see Euk1Square_b_1_5
 * \see eulerNumberCalculation
 */
float ReSquare_b_1_5[]= {
        4.021423836f,
        6.06347553f,
        8.091579281f,
        10.03272199f,
        20.08077736f,
        39.96205888f,
        61.07881898f,
        81.06679881f,
        101.7944477f,
        200.4197197f,
        397.3360625f,
        589.7370879f,
        798.0061471f,
        990.7545021f,
        3843.386803f,
        5826.674779f,
        7704.725218f,
        9814.700662f,
        19288.04566f,
        38858.66277f,
        57434.06906f,
        78323.15672f,
        96729.35631f,
        182205.9867f,
        379218.6986f,
        578576.9271f,
        774806.1678f,
        999637.04f,
};

/*!
 * \brief Euler number y axis points for square tube bundles where
 * b = 1.5
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of longitudinal tube pitch to diameter of 1.5 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding x axis data is given by ReSquare_b_1_5.
 *
 * \see ReSquare_b_1_5
 * \see eulerNumberCalculation
 */
float Euk1Square_b_1_5[]={
        22.68293328f,
        14.55048361f,
        11.07112801f,
        9.147407921f,
        4.813034237f,
        2.62950703f,
        1.85227531f,
        1.500434267f,
        1.262957113f,
        0.791897967f,
        0.52523032f,
        0.424745095f,
        0.363880109f,
        0.3343722f,
        0.378280485f,
        0.375911918f,
        0.371996055f,
        0.366032148f,
        0.325773479f,
        0.289834023f,
        0.275787758f,
        0.267717506f,
        0.265202042f,
        0.257796577f,
        0.25816903f,
        0.25975675f,
        0.26186927f,
        0.264147507f
};

/*!
 * \brief Reynold's number x axis points for square tube bundles where
 * b = 2.0
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of longitudinal tube pitch to diameter of 2.0 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding y axis data is given by Euk1Square_b_2.
 *
 * \see Euk1Square_b_2
 * \see eulerNumberCalculation
 */
float ReSquare_b_2[]={
        8.053169121f,
        10.10753329f,
        19.87718023f,
        39.83738767f,
        60.93565317f,
        81.38694796f,
        102.2521196f,
        201.5245107f,
        397.5164076f,
        590.5098464f,
        993.4428191f,
        1955.069316f,
        3871.493718f,
        5833.855887f,
        7716.021444f,
        9832.149358f,
        19353.92728f,
        39015.66423f,
        57616.7971f,
        78480.7138f,
        97520.15652f,
        183752.7602f,
        382437.9422f,
        579785.9093f,
        776304.3978f,
        1001492.111
};

/*!
 * \brief Euler number y axis points for square tube bundles where
 * b = 2.0
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of longitudinal tube pitch to diameter of 2.0 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding x axis data is given by ReSquare_b_2.
 *
 * \see ReSquare_b_2
 * \see eulerNumberCalculation
 */
float Euk1Square_b_2[]={
        4.584031992f,
        3.71642611f,
        2.121640077f,
        1.241533057f,
        0.930991609f,
        0.758808377f,
        0.667287732f,
        0.453833893f,
        0.330637888f,
        0.286419846f,
        0.252340058f,
        0.251341379f,
        0.250323184f,
        0.251909881f,
        0.254006205f,
        0.256264078f,
        0.260083267f,
        0.243260207f,
        0.216085082f,
        0.190981876f,
        0.187990502f,
        0.187369415f,
        0.187640118f,
        0.186465228f,
        0.185645444f,
        0.186093261f
};

/*!
 * \brief Reynold's number x axis points for square tube bundles where
 * b = 2.5
 * \ingroup htxr
 *
 * Tabular x axis data for ratio of longitudinal tube pitch to diameter of 2.5 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding y axis data is given by Euk1Square_b_2_5.
 *
 * \see Euk1Square_b_2_5
 * \see eulerNumberCalculation
 */
float ReSquare_b_2_5[]={
        796.3834273f,
        989.6632496f,
        1947.631222f,
        3880.790889f,
        5847.865559f,
        7686.067781f,
        9854.227438f,
        19391.35165f,
        38846.06954f,
        57809.09989f,
        78370.89865f,
        97997.99063f
};

/*!
 * \brief Euler number y axis points for square tube bundles where
 * b = 2.5
 * \ingroup htxr
 *
 * Tabular y axis data for ratio of longitudinal tube pitch to diameter of 2.5 from figure 9 on p2.2.4-7 in
 * Heat Exchanger Design Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * The corresponding x axis data is given by ReSquare_b_2_5.
 *
 * \see ReSquare_b_2_5
 * \see eulerNumberCalculation
 */
float Euk1Square_b_2_5[]={
        0.187525813f,
        0.185746413f,
        0.18501129f,
        0.184244528f,
        0.185412379f,
        0.18580737f,
        0.186273039f,
        0.184379303f,
        0.171394119f,
        0.171437507f,
        0.170651793f,
        0.169016662f
};

/*!
 * \brief Calculates Euler number and determines whether or not the calculations
 * involved extrapolation from current data
 * \ingroup htxr
 * \param[in] pattern The pattern of the tube array.
 * \param[in] pitch The pitch of the tubes in units of inches.
 * \param[in] diameter The diameter of each tube in the array in units of inches.
 *
 * \see eulerNumberCalculation
 * \see checkBoundary
 * \see ReSquare_b_1_25, Euk1Square_b_1_25, ReSquare_b_1_5, Euk1Square_b_1_5,
 * ReSquare_b_2, Euk1Square_b_2, ReSquare_b_2_5, Euk1Square_b_2_5
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
 * and figure 10 on p2.2.4-8 (for staggered tubes) in Heat Exchanger Design Handbook(HEDH)
 * 1983.  Zukauskas A., Ulinskas R.
 *
 * \see Re_staggered_a_1_25, Eu_k1_staggered_a_1_25, Re_staggered_a_1_5,
 * Eu_k1_staggered_a_1_5, Re_staggered_a_2, Eu_k1_staggered_a_2,
 * Re_staggered_a_1_2_5, Eu_k1_staggered_a_2_5
 * \see ReSquare_b_1_25, Euk1Square_b_1_25, ReSquare_b_1_5, Euk1Square_b_1_5,
 * ReSquare_b_2, Euk1Square_b_2, ReSquare_b_2_5, Euk1Square_b_2_5
 */
float cEulerNumber::eulerNumberCalculation(float Re){
    float Eu;
    float a = calculate_a();
    float b = calculate_b();
    if (m_pattern == TRIANGULAR || m_pattern == SQUARE45) //calculate for staggered.
    {
        float a_values[4] = {1.25, 1.5, 2.0, 2.5};
        float Eu_k1_values[4] = {0,0,0,0}; //again not sure if I have to do this.

        //Calculate Eu_k1 using quafit and given Re value for each value of a
        quafit(Re, &Eu_k1_values[0], sizeof(Re_staggered_a_1_25)/sizeof(Re_staggered_a_1_25[0]), Re_staggered_a_1_25, Eu_k1_staggered_a_1_25);
        quafit(Re, &Eu_k1_values[1], sizeof(Re_staggered_a_1_5)/sizeof(Re_staggered_a_1_5[0]), Re_staggered_a_1_5, Eu_k1_staggered_a_1_5);
        quafit(Re, &Eu_k1_values[2], sizeof(Re_staggered_a_2)/sizeof(Re_staggered_a_2[0]), Re_staggered_a_2, Eu_k1_staggered_a_2);
        quafit(Re, &Eu_k1_values[3], sizeof(Re_staggered_a_2_5)/sizeof(Re_staggered_a_2_5[0]), Re_staggered_a_2_5, Eu_k1_staggered_a_2_5);
        //now Eu_k1_values has values for each a

        //calculate Eu_k1 for specific a value using linear interpolation of a and Eu_k1 values
        float Eu_k1 = 0.;
        float *x;
        x = &a_values[0];
        float *y;
        y = &Eu_k1_values[0];
        slin(a, 4, x, y, &Eu_k1);

        //calculate Eu
        float k1 = k1Staggered(a, b, Re);
        Eu = Eu_k1*k1;
    }
    if (m_pattern == SQUARE || m_pattern == TRIANG60) //calculate for square.
    {
        float b_Values[4] = {1.25, 1.5, 2.0, 2.5};
        float Euk1_Values[4];
        int Re_Sizes[4] = {sizeof(ReSquare_b_1_25)/sizeof(float), sizeof(ReSquare_b_1_5)/sizeof(float), sizeof(ReSquare_b_2)/sizeof(float), sizeof(ReSquare_b_2_5)/sizeof(float)};
        float Euk1 = 0.;
        float k1;
        float *bValuesPointer;
        float *Euk1ValuesPointer;

        // quafit calculations for each b value
         quafit(Re, &Euk1_Values[0], Re_Sizes[0], ReSquare_b_1_25, Euk1Square_b_1_25);
         quafit(Re, &Euk1_Values[1], Re_Sizes[1], ReSquare_b_1_5, Euk1Square_b_1_5);
         quafit(Re, &Euk1_Values[2], Re_Sizes[2], ReSquare_b_2, Euk1Square_b_2);
         quafit(Re, &Euk1_Values[3], Re_Sizes[3], ReSquare_b_2_5, Euk1Square_b_2_5);

        bValuesPointer = &b_Values[0];
        Euk1ValuesPointer = &Euk1_Values[0];
        slin(b, 4, bValuesPointer, Euk1ValuesPointer, &Euk1);
        k1 = k1Square(a, b, Re);
        Eu = Euk1*k1;
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
        returnValue = checkSquareBoundary(checkBoundary_B, Re);
    }
    return returnValue;
}

/*!
 * \brief Returns the transverse pitch ratio (a) depending on tube pattern
 * \ingroup htxr
 * \return Ratio of the transverse pitch to tube diameter (a)
 *
 * The transverse pitch ratio is defined in figure 2 in 2.2.4-2 in the Heat
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
 * The longitudinal pitch ratio is defined in figure 2 in 2.2.4-2 in the Heat
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
 * method pressure drop in heat exchangers for square tubes extrapolates from current data.
 * \ingroup htxr
 *
 * \param[in] b Longitudinal pitch ratio for heat exchanger tubes
 * \param[in] Re Reynolds number of shell-side fluid in heat exchanger
 *
 * \return false if the calculation extrapolates and true if the calculation does not.
 *
 * The original smoothed data comes from  figure 10 on p2.2.4-8 in Heat Exchanger Design
 * Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * To calculate k1, functions 53-57 on p2.2.4-9 were used, again from HEDH.
 *
 * This data is the source for equations 6.21 and 6.22 on p278 of Process
 * Heat Transfer 1994. Hewitt G.F, Sires G.L., Bott T.R.
 *
 * \see eulerNumberCalculation
 * \see k1Square
 */
bool cEulerNumber::checkSquareBoundary(float b, float Re){
    bool returnValue = true;
    //Checking for (a-1)(b-1) vs. k1 graph (there are no limits specifically stated in formulas)
    if (Re < 1000){
        returnValue = false;
    }
    if (Re > 10000000){
        returnValue = false;
    }

    //checking for Re vs Eu/k1 graph (square does not need "a" to calculate boundaries)
    if (b < 1.25){
        returnValue = false;
    }
    else if (b <= 1.5){
        if (Re <= 3 || Re >= 2000000){
            returnValue = false;
        }
    }
    else if (b <= 2){
        if (Re <= 7 || Re >= 2000000){
            returnValue = false;
        }
    }
    else if (b <= 2.5){
        if (Re <= 600 || Re >= 200000){
            returnValue = false;
        }
    }
    return returnValue;
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
 * The original smoothed data comes from  figure 10 on p2.2.4-8 in Heat Exchanger Design
 * Handbook(HEDH) 1983.  Zukauskas A., Ulinskas R.
 *
 * To calculate k1, functions 53-57 on p2.2.4-9 were used, again from HEDH.
 *
 * \see eulerNumberCalculation
 * \see k1Staggered
 */
bool cEulerNumber::checkStaggeredBoundary(float a, float b, float Re){
    float abValue = a / b;
    bool return_value = true;
    //Checking for a/b vs. k1 graph:
    if(Re < 100)
    {
        if (abValue >= 1.25 || abValue <= 0.5)
        {
            return_value = false;
        }
    }
    else if (Re <= 1000)
    {
        if (abValue <= 0.5 || abValue >= 3.5)
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
    else
    {
        return_value = false;
    }

    //checking for Re vs Eu/k1 graph:
    if(a < 1.25)
    {
        return_value = false;
    }
    else if(a <= 1.5)
    {
        if(Re < 3)
        {
            return_value = false;
        }
    }
    else if(a <= 2)
    {
        if(Re < 7)
        {
            return_value = false;
        }
    }
    else if(a <= 2.5)
    {
        if(Re < 100)
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
 * \see eulerNumberCalculation
 * \see k1Square
 */
float cEulerNumber::k1Square(float a, float b, float Re) {
    float k1 = 0.;
    float abCombined = (a-1)/(b-1);
    float ReValues[] ={1000, 10000, 100000, 1000000};
    float k1Values[4];
    float *RePointer;
    float *k1Pointer;

    k1Values[0] = 1.009f* pow(abCombined,-0.744);
    k1Values[1] = 1.007f* pow(abCombined,-0.655);
    k1Values[2] = 1.004f* pow(abCombined, -0.539);
    k1Values[3] = 1.218f - (0.297f*abCombined) + (0.0265* pow(abCombined, 2));

    RePointer = &ReValues[0];
    k1Pointer = &k1Values[0];
    slin(Re, 4, RePointer, k1Pointer, &k1);
    return k1;
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
 * \see eulerNumberCalculation
 * \see k1Square
 */
float cEulerNumber::k1Staggered(float a, float b, float Re)
{
    float a_b = a/b;
    if (m_pattern == TRIANGULAR)
    {
        return 1.0f;
    }
    float Re_values[5] = {100, 1000, 10000, 100000, 1000000};
    float k1_values[5] = {0,0,0,0,0}; //not sure if I have to do this.
    if (a_b <= 1.25)
    {
        k1_values[0] = 1;
        k1_values[1] = pow(a_b, -0.048f); //from eqn 53
        if (k1_values[1] < 1)
        {
            k1_values[1] = 1;
        }
    }
    else
    {
        k1_values[0] = 0.93f*pow(a_b, 0.48); //from eqn 56
        k1_values[1] = 0.951f*pow(a_b, 0.284f); //from eqn 57

    }
    k1_values[2] = 1.28 - 0.708f/a_b + 0.55/pow(a_b, 2) - 0.113f/pow(a_b, 3); //eqn 54
    k1_values[3] = 2.016f - 1.675f*a_b + 0.948f*pow(a_b, 2) - 0.234f*pow(a_b, 3) + 0.021f*pow(a_b, 4); //eqn 55
    k1_values[4] = 2.016f - 1.675f*a_b + 0.948f*pow(a_b, 2) - 0.234f*pow(a_b, 3) + 0.021f*pow(a_b, 4); //eqn 55

    float k1 = 0.;
    float *x;
    x = &Re_values[0];
    float *y;
    y = &k1_values[0];
    slin(Re, 5, x, y, &k1);
    return k1;
}

/**
c   linear interpolation
c
c   input : (x1,y1),(x2,y2) as two fixed points
c           x point
c   output  y as value at point  x
*/
void cEulerNumber::lfit(double x1, double y1, double x2, double y2, double x, float *y)
{
    float slope;
    if( x2 == x1 ) {

        *y = 0.;
    }
    else {

        slope = (y2-y1)/(x2-x1);
        *y = y1 + slope * (x-x1);
    }
}

/**
c  Linear table interpolation
c
c  input   xi    value of x where y is desired
c          ncp   no of points in table
c          x     x cordinate
c          y     y cordinate
c
c  output  yi    y value at poshort xi
*/
void cEulerNumber::slin(double xi, short ncp, float *x, float *y, float *yi){

    short         loc1, loc2;

    float   x1, x2, y1, y2, slope;

    stloc(xi,x,ncp,&loc1,&loc2);

    x1 = x[loc1];
    x2 = x[loc2];
    y1 = y[loc1];
    y2 = y[loc2];

    if( x2 == x1 ) {

        *yi = 0.;
    }
    else {

        slope = (y2-y1)/(x2-x1);
        *yi = y1 + slope * (xi-x1);
    }
}

/**
c   A general interpolation routine
c   input : np = # of points in the input curve
c           xaxis = x-axis poshort values in curve
c           yaxis = y-axis poshort values in curve
c           xin =   x poshort value at which y is desired
c   ouput:  yout =   desired y value
c
c   Note : any x value outside the range will be linearly interpolated
*/
void cEulerNumber::quafit(double xin, float *yout, short np, float *xaxis, float *yaxis)
{
    short i, iend, istart, im, np1;
    float v1, t1, v2, t2, v3, t3, x1, x2, x3, y1, y2, y3, denom, cc, aa, bb, center;

    for ( i = 0; i < np; i++){

        if( xaxis[i] >=  xin ) goto L20;
    }

    iend = np-1;
    goto L25;

    L20:
    iend = i + 1;
    if( iend > np -1 ) iend = np - 1;

    L25:
    istart = iend - 2;

    if( istart < -1 ) iend = iend + 1;

    if( iend > np -1 ) iend = np - 1;

    istart = iend-2;

    im = istart + 1;

    if(istart > -1)
    {
        v1 = xaxis[istart];
        t1 = yaxis[istart];
    }
    else
    {
        lfit(xaxis[im],yaxis[im],xaxis[iend],yaxis[iend],xin,yout);

        return;

    }

    v2 = xaxis[im];
    t2 = yaxis[im];
    v3 = xaxis[iend];
    t3 = yaxis[iend];

    /*  calc coeff */
    x2 = v1-v2;
    x3 = v1*v1-v2*v2;
    y2 = v1-v3;
    y3 = v1*v1-v3*v3;
    x1 = t1-t2;
    y1 = t1-t3;
    denom = x2*y3-x3*y2;

    if( fabs(denom) < 1.e-20 )
    {
        lfit(xaxis[im],yaxis[im],xaxis[iend],yaxis[iend],xin,yout);
        return;
    }

    cc = (x2*y1-x1*y2)/denom;

    if( fabs(cc) <= 1.e-20 || fabs(x2) <= 1.e-20 )
    {
         lfit(xaxis[im],yaxis[im],xaxis[iend],yaxis[iend],xin,yout);
        return;
    }

    bb = (x1-cc*x3)/x2;
    aa = t1-bb*v1-cc*v1*v1;
    center = -bb/cc/2.;

    if((xaxis[iend] > center) && (xaxis[istart] < center))
    {
        if( xin < xaxis[im])
        {
            lfit(xaxis[istart],yaxis[istart],xaxis[im],yaxis[im],xin, yout);
        }
        else
        {
            lfit(xaxis[im],yaxis[im],xaxis[iend],yaxis[iend],xin,yout);
        }
        return;
    }

    if(  xin > xaxis[np-1])
    {
        np1 = np-2;
        lfit(xaxis[np1],yaxis[np1],xaxis[np-1],yaxis[np-1],xin,yout);
        return;
    }
    *yout = aa + bb*xin + cc*xin*xin;
}

/**
c  Routine search for the location of t in table tabt
c
c  input  t
c         x     table
c         np    no of points in the table
c
c  output loc1   first location (lower)
c         loc2   upper location (upper)
*/
void cEulerNumber::stloc(double t, float *x, short np, short *loc1, short *loc2) {
    short i;

    for ( i = 0; i < np; i++)
    {
        if(  t <= x[i] )
        {
            *loc2 = i;
            *loc1 = *loc2 - 1;
            if( *loc2 <= 0 )
            {
                *loc2 = 1;
                *loc1 = 0;
            }
            return;
        }

        if( i > 1 && x[i] ==  0. )
        {
            //  If x shows decreasing
            if( x[i] < x[i-1] )
            {
                *loc2 = i - 1;
                *loc1 = i - 2;
                return;
            }
        }
    }

    *loc2 = np - 1 ;
    *loc1 = np - 2 ;
    return;
}

int main()
{
    cEulerNumber myEuler(3, 1.0608, 1); //square
    float bruh =  myEuler.eulerNumberCalculation(100000);
    std::cout << "\neuler:\n";
    std::cout << "\n";
    std::cout << myEuler.checkBoundary(100000);
};
