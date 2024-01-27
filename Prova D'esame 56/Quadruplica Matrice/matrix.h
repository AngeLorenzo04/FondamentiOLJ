#pragma once
#include<stdlib.h>
#include<stdio.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* matrix_quadruplica(const struct matrix* m);
#define E(m,c,r) m->data[r * m->cols + c]