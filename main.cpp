#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main () {
    const short minValue  {1};
    const short maxValue {6};

    srand(time(nullptr));

    short first { (rand()% (maxValue - minValue + 1)) + minValue};
    short last { (rand()% (maxValue - minValue + 1)) + minValue};

    cout << first << "," << last;
}