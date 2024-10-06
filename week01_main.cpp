#include <iostream>
#include <mcpp/mcpp.h>
int main(void){
std::cout << "Hello World!" << std::endl;
// Create a Minecraft connection
mcpp::MinecraftConnection mc;
// set the time to day in Minecraft
mc.doCommand("time set day");
//Change [x], [y], [z] to the coordinate you selected previously
int build_x = 5;
int build_y = -60;
int build_z = 5;
mcpp::Coordinate coord( build_x, build_y, build_z);
mc.setBlock(coord, mcpp::Blocks::BRICKS);
return EXIT_SUCCESS;
}