#include <iostream>

class euler
{
    public:
        std::string pattern;
        float pitch;
        float diameter;
        float Re;
        euler(std::string x, float y, float z, float a)
        {
            pattern = x;
            pitch = y;
            diameter = z;
            Re = a;
        }
        void printme()
        {
            std::cout << pattern;
        }
    };

int main()
{
    euler myEuler("i", 1., 2., 3.);
    myEuler.printme();
    return 1;
};
