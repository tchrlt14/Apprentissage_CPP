/**
 * @file compteclient.h
 * @author Tom CHARLOT
 * @date 2026-10-1
 * @version 1.0
 * @brief Déclaration de la classe CompteClient.
 * @details Ce fichier contient l'interface de la classe CompteClient,
 *          Elle permet d'effectuer les actions possible
 */

#ifndef COMPTECLIENT_H
#define COMPTECLIENT_H
#include "comptebancaire.h"
#include "compteepargne.h"
#include <iostream>
using namespace std;
/**
 * @brief Classe CompteClient
 */
class CompteClient
{
public:
    CompteClient(const string &_nom,const int _numero,const float _solde=0);
    ~CompteClient();
    void OuvrirCompteEpargne();
    void GererCompteBancaire();
    void GererCompteEpargne();
private:
    CompteBancaire * leComptebancaire;
    CompteEpargne * leCompteEpargne;
    string nom; ///Nom du client
    int numero; ///Numéro du compte du client
};

#endif // COMPTECLIENT_H
