#include "window.hpp"
#include <iostream>

Window::Window(int width, int height) : width(width), height(height) {}

void Window::render(Cube::Face face) const
{
    int xpos, ypos, faceLength, faceWidth;
    face.getPosition(xpos, ypos);
    face.getDimensions(faceLength, faceWidth);
    
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            if (j >= xpos && j < xpos + faceWidth &&
                i >= ypos && i < ypos + faceLength)
            {
                std::cout << "#"; // Representing the face
            }
            else
            {
                std::cout << ".";
            }
        }
        std::cout << std::endl;
    }
}
