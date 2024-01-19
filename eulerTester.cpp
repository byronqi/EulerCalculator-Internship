# include "euler.h"
# include "iostream"
# include "fstream"
using namespace std;

int main(int argc, char* argv[]){
    int MAX = 1000000;

    for (int i = 1, increment = 1, counter = 1; i <= MAX; i += increment) {
        cout << i << endl;

        if (counter == 10) {
            increment *= 10;
            counter = 1;
        }
        ++counter;
    }
}


