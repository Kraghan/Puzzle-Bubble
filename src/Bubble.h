//
// Created by madjo on 14/09/2016.
//

#ifndef PUZZLE_BUBBLE_BUBBLE_H
#define PUZZLE_BUBBLE_BUBBLE_H
#include "BubbleColor.h"
#include "BubbleType.h"

class Bubble
{
public:

    Bubble(unsigned int x, unsigned int y, BubbleColor color, BubbleType type);

    unsigned int getX();

    void setX(unsigned int x);

    unsigned int getY();

    void setY(unsigned int y);

    BubbleColor getColor();

    void setColor(const BubbleColor color);

    BubbleType getType();

    void setType(const BubbleType type);

private:
    unsigned int x,y;
    BubbleColor color;
    BubbleType type;
};

#endif //PUZZLE_BUBBLE_BUBBLE_H
