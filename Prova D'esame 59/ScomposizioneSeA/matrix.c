#include "matrix.h"

struct matrix* sommamtr(struct matrix* a, struct matrix* b) {
	
	struct matrix* sum = malloc(sizeof(struct matrix));
	sum->rows = a->rows;
	sum->cols = a->cols;
	sum->data = calloc(sum->rows * sum->cols, sizeof(double));

	for (size_t r = 0; r < sum->rows; r++) {
		for (size_t c = 0; c < sum->cols; c++) {
			E(sum, r, c) = E(a, r, c) + E(b, r, c);
		}
	}

	return sum;

}

struct matrix* sottraimtr(struct matrix* a, struct matrix* b) {

	struct matrix* sot = malloc(sizeof(struct matrix));
	sot->rows = a->rows;
	sot->cols = a->cols;
	sot->data = calloc(sot->rows * sot->cols, sizeof(double));

	for (size_t r = 0; r < sot->rows; r++) {
		for (size_t c = 0; c < sot->cols; c++) {
			E(sot, r, c) = E(a, r, c) - E(b, r, c);
		}
	}

	return sot;
}


void dividimtr(struct matrix* m, int dividendo) {

	for (size_t r = 0; r < m->rows; r++) {
		for (size_t c = 0; c < m->cols; c++) {
			E(m, r, c) = E(m, r, c) /dividendo;
		}
	}
}



struct matrix* trasponim(struct matrix*m)
{	
	struct matrix* trans = malloc(sizeof(struct matrix));
	trans->rows = m->rows;
	trans->cols = m->cols;
	trans->data = calloc(trans->rows * trans->cols,sizeof(double));

	for (size_t r = 0; r < trans->rows; r++) {
		for (size_t c = 0; c < trans->cols; c++) {
			E(trans, r, c) = E(m, c, r);
		}
	}

	return trans;
}

void mat_symdecomp(const struct matrix* m, struct matrix* S, struct matrix* A) {
	
	if (m != NULL && S != NULL && A != NULL) {
		if (m->rows == m->cols && A->rows == A->cols && S->cols == S->rows) {
			struct matrix* mtrs = trasponim(m);
			struct matrix* sum = sommamtr(m, mtrs);
			struct matrix* sot = sottraimtr(m, mtrs);;

			S = sum;
			dividimtr(S, 2);
			A = sot;
			dividimtr(A, 2);

			free(mtrs);
			free(sum);
			free(sot);
		}
	}
	
	
}
