#ifndef EULER_K1_CALC_EULER_H
#define EULER_K1_CALC_EULER_H

class cEulerNumber
{
public:
    int pattern;
    float pitch;
    float diameter;

    cEulerNumber(int x, float y, float z);
    float eulerNumberCalculation(float Re);
    bool checkBoundary(float Re);

private:
    float calculate_a();
    float calculate_b();
    bool checkStaggeredBoundary(float a, float b, float Re);
    bool checkSquareBoundary(float a, float b, float Re);
    float k1Square(float a, float b, float Re);
    float k1Staggered(float a, float b, float Re);
};

// Tri = 0, Tri60 = 1, Sq = 2, Sq45 = 3
enum TUBE_PATTERN_ENUM{

    TRIANGULAR,

    TRIANG60,

    SQUARE,

    SQUARE45

};

#endif //EULER_K1_CALC_EULER_H
