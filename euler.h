#ifndef EULER_K1_CALC_EULER_H
#define EULER_K1_CALC_EULER_H
#include <iostream>
#include <cmath>

/*!
 * \brief Implementation of the Euler number calculator.
 */
class cEulerNumber
{
public:
    int m_pattern;
    float m_pitch;
    float m_diameter;
    cEulerNumber(int pattern, float pitch, float diameter); // class declaration

    float eulerNumberCalculation(float Re);
    int checkBoundary(float Re);
    float k1Square(float a, float b, float Re);
    float k1Staggered(float a, float b, float Re);
    float get_a();
    float get_b();

private:
    float calculate_a();
    float calculate_b();
    int checkStaggeredBoundary(float a, float b, float Re);
    int checkSquareBoundary(float a, float b, float Re);
    void slin(double xi, short ncp, float *x, float *y, float *yi);
    void quafit(double xin, float *yout, short np, float *xaxis, float *yaxis);
    void lfit(double x1, double y1, double x2, double y2, double x, float *y);
    void stloc(double t, float *x, short np, short *loc1, short *loc2);
};

// Tri = 0, Tri60 = 1, Sq = 2, Sq45 = 3
enum TUBE_PATTERN_ENUM{

    TRIANGULAR,

    TRIANG60,

    SQUARE,

    SQUARE45

};

#endif //EULER_K1_CALC_EULER_H
