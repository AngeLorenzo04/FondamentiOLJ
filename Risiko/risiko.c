#include"risiko.h"
void confronta_lanci(const struct lancio* attacco, const struct lancio* difesa,
    char* perse_attacco, char* perse_difesa) 
{

    char perseatt = 0;
    char persedif = 0;
    
    char ndadiatt = attacco->n_dadi;
    char ndadidif = difesa->n_dadi;
    char ndadi = 0;
    if (ndadiatt >= ndadidif) {
        ndadi = ndadidif;
    }
    else {
        ndadi = ndadiatt;
    }

     for (char i = 0; i < ndadi; i++) {
        if (attacco->valori[i] > difesa->valori[i]) {
            persedif++;
        }
        else {
            perseatt++;
        }
    }

    *perse_attacco = perseatt;
    *perse_difesa = persedif;

}