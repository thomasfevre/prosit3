#include <iostream>
#include "CLparcours3D.h"

using namespace std;


CLparcours3D::CLparcours3D(int n)
{
	CLparcours2D::CLparcours2D();
	m_nbr_p = n;
}


void CLparcours3D::calculDistance() {
	double resultat = 0;
	for (int i = 0; i < m_nbr_p - 1; i++) {
		resultat += sqrt(pow((listep[i+1]->getPoint(1) - listep[i]->getPoint(1)), 2) + pow((listep[i + 1]->getPoint(2) - listep[i]->getPoint(2)), 2) + pow((listep[i + 1]->getPoint(3) - listep[i]->getPoint(3)), 2));
	}
	cout <<endl << "distance : " << resultat << endl;
}

void CLparcours3D::message() {
	cout << "calcul d'un parcours de type 3D" << endl << endl;;
}