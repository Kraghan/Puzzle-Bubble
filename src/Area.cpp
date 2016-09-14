//
// Created by madjo on 14/09/2016.
//

#include "Area.h"

Area::Area(unsigned int width, unsigned int height){
    this->width = width;
    this->height = height;
}

Area::~Area() {
    for(unsigned int x = 0; x < width; x++) {
        for (unsigned int y = 0; y < width; y++) {
            if()
        }
    }
}

// Test hexagone
bool Area::isInBound(unsigned int x, unsigned int y) {

    if(y % 2 == 0){
        return x <= width;
    }
    else{
        return x < width;
    }
}

void Area::initRandom(){
    for(unsigned int x = 0; x < width; x++){
        for(unsigned int y = 0; y < width-4; y++) {
            if (isInBound(x,y)) {
                int randcolor = rand() % 8;
                int randtype = rand() % 8;
                BubbleColor color;
                BubbleType type;
                switch (randcolor){
                    case 0:
                        color = BubbleColor::BLACK;
                        break;
                    case 1:
                        color = BubbleColor::BLUE;
                        break;
                    case 2:
                        color = BubbleColor::GREEN;
                        break;
                    case 3:
                        color = BubbleColor::ORANGE;
                        break;
                    case 4:
                        color = BubbleColor::YELLOW;
                        break;
                    case 5:
                        color = BubbleColor::WHITE;
                        break;
                    case 6:
                        color = BubbleColor::PURPLE;
                        break;
                    case 7:
                        color = BubbleColor::RED;
                        break;
                    default:
                        color = BubbleColor::BLUE;
                        break;
                }

                switch (randtype){
                    case 0:
                        type = BubbleType::NORMAL;
                        break;
                    case 1:
                        type = BubbleType::NORMAL;
                        break;
                    case 2:
                        type = BubbleType::NORMAL;
                        break;
                    case 3:
                        type = BubbleType::NORMAL;
                        break;
                    case 4:
                        type = BubbleType::NORMAL;
                        break;
                    case 5:
                        type = BubbleType::NORMAL;
                        break;
                    case 6:
                        type = BubbleType::NORMAL;
                        break;
                    case 7:
                        type = BubbleType::NORMAL;
                        break;
                    default:
                        type = BubbleType::NORMAL;
                        break;
                }
                area[x][y] = new Bubble(x,y,color,type);
            }
        }
    }
}

