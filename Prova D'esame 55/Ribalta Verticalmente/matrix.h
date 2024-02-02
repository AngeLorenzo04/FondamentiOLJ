#pragma once
#include<stdlib.h>
#include<stdio.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
extern struct matrix* matrix_flip_v(const struct matrix* m);
#define E(m,r,c)  m->data[r * m->cols + c]
