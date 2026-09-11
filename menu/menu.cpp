#include "menu.h"
#include <fstream>
#include <iostream>
#include <algorithm>
#include <iomanip>
#include<limits>


Menu::Menu(const string &_nom)
    :nom(_nom)
    ,longueurMax(0)
{
    ifstream fichierMenu(nom.c_str());
    int i ;
    if (!fichierMenu.is_open()){
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
        nbOptions = 0;
    }
    else{

        nbOptions = static_cast<int>(count(istreambuf_iterator<char>(fichierMenu),istreambuf_iterator<char>(),'\n'));
        fichierMenu.seekg(0,ios::beg);
        options = new string [nbOptions];
        char ligne[50];
        for (i = 0; i < nbOptions; i++){
            fichierMenu.getline(ligne, 50);
            options[i]=string(ligne);
            if (options[i].length()>longueurMax){
                longueurMax=options[i].length();

            }
        }
        fichierMenu.close();
    }


}

Menu::~Menu()
{
    delete [] options;
}


int Menu::Afficher()
{
    cout<<"+"<<setw(4)<<setfill('-')<<"+"<<setw(longueurMax+2)<<setfill('-')<<"+"<<endl ;
    for ( int i = 0; i < nbOptions; i++){

        cout << "|"<<setw(2)<<setfill(' ')<< i+1 <<setw(2)<<setfill(' ')<< "|"<<setw(longueurMax)<<setfill(' ')<< options[i]<<setw(2)<<setfill(' ') << "|" << endl;
    }
    cout<<"+"<<setw(4)<<setfill('-')<<"+"<<setw(longueurMax+2)<<setfill('-')<<"+"<<endl ;

    int choix = 0;
    cout << "Saisir une option ";


    if(!(cin>>choix))
    {
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        choix = -1;
    }
    return choix;
}


void Menu::AttendreAppuiTouche()
{
    string uneChaine;
    cout << endl << "appuyer sur la touche Entrée pour continuer...";
    getline(cin,uneChaine);
    cin.ignore( std::numeric_limits<streamsize>::max(), '\n' );
    system("clear");
}


