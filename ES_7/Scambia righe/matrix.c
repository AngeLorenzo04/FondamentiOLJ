#include "matrix.h"

void printm(const struct matrix* m, char* s) {

	printf("%s\n", s);
	for (size_t r = 0; r < m->N; r++) {
		for (size_t c = 0; c < m->M; c++) {
			printf("%f ", E(m, r, c));
		}

		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");

}

void mat_swaprows(struct matrix* mat, size_t r1, size_t r2) {

	printm(mat, "mat prima");
	double* tmp = malloc(mat->M * sizeof(double));
	double* tmp1 = malloc(mat->M * sizeof(double));
	
	for (size_t r = 0; r < mat->N; r++) {
		for (size_t c = 0; c < mat->M; c++) {
			if (r == r2) {
				tmp[c] = E(mat, r, c);
			}
			if (r == r1) {
				tmp1[c] = E(mat, r, c);
			}
			
		}
	}

	for (size_t r = 0; r < mat->N; r++) {
		for (size_t c = 0; c < mat->M; c++) {
			if (r == r2) {
				E(mat, r, c) = tmp1[c];
			}
			if (r == r1) {
				 E(mat, r, c) = tmp[c];
			}

		}
	}

	free(tmp);
	free(tmp1);

	printm(mat, "mat dopo");

}