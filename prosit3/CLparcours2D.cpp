#include <iostream>
#include "CLparcours2D.h"

using namespace std;

CLparcours2D::CLparcours2D() : m_nbr_p(0), listep(0)
{}

CLparcours2D::CLparcours2D(int n) : m_nbr_p(0), listep(0)
{
	m_nbr_p = n;
}


void CLparcours2D::ajouterPoint(CLpoint* p) {
	listep.push_back(p);
}

void CLparcours2D::calculDistance() {
	double resultat = 0;
	for (long int i = 0; i < (m_nbr_p-1); i++) {
		resultat += sqrt(pow((listep[((long int)i + 1)]->getPoint(1) - listep[i]->getPoint(1)), 2) + pow((listep[((long int)i + 1)]->getPoint(2) - listep[i]->getPoint(2)), 2));
	}
	cout << endl << "distance : " << resultat << endl;
}

void CLparcours2D::message() {
	cout << "calcul d'un parcours de type 2D" << endl << endl;
}