#ifndef COMPTEUR_H
#define COMPTEUR_H
#include <iostream>
using namespace  std;

class Compteur
{
public:
    Compteur(int _valeurInit=0, int _pas=1);
    ~Compteur();
    void Incrementer();
    void Decrementer();
    void Reinitialiser();
    int getValeur() const;
    void setValeur(int v);
    int getPas() const;
    void setPas(int p);
    Compteur operator+(const Compteur &_autre);
    friend  ostream & operator<<(ostream &_flux, const Compteur &_cpt);
    bool operator ==(const Compteur &_autre);
private :
    int valeurInit;
    int pas;


};
#endif // COMPTEUR_H
