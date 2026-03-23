#include <iostream>

class Ball{
public:
    float posX;
    float posY;
    float vX;
    float vY;
    float aX;
    float aY;
    int mass=4;
    int radius=2;

    Ball(float x, float y) {
        posX = x;
        posY = y;
        vX = 0;
        vY = 0;
        aX = 0;
        aY = 0;
    }

    void update(float t){
        posX = posX + (vX * t);
        posY = posY + (vY * t);

        vX = vX + (aX*t);
        vY = vY + (aY*t);

    }
};



int main(){
    Ball ball1(1,2);

    std::cout << ball << std::endl;
    




}