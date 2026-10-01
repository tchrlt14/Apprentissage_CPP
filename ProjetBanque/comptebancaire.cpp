/**
 * @file comptebancaire.cpp
 * @author Tom CHARLOT
 * @date 2026-09-24
 * @version 1.0
 * @brief Implémentation de la classe CompteBancaire.
* @details Contient le corps de toutes les méthodes déclarées dans
* comptebancaire.h. Voir ce fichier pour la documentation des
* attribut de la classe.
 *
 */
#include "comptebancaire.h"
/**
 * @brief CompteBancaire::CompteBancaire
 * @details Construit un compte bancaire
 * @param _solde  Solde du compte bancaire
 *
 */

CompteBancaire::CompteBancaire(const float _solde):
    solde(_solde)
{
}
/**
 * @brief CompteBancaire::Deposer
 * @param _montant
 *  @details Permet à l'utilisateur de déposer de l'argent sur son compte bancaire
 */

void CompteBancaire::Deposer(float _montant)
{
    solde+= _montant;
}
/**
 * @brief CompteBancaire::Retirer
 * @param _montant
 *  @details Permet à l'utilisateur de retirer de l'argent sur son compte bancaire à condition que le _montant soit inféreieur à la solde
 */
bool CompteBancaire::Retirer(float _montant)
{
    bool retour =false;
    if (_montant<solde){
        solde-=_montant;
        retour= true;
    }
    return retour;

}
/**
 * @brief CompteBancaire::ConsulterSolde
 *  @details Permet à l'utilisateur de consulter ça solde
 */
float CompteBancaire::ConsulterSolde()
{
    return solde;
}





