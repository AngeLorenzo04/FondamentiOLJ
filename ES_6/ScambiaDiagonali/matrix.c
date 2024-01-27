#include "matrix.h"
struct matrix* scambia_diagonali(const struct matrix* m) {
	
	struct matrix* a = malloc(sizeof(struct matrix));
	a->rows = m->rows;
	a->cols = m->cols;
	a->data = malloc(a->rows * a->cols * sizeof(double));
	a->data = m->data;
	
	if (a->rows == a->cols && a != NULL) {
		
		int ultimo = 0;
		double tmp = 0;
		size_t i = a->cols - 1;
		
		for (size_t r = 0; r < a->rows; ++r) {
			for (size_t c = 0; c < a->cols; ++c) {
				
				if (r == a->rows - 1 && c == 0) {
					tmp = E(a, r, c);
					E(a, r, c) = E(a, r, c + a->cols - 1);
					E(a, r, c + a->cols - 1) = tmp;
					ultimo = 1;
				}
				
				if (r == c && ultimo == 0) {
					tmp = E(a, r, c);
					E(a, r, c) = E(m, r, c + i);
					E(a, r, c + i) = tmp;
					i = i - a->cols - 1;
				}
			}
			
		}

		return a;
	}
	return NULL;

	/*
				1 0			00 01	-> 0 + 1	    00 01 02 -> 0 + 2 	
				0 1			10 11	-> 1 - 1		10 11 12 -> 1 + 0
												    20 21 22 -> 0 + 2

	
	*/
	
}