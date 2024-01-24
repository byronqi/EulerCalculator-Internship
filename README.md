# Euler Calculator
***
### Description
This is a calculator for obtaining Euler numbers for HTXR.\
This calculator takes into account for both staggered and square formation tubes. This includes Square, Square 45, Triangle 30, Triangle 60.\
Reynolds numbers from 1 to 1000000 (1E6) are accounted for. This code will calculate anything beyond or below the range; however, those values will be flagged as extrapolated by the program.
***
### Files
`euler.h` - header file for `euler.cpp`.\
`euler.cpp` - code for the calculator.\
`eulerTester.cpp` - test program (example usage) that outputs all variables that are in relation to calculating the Euler number with Reynolds numbers in range from 1 to 1000000 (1E6).
***
### Functions
*detailed descriptions of functions are written above the function in the program*
* `float eulerNumberCalculation(float Re);`
* `int checkBoundary(float Re);`
* `float k1Square(float a, float b, float Re);`
* `float k1Staggered(float a, float b, float Re);` 
* `float get_a();` 
* `float get_b();`
***
### Usage
Usage is demonstrated in `eulerTester.cpp`.
***
### Authors
Byron Qi - byron.qi@kinkaid.org\
Eshing Ji - eshing.ji@kinkaid.org

