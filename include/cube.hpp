#ifndef CUBE_HPP
#define CUBE_HPP

#include "particle.hpp"

namespace Cube {

class Face : public Particle
{
public:
    Face(int xpos, int ypos, int length, int width);
    void getDimensions(int &lengthOut, int &widthOut) const;
private:
    int length;
    int width;
};

} // namespace Cube

#endif // CUBE_HPP