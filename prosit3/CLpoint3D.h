#pragma once
#include "CLpoint.h"
#ifndef POINT3D
#define POINT3D


class CLpoint3D : public CLpoint
{
public:
    CLpoint3D(float, float, float);
    void virtual afficher();
    double virtual getPoint(int);

private:
    float m1_z;
};
#endif 
