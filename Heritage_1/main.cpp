#include <iostream>
#include "contenant.h"
#include "carton.h"
#include "caissedebouteilles.h"


using namespace std;

int main()
{
    cout<<"Contenant------------"<<endl;
    Contenant unContenant(5,10,2);
    cout << "Volume du contenant : " <<unContenant.CalculerVolume()<< endl;

    cout<<"Carton------------"<<endl;
    Carton unCarton(3,3,3,5.5);
     cout << "Volume du carton : " <<unCarton.CalculerVolume()<< endl;
     cout << "Poids max du carton : " <<unCarton.ObtenirPoidsMaxi()<< endl;
     cout << "Poids max du carton : " <<unCarton.ObtenirHauteurCarton()<< endl;

     cout<<"Caisse de bouteilles------------"<<endl;
     CaisseDeBouteilles uneCaisseDeBouteilles(25,17,31,6,75);
     cout << "Volume d'une caisse de bouteilles : " <<uneCaisseDeBouteilles.CalculerVolume()<< endl;
     Contenant *ptContenant;
     ptContenant = &uneCaisseDeBouteilles;
     cout<<"Volume de la caisse de vin : "<< ptContenant->CalculerVolume()<<endl;
     cout<<"Volume de la caisse de vin : "<<static_cast<Contenant>(uneCaisseDeBouteilles).CalculerVolume()<<endl;
    return 0;
}
