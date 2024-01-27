#include "matrix.h"

void printm(const struct matrix* m) {
	printf("mtr stampata...\n");
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			printf("%f ", m->data[r * m->cols + c]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
}

struct matrix* matrix_quadruplica(const struct matrix* m) {

	if (m == NULL) {
		return NULL;
	}
	
	struct matrix* a = malloc(sizeof(struct matrix));
	a->rows = m->rows * 2;
	a->cols = m->cols * 2;
	a->data = calloc(a->rows * a->cols, sizeof(double));
	
	printm(m);
	
	size_t rm = 0;
	size_t cm = 0;
	for (size_t r = 0; r < a->rows; ++r) {
		
		for (size_t c = 0; c < a->cols; ++c) {
			if (cm == m->cols) {
				cm = 0;
			}
			a->data[r * a->cols + c] = m->data[rm * m->cols + cm];
			cm++;
		}
		cm = 0;
		rm++;
		if (rm == m->rows) {
			rm = 0;
		}
	}
	
	printm(a);

	

	return a;
	
}