#pragma once
#ifndef CL_PARCOURS3D
#define CL_PARCOURS3D
#include "CLparcours2D.h"

class CLparcours3D : public CLparcours2D
{
public:
    CLparcours3D(int);
    void calculDistance();
    void message();
};
#endif