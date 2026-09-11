#include <iostream>
#include "menu.h"
using namespace std;

int main()
{

    int choix;
    Menu leMenu("leMenu.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case Menu::OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case Menu::OPTION_2:
            cout << "Vous avez choisi l'option n°2" << endl;
            Menu::AttendreAppuiTouche();
            break;

        case Menu::OPTION_3:
            cout << "Vous avez choisi l'option n°3" << endl;
            Menu::AttendreAppuiTouche();
            break;

        case Menu::OPTION_4:
            cout << "Vous avez choisi l'option n°4" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
    } while(choix != Menu::QUITTER);
    return 0;
}

