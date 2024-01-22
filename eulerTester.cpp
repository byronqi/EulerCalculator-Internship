# include "euler.h"
# include "iostream"
# include "fstream"
# include "vector"
using namespace std;

// Euler nums for all 4 pattern variations w/ fixed pitch & diameter
cEulerNumber myEulerTri(TRIANGULAR, 1.5, 1);
cEulerNumber myEulerTri60(TRIANG60, 1.5, 1);
cEulerNumber myEulerSqu(SQUARE, 1.5, 1);
cEulerNumber myEulerSqu45(SQUARE45, 1.0608, 1);
// Vectors for storing those euler nums
vector<float> dataSet_Tri;
vector<float> dataSet_Tri60;
vector<float> dataSet_Squ;
vector<float> dataSet_Squ45;

int main(){
    // csv file
    ofstream myEulerFile("../EulerData.csv"); // keep in mind this file gets updated every time
    myEulerFile << "Re, Tri, Tri60, Squ, Sq45, \n";

    int MAX = 1000000;
    for (int i = 1, increment = 1, counter = 1; i <= MAX; i += increment) { // log increment from 1 to 1E6
        /*
        dataSet_Tri.push_back(myEulerTri.eulerNumberCalculation(float (i)));
        dataSet_Tri60.push_back(myEulerTri60.eulerNumberCalculation(float(i)));
        dataSet_Squ.push_back(myEulerSqu.eulerNumberCalculation(float(i)));
        dataSet_Squ45.push_back(myEulerSqu45.eulerNumberCalculation(float(i)));
         */
        myEulerFile << i << ", "
                    << myEulerTri.eulerNumberCalculation(float (i)) << ", "
                    << myEulerTri60.eulerNumberCalculation(float (i)) << ", "
                    << myEulerSqu.eulerNumberCalculation(float (i)) <<", "
                    << myEulerSqu45.eulerNumberCalculation(float(i))
                    << "\n";

        cout << i << endl;
        if (counter == 10) {
            increment *= 10;
            counter = 1;
        }
        ++counter;
    }
    myEulerFile.close();
    return 0;
}


