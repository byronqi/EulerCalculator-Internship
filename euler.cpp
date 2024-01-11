#include <iostream>
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
        float calculate_a_b()
        {
            float a;
            float b;
            if (pattern == 0)
            {
                a = pitch/diameter;
                b = pitch/diameter;
            }
            if (pattern == 1)
            {
                a =
            }
        }
        void printme(){
            std::cout << pattern;
        }
    };

int main()
{
    euler myEuler("i", 1., 2., 3.);
    myEuler.printme();
    return 1;
};
