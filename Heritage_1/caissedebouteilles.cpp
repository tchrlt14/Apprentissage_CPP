#include "caissedebouteilles.h"
#include <iostream>
using namespace std;

CaisseDeBouteilles::CaisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur, const int _contenance, const int _nbBouteilles):
    Contenant(_largeur,_hauteur,_profondeur),
    contenance(_contenance),
    nbBouteilles(_nbBouteilles)
{
    cout << "Constructeur de la classe Carton" << endl;
}

CaisseDeBouteilles::~CaisseDeBouteilles()
{

}

int CaisseDeBouteilles::CalculerVolume()
{
    return contenance * nbBouteilles;
}
