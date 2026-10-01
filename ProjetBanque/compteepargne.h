/**
 * @file compteepargne.h
 * @author Tom CHARLOT
 * @date 2026-09-24
 * @version 1.0
 * @brief Déclaration de la classe CompteEpargne.
 * @details Ce fichier contient l'interface de la classe CompteEpargne,
 *          Elle permet d'effectuer les actions possible
 */
#ifndef COMPTEEPARGNE_H
#define COMPTEEPARGNE_H
#include "comptebancaire.h"
#include <iostream>
using namespace std;
/**
 * @brief Classe CompteEpargne
 */
class CompteEpargne : public CompteBancaire
{
public:
    CompteEpargne(const float _tauxInterets,const float _solde=0);
    void CalculerInterets();
    void ModifierTaux(float _nouveauTaux);
private:

    float tauxInterets; /// Taux d'intêrets

};
#endif // COMPTEEPARGNE_H
