#ifndef __CUBE__
#define __CUBE__

class Cube {
public:
    Cube(float x = 0);
    ~Cube();
    float getEdge();
    void setEdge(float newEdge);
    void display();
    void area();
    void volume();

protected:
    float edge;
};

#endif
