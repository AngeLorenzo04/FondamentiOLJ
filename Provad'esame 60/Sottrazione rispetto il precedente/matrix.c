#include "matrix.h"

struct matrix* mat_diffleft(const struct matrix* m) {
	struct matrix* ris = calloc(1, sizeof(struct matrix));
	ris->rows = m->rows;
	ris->cols = m->cols;
	ris->data = calloc(ris->cols * ris->rows, sizeof(double));


	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			E(ris, r, c) = E(m, r, c);
			if (c != 0) {
				E(ris, r, c) = E(m, r, c) - E(m, r, c - 1);
			}
		}
	}

	return ris;
}
