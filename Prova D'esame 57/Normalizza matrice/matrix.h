#pragma once
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
struct matrix {
    size_t rows, cols;
    double* data;
};
extern void mat_normalize_rows(struct matrix* m);
#define E(m,r,c) m->data[r * m->cols + c]