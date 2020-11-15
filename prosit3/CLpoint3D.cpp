#include <iostream>
#include "CLpoint3D.h"

using namespace std;

CLpoint3D::CLpoint3D(float x, float y, float z) : m1_z(z)
{
	m_x = x;
	m_y = y;
	m_type = 2;
	compteur++;
}


void CLpoint3D::afficher() {
	cout << "les coordonnees du point sont :	addresse=" << this <<"   d'ID:"<< m_ID << ", de type:" << m_type <<",   coord: (" << m_x << ":" << m_y << ")" <<"("<<m1_z<<")";
	cout << endl;
}

double CLpoint3D::getPoint( int c) {
	if (c == 1) {
		return this->m_x;
	}
	else if (c == 2) {
		return this->m_y;
	}
	else if (c == 3) {
		return this->m1_z;
	}
	else return 0;
}