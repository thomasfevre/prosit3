#pragma once
#ifndef CL_PARCOURS2D
#define CL_PARCOURS2D
#include "CLpoint.h"
#include <vector>

class CLparcours2D 
{
public:
    CLparcours2D();
    CLparcours2D(int);
    void ajouterPoint(CLpoint*);
    void virtual calculDistance();
    void virtual message();
protected:
    std::vector <CLpoint*> listep;
    int m_nbr_p;
};
#endif