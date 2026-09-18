#include "emballage.h"
#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>


Emballage::Emballage(const string _formats, const int _resistanceMax, const int _longueur, const int _largeur, const int _hauteur):
    formats(_formats),
    resistanceMax(_resistanceMax),
    longueur(_longueur),
    largeur(_largeur),
    hauteur(_hauteur),
    stock(0)

{
    cout<<"Constructeur : Emballage "<<formats<<endl;
}
    Emballage::~Emballage()
    {
        cout<<"Destructeur : Emballage "<<formats<<endl;
    }

    void Emballage::Visualiser()

    {

        if (hauteur==0){
            cout<<"|"<<setfill(' ')<<setw(15)<<left<<formats<<"|"<<resistanceMax<<setw(14)<<left<<" kg"<<"|"<<longueur<<" X "<<setw(14)<<left<<largeur<<"|"<<endl;
        }
        else
            cout<<"|"<<setw(15)<<left<<formats<<"|"<<resistanceMax<<setw(14)<<left<<" kg"<<"|"<<longueur<<" X "<<largeur<<" X "<<setw(8)<<left<<hauteur<<"|"<<endl;
    }

    int Emballage::getVolume() const
    {
        if (hauteur==0){
            return (largeur*longueur)/100;
        }
        return (largeur*longueur*hauteur)/1000;
    }

    bool Emballage::operator<(const Emballage &_autre) const
    {
        return getVolume()<_autre.getVolume();
    }


