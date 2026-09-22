#ifndef CAPTEURHUMIDITE_H
#define CAPTEURHUMIDITE_H
#include <iostream>
using namespace std;
#define gpio_num_t int

class CapteurHumidite
{
public:
    CapteurHumidite(const gpio_num_t _brocheCapteur);
    int MesurerHumiditeDuSol();
private:
    int capteur;
};


#endif // CAPTEURHUMIDITE_H
