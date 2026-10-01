
/**
 * @file compteclient.cpp
 * @author Tom CHARLOT
 * @date 2026-10-01
 * @version 1.0
 * @brief Implémentation de la classe CompteClient.
* @details Contient le corps de toutes les méthodes déclarées dans
* compteclient.h. Voir ce fichier pour la documentation des
* attribut de la classe.
 *
 */

#include "compteclient.h"
#include "menu.h"

/**
 * @brief CompteClient::CompteClient
 * @details Construit un compte client
 * @param &_nom Nom de la personne qui détient le compte, _numero Numéro du compte client, _solde Solde du compte bancaire
 *
 */
CompteClient::CompteClient(const string &_nom, const int _numero,const float _solde):
    leComptebancaire(new CompteBancaire(_solde)),
    leCompteEpargne(nullptr),
    nom(_nom),
    numero(_numero)

{

}

CompteClient::~CompteClient()
{
    delete leComptebancaire;
    if (leCompteEpargne!=nullptr){
        delete leCompteEpargne;
    }
}

void CompteClient::OuvrirCompteEpargne()
{
    int soldeEpargne;
    int tauxInteret;
    if (leCompteEpargne == nullptr){
        cout << "Choissisez le montant de votre solde de départ" << endl;
        cin >> soldeEpargne;
        cout << "Choissisez le taux d'interet" << endl;
        cin >> tauxInteret;
        leCompteEpargne = new CompteEpargne(tauxInteret,soldeEpargne);
    }

}
/**
 * @brief CompteClient::GererCompteBancaire
 *  @details Permet de gérer le compte bancaire
 */
void CompteClient::GererCompteBancaire()
{
    enum CHOIX_MENU
    {
        OPTION_1 = 1,
        OPTION_2 ,
        OPTION_3 ,
        QUITTER
    };
    int choix;
    Menu leMenuBancaire("CompteBancaire.txt");


    do
    {
        cout << "\033[2J\033[H";
        choix = leMenuBancaire.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous voulez consulter votre solde" << endl;
            cout << "Votre solde est de : "<<leComptebancaire->ConsulterSolde()<< endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous voulez effectuer un dépôt" << endl;
            cout << "Choissisez le montant de votre dépôt" << endl;
            float montantDepot;
            cin>>montantDepot;
            leComptebancaire->Deposer(montantDepot);
            cout << "Votre dépôt a été effectué" << endl;
            Menu::AttendreAppuiTouche();
            break;

        case OPTION_3:
            cout << "Vous effectuer un retrait" << endl;
            cout << "Choissisez le montant de votre retrait" << endl;
            float montantRetrait;
            cin>>montantRetrait;
            if(leComptebancaire->Retirer(montantRetrait)==false){
                cout<<"Le retrait n'a pas pu avoir lieu, solde insuffisant"<<endl;
                Menu::AttendreAppuiTouche();
            }
            break;
        }
    } while(choix != QUITTER);
}
/**
 * @brief CompteClient::GererCompteEpargne
 *  @details Permet de gérer le compte épargne
 */
void CompteClient::GererCompteEpargne()
{
    enum CHOIX_MENU
    {
        OPTION_1 = 1,
        OPTION_2 ,
        OPTION_3 ,
        OPTION_4 ,
        QUITTER
    };
    int choix;
    Menu leMenu("CompteEpargne.txt");

    do
    {
        cout << "\033[2J\033[H";
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous voulez consulter votre solde" << endl;
            cout << "Votre solde est de : "<<leCompteEpargne->ConsulterSolde()<< endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous voulez effectuer un dépôt" << endl;
            cout << "Choissisez le montant de votre dépôt" << endl;
            float montantDepot;
            cin>>montantDepot;
            leCompteEpargne->Deposer(montantDepot);
            cout << "Votre dépôt a été effectué" << endl;
            Menu::AttendreAppuiTouche();
            break;

        case OPTION_3:
            cout << "Vous effectuer un retrait" << endl;
            cout << "Choissisez le montant de votre retrait" << endl;
            float montantRetrait;
            cin>>montantRetrait;
            if(leCompteEpargne->Retirer(montantRetrait)==false){
                cout<<"Le retrait n'a pas pu avoir lieu, solde insuffisant"<<endl;
                Menu::AttendreAppuiTouche();
            }
            break;
        case OPTION_4:
            float taux;
            cout << "Vous voulez calculer les interets" << endl;
            cout << "Valeur de l'interet" << endl;
            cin>>taux;
            leCompteEpargne->ModifierTaux(taux);
            leCompteEpargne->CalculerInterets();
            cout << "Votre solde est de : " << leCompteEpargne->ConsulterSolde() << endl;

            Menu::AttendreAppuiTouche();
            break;
        }
    } while(choix != QUITTER);
}



