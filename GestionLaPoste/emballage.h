#ifndef EMBALLAGE_H
#define EMBALLAGE_H
#include <string>

using namespace std;

class Emballage
{
public:
    Emballage(const string _formats, const int _resistanceMax, const int _longueur, const int _largeur , const int _hauteur = 0);
    ~Emballage();
    void Visualiser();
    int getVolume() const;
    bool operator< (const Emballage &_autre) const;
private:
    string formats;
    int resistanceMax;
    int longueur;
    int largeur;
    int hauteur;
    int stock;
    int type;


};



#endif // EMBALLAGE_H
