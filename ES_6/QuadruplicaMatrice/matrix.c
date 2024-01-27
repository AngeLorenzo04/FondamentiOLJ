#include "matrix.h"
void stampa_matrix(const struct matrix* m) {
	for (size_t r = 0; r < m->rows; ++r) {
		for (size_t c = 0; c < m->cols; ++c) {
			printf("%lf ", m->data[r * m->cols + c]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
}
struct matrix* matrix_quadruplica(const struct matrix* m) {
	stampa_matrix(m);

	struct matrix* ris = calloc(1, sizeof(struct matrix));
	ris->cols = m->cols * 2;
	ris->rows = m->rows * 2;
	ris->data = calloc(ris->rows * ris->cols, sizeof(double));

	int meta = 0;


	for (size_t r = 0; r < ris->rows; ++r) {
		for (size_t c = 0; c < ris->cols; ++c) {
			ris->data[r * ris->cols + c] = m->data[r * m->cols + c];
			printf("%lf ", ris->data[r * m->cols + c]);

		}
		printf("\n");
	}
	return ris;
}