#include <iostream>
#include "menu.h"
#include "comptebancaire.h"
#include "compteepargne.h"
#include "compteclient.h"
using namespace std;

// int main()
// {


//     int choix;
//     Menu leMenu("CompteBancaire.txt");
//     // CompteBancaire leCompteEpargne(500);
//     CompteEpargne leCompteEpargne(1.5,500000000);

//     do
//     {
//         cout << "\033[2J\033[H";
//         choix = leMenu.Afficher();
//         switch (choix)
//         {
//         case Menu::OPTION_1:
//             cout << "Vous voulez consulter votre solde" << endl;
//             cout << "Votre solde est de : "<<leCompteEpargne.ConsulterSolde()<< endl;
//             Menu::AttendreAppuiTouche();
//             break;
//         case Menu::OPTION_2:
//             cout << "Vous voulez effectuer un dépôt" << endl;
//             cout << "Choissisez le montant de votre dépôt" << endl;
//             float montantDepot;
//             cin>>montantDepot;
//             leCompteEpargne.Deposer(montantDepot);
//             cout << "Votre dépôt a été effectué" << endl;
//             Menu::AttendreAppuiTouche();
//             break;

//         case Menu::OPTION_3:
//             cout << "Vous effectuer un retrait" << endl;
//             cout << "Choissisez le montant de votre retrait" << endl;
//             float montantRetrait;
//             cin>>montantRetrait;
//             if(leCompteEpargne.Retirer(montantRetrait)==false){
//                 cout<<"Le retrait n'a pas pu avoir lieu, solde insuffisant"<<endl;
//                 Menu::AttendreAppuiTouche();
//             }
//             break;
//         case Menu::OPTION_4:
//             float taux;
//             cout << "Vous voulez calculer les interets" << endl;
//             cout << "Valeur de l'interet" << endl;
//             cin>>taux;
//             leCompteEpargne.ModifierTaux(taux);
//             leCompteEpargne.CalculerInterets();
//             cout << "Votre solde est de : " << leCompteEpargne.ConsulterSolde() << endl;

//             Menu::AttendreAppuiTouche();
//             break;
//         }
//     } while(choix != Menu::QUITTER);
//     return 0;
// }

int main()
{

    enum CHOIX_MENU
    {
        OPTION_1 = 1,
        OPTION_2 ,
        OPTION_3 ,
        QUITTER
    };
    int choix;
    Menu leMenuClient("CompteClient.txt");
    CompteClient leCompteClient("Albert",1);

    do
    {
        cout << "\033[2J\033[H";
        choix = leMenuClient.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous voulez créer un compte épargne" << endl;
            leCompteClient.OuvrirCompteEpargne();
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous voulez gérer votre compte bancaire" << endl;
            leCompteClient.GererCompteBancaire();
            Menu::AttendreAppuiTouche();
            break;

        case OPTION_3:
            cout << "Vous voulez gérer votre compte épargne" << endl;
            leCompteClient.GererCompteEpargne();
            break;
        }
    } while(choix != QUITTER);
    return 0;
}