/**
 * @file compteepargne.cpp
 * @author Tom CHARLOT
 * @date 2026-09-25
 * @version 1.0
 * @brief Implémentation de la classe CompteEpargne.
* @details Contient le corps de toutes les méthodes déclarées dans
* compteepargne.h. Voir ce fichier pour la documentation des
* attribut de la classe.
 *
 */
#include "compteepargne.h"

/**
 * @brief CompteEpargne::CompteEpargne
 * @details Construit un compte epargne
 * @param _tauxInterets  taux d'interets du compte épargne
 * @param _solde  Solde du compte bancaire
 *
 */
CompteEpargne::CompteEpargne(const float _tauxInterets ,const float _solde):
    CompteBancaire(_solde),
    tauxInterets(_tauxInterets)

{}
/**
 * @brief CompteEpargne::CalculerInterets
 *  @details Permet à l'utilisateur de calculer sa solde avec le taux d'interets
 */
void CompteEpargne::CalculerInterets()
{
    solde+=(solde*tauxInterets/100);
}
/**
 * @brief CompteEpargne::ModifierTaux
 * @param _montant
 *  @details Permet de modifier le taux d'interets
 */
void CompteEpargne::ModifierTaux(float _nouveauTaux)
{
    tauxInterets=_nouveauTaux;
}


