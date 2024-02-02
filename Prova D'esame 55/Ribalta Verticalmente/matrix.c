#include "matrix.h"

void printm(const struct matrix* m, char* s) {

	printf("%s \n", s);

	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			printf("%f ",E(m, r, c));
		}
		printf("\n");

	}
	printf("\n");
	printf("\n");
}

struct matrix* matrix_flip_v(const struct matrix* m) {
	printm(m, "m: \n");
	struct matrix* ris = malloc(sizeof(struct matrix));
	ris->rows = m->rows;
	ris->cols = m->cols;
	ris->data = malloc(m->rows * m->cols * sizeof(double));

	int k = 2;
	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			E(ris, r, c) = E(m, r + k, c);
			
		}
		k -= 2;
	}

	printm(ris, "ris: \n");

	return ris;
 }

/*

		1 2 3  11 12 13   31 32 33   1 + 2  k = + 2
		4 5 6  21 22 23   21 22 23   2 + 0
		7 8 9  31 32 33   11 12 13   3 - 2

*/