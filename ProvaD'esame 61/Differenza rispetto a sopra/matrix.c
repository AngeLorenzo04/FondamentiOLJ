#include "matrix.h"
struct matrix* mat_diffup(const struct matrix* m) {
	if (m == NULL) {
		return NULL;
	}
	struct matrix* a = malloc(1 * sizeof(struct matrix));
	a->rows = m->rows;
	a->cols = m->cols;
	a->data = calloc(a->rows * a->cols, sizeof(double));
	for (size_t r = 0; r < a->rows; ++r) {
		for (size_t c = 0; c < a->cols; ++c) {
			if (r > 0) {
				a->data[r * a->cols + c] = m->data[r * m->cols + c] - m->data[(r - 1) * m->cols + c];
			}
			else {
				a->data[r * a->cols + c] = m->data[r * m->cols + c];
			}
		}
	}
	return a;
}