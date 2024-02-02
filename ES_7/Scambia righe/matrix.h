#pragma once
#include <stdlib.h>
#include <stdio.h>
struct matrix {
	size_t N, M; //N righe e M colonne
	double* data;
};
#define E(m,r,c) m->data[r * m->M + c]
extern void mat_swaprows(struct matrix* mat, size_t r1, size_t r2);