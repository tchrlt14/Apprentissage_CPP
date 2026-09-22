/**
 * @file vanne.h
 * @author Tom CHARLOT
 * @date 2026-09-22
 * @version 1.0
 * @brief Déclaration de la classe Vanne.
 * @details Ce fichier contient l'interface de la classe vanne,
 *          Elle permet d'ouvir ou de fermer une vanne
 */
#ifndef VANNE_H
#define VANNE_H
#include <iostream>
using namespace std;
#define gpio_num_t int
/**
 * @class Vanne
 * @brief Représentaion de la classe Vanne dans le système d'arrosage
 *
 */
class Vanne
{
public:
    Vanne(const gpio_num_t _brocheImpulsion,const gpio_num_t _sensA,const gpio_num_t _sensB);
    void Ouvrir();
    void Fermer();
private:
    ///< Broche pour pilopter la vanne
    gpio_num_t impulsion;
     ///< Détermine le sens sensA = 1 et sensB = 0 -> impulision positive
    gpio_num_t sensA;
    ///< Détermine le sens sensA = 0 et sensB = 1 -> impulision negative
    gpio_num_t sensB;
};
#endif // VANNE_H
