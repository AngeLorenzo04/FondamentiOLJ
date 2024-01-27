#include "matrix.h"
struct matrix* matrix_quadruplica(const struct matrix* m) {

	if (m == NULL) {
		return NULL;
	}
	
	struct matrix* ris = calloc(1, sizeof(struct matrix));
	ris->rows = m->rows * 2;
	ris->cols = m->cols * 2;
	ris->data = calloc(ris->rows * ris->cols, sizeof(double));
	

	size_t a = 0;
	size_t b = 0;
	for (size_t r = 0; r < ris->rows; r++) {
		for (size_t c = 0; c < ris->cols; c++) {
			if (b == m->cols) {
				b = 0;
			}
			ris->data[r * ris->cols + c] = m->data[a * m->cols + b];
			b++;
		}
		b = 0;
		a++;
		if (a == m->rows) {
			a = 0;
		}
		
	}
	return ris;
}