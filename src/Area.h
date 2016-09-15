//
// Created by madjo on 14/09/2016.
//

#ifndef PUZZLE_BUBBLE_AREA_H
#define PUZZLE_BUBBLE_AREA_H

#include "Bubble.h"
#include <vector>
#include <iostream>
#include <cstdlib>
#include <string>

class Area {
public:
    Area(unsigned int width, unsigned int height);
    ~Area();
    void debug();
    void initRandom();
    bool isInBound(unsigned int x, unsigned int y);
private:
    std::vector<std::vector<Bubble*>> area;
    unsigned int width, height;
};


#endif //PUZZLE_BUBBLE_AREA_H
