#include <iostream>
#include "CLpoint.h"

using namespace std;
int CLpoint::compteur = 1;

CLpoint::CLpoint() :m_x(0), m_y(0), m_ID(0), m_type(1)
{
    m_ID = compteur;
}

CLpoint::CLpoint(float x, float y) : m_x(x), m_y(y), m_ID(0), m_type(1)
{
    m_ID = compteur;
    compteur++;
}

void CLpoint::afficher() {
    cout << "les coordonnees du point sont :	addresse="<< this << "   d'ID:" << m_ID << ", de type:" << m_type << ",   coord: (" << m_x << ":" << m_y << ")";
    cout << endl;
}


double CLpoint::getPoint( int c) {
    if (c == 1) {
        return this->m_x;
    }
    else return this->m_y;
}

/*float Points::calcul()
{
    float result;

    result = sqrt(pow((p.m_x - m_x), 2) + pow((p.m_y - m_y), 2));

    cout << "distance : ";

    return result;
}*/


