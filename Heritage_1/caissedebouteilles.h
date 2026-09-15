#ifndef CAISSEDEBOUTEILLES_H
#define CAISSEDEBOUTEILLES_H

#include "contenant.h"

class CaisseDeBouteilles : public Contenant
{
public:
    CaisseDeBouteilles(const int _largeur, const int _hauteur, const int _profondeur, const int _contenance, const int _nbBouteilles);
    ~CaisseDeBouteilles();
    int CalculerVolume();
private:
    int nbBouteilles;
    int contenance;
};

#endif // CAISSEDEBOUTEILLES_H
