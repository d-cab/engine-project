#include <iostream>
#include <vector>
#include <string>
#include <chrono>
#include <thread>

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

void printScreen(const std::vector<std::string>& screen)
{
    for (const auto& row : screen)
        std::cout << row << '\n';
}

void updateScreen(std::vector<std::string>& screen, const Cube& cube)
{
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
}

int main()
{
    std::vector<std::string> screen(WINDOW_HEIGHT, std::string(WINDOW_WIDTH, '-'));
    
    Cube cube(SIDE_LENGTH);
    cube.setPosition(0, 0);

    auto [pos_x, pos_y] = cube.getPosition();


    int vx = 3;
    int vy = 1;

    while (true)
    {
        // reset screen
        for (auto &row : screen)
            row.assign(WINDOW_WIDTH, '-');

        updateScreen(screen, cube);

        // clear terminal and print
        std::cout << "\033[H\033[J";
        printScreen(screen);

        // move cube by its velocity (let it fly away off-screen)
        pos_x += vx;
        pos_y += vy;
        cube.setPosition(pos_x, pos_y);

        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;    
}    

