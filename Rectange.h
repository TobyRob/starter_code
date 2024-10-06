#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
#include <mcpp/mcpp.h>
class Rectangle
{
public:
Rectangle();
~Rectangle();
void readRectangle(void);
void buildRectangle(void);
private:
int length; int width;
int build_x; int build_y; int build_z;
};
#endif //RECTANGLE_H