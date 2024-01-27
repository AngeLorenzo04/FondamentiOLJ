#pragma once

#include<stdlib.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* mat_transpose(const struct matrix* mat);
#define E(matrice,riga,colonna) (matrice)->data[(riga) * (matrice)->cols + (colonna)]