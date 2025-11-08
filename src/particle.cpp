#include "particle.hpp"

class Particle
{
public:
    Particle(int xpos, int ypos, int xvel, int yvel) : x(xpos), y(ypos), vx(xvel), vy(yvel) {};
    Particle(int xpos, int ypos) : Particle(xpos, ypos, 0, 0){};
    Particle() : Particle(0, 0, 0, 0) {};

    void updatePosition(double dt)
    {
        x += vx * dt;
        y += vy * dt;
    }

    void setVelocity(int xvel, int yvel)
    {
        vx = xvel;
        vy = yvel;
    }

    void getPosition(int &xpos, int &ypos) const
    {
        xpos = x;
        ypos = y;
    }

    void getVelocity(int &xvel, int &yvel) const
    {
        xvel = vx;
        yvel = vy;
    }

private:
    int x;
    int y;
    int vx;
    int vy;
};