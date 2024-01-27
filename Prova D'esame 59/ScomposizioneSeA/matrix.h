#pragma once
#include<stdlib.h>
#include<stdio.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
extern void mat_symdecomp(const struct matrix* m, struct matrix* S, struct matrix* A);
#define E(matrice,riga,colonna) (matrice)->data[(riga) * (matrice)->cols + (colonna)]