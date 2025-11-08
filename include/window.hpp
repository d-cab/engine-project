#include "cube.hpp"
#include "particle.hpp"


class Window
{
public:
    Window(int width, int height);
    void render(Cube::Face face) const;
private:
    int width;
    int height;
};