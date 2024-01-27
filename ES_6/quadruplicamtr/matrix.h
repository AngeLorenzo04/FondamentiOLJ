#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
#include<stdio.h>
#include<stdlib.h>
extern struct matrix* matrix_quadruplica(const struct matrix* m);