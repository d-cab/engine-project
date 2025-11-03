#include <iostream>
#include <vector>
#include <string>

const int SIDE_LENGTH = 10;
const int WINDOW_HEIGHT = 35;
const int WINDOW_WIDTH = 100;

class Cube
{
public:
    Cube(int side_length) : side_length_(side_length) {}
    int getSideLength() const { return side_length_; }
    void setPosition(int x, int y)
    {
        position_x_ = x;
        position_y_ = y;
    }
    std::pair<int, int> getPosition() const
    {
        return {position_x_, position_y_};
    }
private:
    int side_length_;
    int position_x_;
    int position_y_;

};

int main()
{
    std::vector<std::string> screen(WINDOW_HEIGHT, std::string(WINDOW_WIDTH, '-'));
    
    Cube cube(SIDE_LENGTH);
    cube.setPosition(10, 5);

    auto [pos_x, pos_y] = cube.getPosition();

    for (int i = 0; i < cube.getSideLength(); ++i)
    {
        for (int j = 0; j < cube.getSideLength(); ++j)
        {
            if (pos_y + i < WINDOW_HEIGHT && pos_x + j < WINDOW_WIDTH)
            {
                screen[pos_y + i][pos_x + j] = '#';
            }
        }
    }
    
    for (const auto& row : screen)
        std::cout << row << '\n';
    
    return 0;    
}    

