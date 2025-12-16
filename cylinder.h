#ifndef CYLINDER_H
#define CYLINDER_H
#include "constants.h"

class Cylinder{
public:
    int height;
    int radius;
    int *p_height = new int;
    int *p_radius = new int;
    Cylinder() = default;
    Cylinder(int r, int h); // define either in cpp file or .h file, not in both
    
    void setHeight(int h);
    int getHeight();
    void setRadius(int r);
    int getRadius();
    double volume();
};

Cylinder::~Cylinder(){
        delete p_height;
        delete p_radius;
    }

#endif