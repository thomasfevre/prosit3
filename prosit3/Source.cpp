

#include <iostream>
#include "CLpoint3D.h"
#include "CLparcours3D.h"

using namespace std;



int main()
{

    CLpoint* Pa, * Pb, * Pc;
    CLparcours2D* pp;
    

    Pa = new CLpoint(0, 0);
    Pb = new CLpoint(1, 1);
    Pc = new CLpoint(2, 2);

    Pa->afficher();
    Pb->afficher();
    Pc->afficher();

    pp = new CLparcours2D(3);
    pp->ajouterPoint(Pa);
    pp->ajouterPoint(Pb);
    pp->ajouterPoint(Pc);

    pp->calculDistance();
    pp->message();

    Pa = new CLpoint3D(0, 0, 0);
    Pb = new CLpoint3D(1, 1, 1);
    Pc = new CLpoint3D(2, 2, 2);

    Pa->afficher();
    Pb->afficher();
    Pc->afficher();
    
    pp = new CLparcours3D(3);
    pp->ajouterPoint(Pa);
    pp->ajouterPoint(Pb);
    pp->ajouterPoint(Pc);

    pp->calculDistance();
    pp->message();

    Pa = new CLpoint(0.0, 0.0);

    Pb = new CLpoint3D(1.0, 1.0, 1.0);



    (Pa = Pb)->afficher();
  
    return 0;
}