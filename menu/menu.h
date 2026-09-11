#ifndef MENU_H
#define MENU_H
#include <string>
using namespace  std;
class Menu
{
public:
    Menu(const string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
    enum CHOIX_MENU
    {
        OPTION_1 = 1,
        OPTION_2 ,
        OPTION_3 ,
        OPTION_4 ,
        QUITTER
    };
private:
    string nom;
    string * options;
    int nbOptions;
    int longueurMax;

};

#endif // MENU_H
