#include "cylinder.h"

    Cylinder::Cylinder(int r, int h){
        radius = r;
        height = h;
    }
    void Cylinder::setHeight(int h){
        height = h;
    }
    int Cylinder :: getHeight(){
        return height;
    }
    void Cylinder :: setRadius(int r){
        radius = r;
    }
    int Cylinder :: getRadius(){
        return radius;
    }
    double Cylinder :: volume(){
        return PI * radius * radius * height;
    }