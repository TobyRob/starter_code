#include <iostream>
#include <mcpp/mcpp.h>
int main(void){
// Create a Minecraft connection
mcpp::MinecraftConnection mc;
int build_x = 0;
int build_y = 0;
int build_z = 0;
std::cout << "Enter the build coordinates [x y z]: " << std::endl;
std::cin >> build_x;
std::cin >> build_y;
std::cin >> build_z;
mcpp::Coordinate coord( build_x, build_y, build_z);
mc.setBlock(coord, mcpp::Blocks::BRICKS);
return EXIT_SUCCESS;
}