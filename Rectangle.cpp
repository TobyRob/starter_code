#include "Rectangle.h"
Rectangle::Rectangle()
{
length = 0; width = 0;
build_x = 0; build_y = 0; build_z = 0;
}
Rectangle::~Rectangle()
{
}
void Rectangle::readRectangle(void){
std::cout << "Enter the build coordinates [x y z]: " << std::endl;
std::cin >> build_x;
std::cin >> build_y;
std::cin >> build_z;
std::cout << "Enter the size of the rectangular Environment (L, W): "
<< std::endl;
std::cin >> length;
std::cin >> width;
}
void Rectangle::buildRectangle(void){
mcpp::MinecraftConnection mc;
for(int i=0; i<width; i++){
for(int j=0; j<length; j++){
    mc.setBlock(mcpp::Coordinate(build_x+i,build_y,build_z+j)
, mcpp::Blocks::BRICKS);
}
}
}