/**
 * @file menu.h
 * @author Tom CHARLOT
 * @date 2026-09-25
 * @version 1.0
 * @brief Déclaration de la classe Menu.
 * @details Ce fichier contient l'interface de la classe Menu,
 *          Elle permet d'effectuer les actions possible
 */
#ifndef MENU_H
#define MENU_H
#include <string>

using namespace  std;
/**
 * @brief  Classe Menu
 */
class Menu
{
public:
    Menu(const string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();

private:
    ///Nom du fichier
    string nom;
    ///Options qu'il y a dans le fichier
    string * options;
    ///Nombres options dans le fichier
    int nbOptions;
    ///Longueur maximum d'une option du fichier
    int longueurMax;

};

#endif // MENU_H
