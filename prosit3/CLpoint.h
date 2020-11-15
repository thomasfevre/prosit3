#pragma once
#ifndef POINTS
#define POINTS


class CLpoint
{
public:
    CLpoint();
    CLpoint(float x, float y);
    void virtual afficher();
    double virtual getPoint(int);

protected :
    int m_ID;
    int m_type;
    float m_x;
    float m_y;
    static int compteur;
};
#endif
