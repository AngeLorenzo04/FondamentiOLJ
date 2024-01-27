#include<stdlib.h>
#include<stdbool.h>

int pot(int base, int esponente) {
    
    if (esponente == 0) {
        return 1; 
    }

    int risultato = 1;

    for (int i = 0; i < esponente; ++i) {
        risultato *= base;
    }

    return risultato;
}

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c) {

    if 
        (
        pot(a, 2) == pot(b, 2) + pot(c, 2) ||
        pot(b, 2) == pot(a, 2) + pot(c, 2) ||
        pot(c, 2) == pot(a, 2) + pot(b, 2)
        ) 
    {

        return true;
    }

	return false;
}