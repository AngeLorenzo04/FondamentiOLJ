#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
#include <stdlib.h>
extern struct matrix* scambia_diagonali(const struct matrix* m);
#define E(matrice,riga,colonna) (matrice)->data[(riga) * (matrice)->cols + (colonna)]
