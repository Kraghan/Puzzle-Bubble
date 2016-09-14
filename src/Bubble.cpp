#include "Bubble.h"

Bubble::Bubble(unsigned int x, unsigned int y, BubbleColor color, BubbleType type){
    this->x = x;
    this->y = y;
    this->color = color;
    this->type = type;
}

unsigned int Bubble::getX(){
    return x;
}

void Bubble::setX(unsigned int x) {
    this->x = x;
}

unsigned int Bubble::getY(){
    return y;
}

void Bubble::setY(unsigned int y) {
    this->y = y;
}

BubbleColor Bubble::getColor(){
    return color;
}

void Bubble::setColor(const BubbleColor color) {
    Bubble::color = color;
}

BubbleType Bubble::getType(){
    return type;
}

void Bubble::setType(const BubbleType type) {
    this->type = type;
}