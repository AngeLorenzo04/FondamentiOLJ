#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
#include<stdlib.h>
#include<stdio.h>
extern struct matrix *matrix_quadruplica(const struct matrix *m);
#define E(m,r,c) (m)->data[r * (m)->cols + c];