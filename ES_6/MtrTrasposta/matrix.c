#include "matrix.h"

struct matrix* mat_transpose(const struct matrix* mat) {

	if (mat == NULL) {
		
		return NULL;

	}


	struct matrix* ris = calloc(1 , sizeof(struct matrix));
	ris->cols = mat ->rows;
	ris->rows = mat->cols;
	ris->data = malloc(ris->cols * ris->rows * sizeof(double));

	for (size_t r = 0; r < ris->rows; r++) {
		for (size_t c = 0; c < ris->cols; c++) {
			E(ris, r, c) = E(mat, c, r);
		}
	}

	return ris;

}