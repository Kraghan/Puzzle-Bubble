//
// Created by madjo on 14/09/2016.
//
#include "Area.h"

Area::Area(unsigned int width, unsigned int height){
    this->width = width;
    this->height = height;
    for(unsigned int y = 0; y < height; y++)
    {
        std::vector<Bubble*> line;
        for(unsigned int x = 0; x < width; x++)
        {
            if(isInBound(x,y))
                line.push_back(nullptr);
        }
        area.push_back(line);
    }
}

Area::~Area() {
    for(unsigned int x = 0; x < width; x++) {
        for (unsigned int y = 0; y < height; y++) {
            if(isInBound(x,y) && area[x][y] != nullptr){
                delete area[x][y];
            }
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
    for(unsigned int x = 0; x < width; x++) {
        for (unsigned int y = 0; y < height; y++) {
            if (isInBound(x, y)) {
                if (y < height - 4) {
                    int randcolor = rand() % 8;
                    int randtype = rand() % 8;
                    BubbleColor color;
                    BubbleType type;
                    switch (randcolor) {
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
                            color = BubbleColor::NONE;
                            break;
                    }

                    switch (randtype) {
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
                            type = BubbleType::VOID;
                            break;
                    }
                    area[x][y] = new Bubble(x, y, color, type);
                } else {
                    area[x][y] = new Bubble(x, y, BubbleColor::NONE, BubbleType::VOID);
                }
            }
        }
    }
}

void Area::debug()
{
    for(unsigned int x = 0; x < width; x++) {
        for (unsigned int y = 0; y < height; y++) {
            if(isInBound(x,y)){
                std::string color,type;
                switch (area[x][y]->getColor()) {
                    case BubbleColor::BLACK:
                        color = "BLACK";
                        break;
                    case BubbleColor::BLUE:
                        color = "BLUE";
                        break;
                    case BubbleColor::GREEN:
                        color = "GREEN";
                        break;
                    case BubbleColor::ORANGE:
                        color = "ORANGE";
                        break;
                    case BubbleColor::YELLOW:
                        color = "YELLOW";
                        break;
                    case BubbleColor::WHITE:
                        color = "WHITE";
                        break;
                    case BubbleColor::PURPLE:
                        color = "PURPLE";
                        break;
                    case BubbleColor::RED:
                        color = "RED";
                        break;
                    default:
                        color = "NONE";
                        break;
                }

                switch (area[x][y]->getType()) {
                    case BubbleType::NORMAL:
                        type = "NORMAL";
                        break;
                    default:
                        type = "VOID";
                        break;
                }
                std::cout<< "Bulle : "<<area[x][y]->getX()<<" "<<area[x][y]->getY()<<" "<<type<<" "<<color<<std::endl;
            }
        }
    }
}

