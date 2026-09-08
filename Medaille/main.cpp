#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string pays ;
    // string remplace un tableau de caractères. la taille de la chaîne est dynamique
    int nbOr;
    int nbArgent;
    int nbBronze;
    ifstream fichier("config.txt");
    if (!fichier.is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        ofstream fichierSortie("medaille.txt");
        if (!fichierSortie.is_open())
            cerr << "Erreur lors de l'ouverture du fichier" << endl;
        fichierSortie<<"+"<<setw(19)<<setfill('-')<<"+"<<setw(6)<<setfill('-')<<"+"<<setw(6)<<setfill('-')<<"+"<<setw(6)<<setfill('-')<<"+"<<endl ;
        do
        {

            // le fichier contient sur chaque ligne des couples mot clé + valeur
            fichier >> pays >>nbOr >> nbArgent >> nbBronze;

            if (fichier.good())//Si les valeurs ont bien été lues
            {

                fichierSortie<<"|"<< setfill(' ') << setw(18) << left  << pays << "|" << setw(5)<< right << nbOr << "|" << setw(5)<<right<< nbArgent <<"|"<< setw(5)<<right<<nbBronze << "|"<< endl ;
            }
        } while(!fichier.eof());
        fichierSortie<<"+"<<setw(19)<<setfill('-')<<"+"<<setw(6)<<setfill('-')<<"+"<<setw(6)<<setfill('-')<<"+"<<setw(6)<<setfill('-')<<"+"<<endl ;
    }
    return 0 ;
}