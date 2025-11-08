#ifndef PARTICLE_HPP
#define PARTICLE_HPP

class Particle
{
public:
    Particle(int xpos, int ypos, int xvel, int yvel);
    Particle(int xpos, int ypos);
    Particle();

    void updatePosition(double dt);
    void setVelocity(int xvel, int yvel);
    void getPosition(int &xpos, int &ypos) const;
    void getVelocity(int &xvel, int &yvel) const;

private:
    int x;
    int y;
    int vx;
    int vy;
};

#endif // PARTICLE_HPP