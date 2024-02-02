#include "matrix.h"
void mat_normalize_rows(struct matrix* m) 
{
	if (m != NULL) {

		for (size_t r = 0; r < m->rows; r++) {
			double somma = 0;
			for (size_t c = 0; c < m->cols; c++) {
				somma += E(m, r, c) * E(m, r, c);

			}
			for (size_t c = 0; c < m->cols; c++) {
				E(m, r, c) = E(m, r, c) / sqrt(somma);
				if (somma == 0) {
					E(m, r, c) = 0;
				}
			}

		}
	}
}