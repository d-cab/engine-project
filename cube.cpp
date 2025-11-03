#include <iostream>


const int DEFAULT_SIDE_LENGTH = 10;
const int DEFAULT_WINDOW_HEIGHT = 35;
const int DEFAULT_WINDOW_WIDTH = 100;



int main()
{
    for(int i = 0; i < DEFAULT_WINDOW_HEIGHT; ++i)
    {
        for(int j = 0; j < DEFAULT_WINDOW_WIDTH; ++j)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

