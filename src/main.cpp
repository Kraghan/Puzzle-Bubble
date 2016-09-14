#include <iostream>
#include "Area.h"
using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    Area* area = new Area(10,12);
    area->initRandom();
    area->debug();
    delete area;
    return 0;
}