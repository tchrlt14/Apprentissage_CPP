/**
 * @file vanne.cpp
 * @author Tom CHARLOT
 * @date 2026-09-22
 * @version 1.0
 * @brief Implémentation de la classe Vanne.
* @details Contient le corps de toutes les méthodes déclarées dans
* vanne.h. Voir ce fichier pour la documentation des
* attribut de la classe.
 *
 */


#include "vanne.h"
#include <iostream>
/**
 * @brief Vanne::Vanne
 * @details Construit une vanne
 * @param _brocheImpulsion  Broche pour envoyer l'impulsion
 * @param _sensA            Broche qui permet de déterminer le sens de l'impulsion
 * @param _sensB            Broche qui permet de déterminer le sens de l'impulsion
 *
 */
Vanne::Vanne(const gpio_num_t _brocheImpulsion,const gpio_num_t _sensA,const gpio_num_t _sensB) :
    impulsion(_brocheImpulsion),
    sensA(_sensA),
    sensB(_sensB)
{
    cout<<"Constructeur de ZoneArrosage"<<endl;
}

/**
* @brief Vanne::Ouvrir
* @details Ouvre la vanne
*/
void Vanne::Ouvrir(){
    cout<<"Ouverture de la vanne"<<impulsion<<endl;
}
/**
* @brief Vanne::Fermet
* @details Ferme la vanne
*/
void Vanne::Fermer()
{
    cout<<"fermeture de la vanne"<<impulsion<<endl;
}
