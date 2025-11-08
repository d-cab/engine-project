#include "particle.hpp"
#include "cube.hpp"

namespace Cube
{

Face::Face(int xpos, int ypos, int length, int width)
    : Particle(xpos, ypos), length(length), width(width) {}

void Face::getDimensions(int &lengthOut, int &widthOut) const {lengthOut = length; widthOut = width; }

} // namespace Cube