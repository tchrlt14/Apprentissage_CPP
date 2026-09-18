#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include "emballage.h"

using namespace std;

int main()
{
    Emballage unEmballage("XS",5,6,2,0);
    unEmballage.Visualiser();

    Emballage unEmballage3("XS",5,6,2,1);
    unEmballage3.Visualiser();
    // Emballage* unEmballage2 = new Emballage("XL",5,3,2,1);
    // unEmballage2->Visualiser();

    cout<<"Le volume du premier emballage est : "<<unEmballage.getVolume()<<endl;
    cout<<"Le volume du deuxième emballage est : "<<unEmballage3.getVolume()<<endl;
    if(unEmballage<unEmballage3){
        cout<<"Le premier est plus petit"<<endl;

    }else
        cout<<"Le deuxieme est plus petit"<<endl;

    return 0;

//     Emballage* tableau[5];
//     string formats;
//     int resistanceMax;
//     int longueur;
//     int largeur;
//     int hauteur;
//     for (int i =0; i<5;i++){

//         cout<<"Formats : "<<endl;
//         cin>>formats;
//         cout<<"Resistance maximale : "<<endl;
//         cin>>resistanceMax;
//         cout<<"Longueur : "<<endl;
//         cin>>longueur;
//         cout<<"Largeur : "<<endl;
//         cin>>largeur;
//         cout<<"Hauteur : "<<endl;
//         cin>>hauteur;
//         tableau[i] = new Emballage(formats,resistanceMax,longueur,largeur,hauteur);
//     }


// cout<<"+"<<setw(16)<<setfill('-')<<"+"<<setw(16)<<setfill('-')<<"+"<<setw(21)<<setfill('-')<<"+"<<endl;
// cout<<"|"<< setfill(' ') << setw(15) << left  <<"Format" << "|" << setw(15)<< left << "Resistance"<< "|" << setw(20)<<left<< "Dimensions" <<"|"<< endl ;
//     for (int i =0; i<5;i++){
//         tableau[i]->Visualiser();
//     }
// cout<<setw(16)<<setfill('-')<<"+"<<setw(16)<<setfill('-')<<"+"<<setw(21)<<setfill('-')<<"+"<<"+"<<endl;



}
