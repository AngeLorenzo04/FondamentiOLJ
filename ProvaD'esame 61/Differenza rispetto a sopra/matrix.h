#pragma once
struct matrix {
    size_t rows, cols;
    double* data;
};
#include <stdlib.h>
#include <stdio.h>
extern struct matrix* mat_diffup(const struct matrix* m);
