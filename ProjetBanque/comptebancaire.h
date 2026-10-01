/**
 * @file comptebancaire.h
 * @author Tom CHARLOT
 * @date 2026-09-24
 * @version 1.0
 * @brief Déclaration de la classe CompteBancaire.
 * @details Ce fichier contient l'interface de la classe CompteBancaire,
 *          Elle permet d'effectuer les actions possible
 */


#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include <iostream>
using namespace std;
/**
 * @brief  Classe CompteBancaire
 */
class CompteBancaire
{
public:
    CompteBancaire(const float _solde = 0);
    void Deposer(float _montant);
    bool Retirer(float _montant);
    float ConsulterSolde();
protected:
    float solde;///Solde du compte Bancaire
};


#endif // COMPTEBANCAIRE_H
