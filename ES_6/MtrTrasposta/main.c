#include "matrix.h"

int main(void) {
	int a[9] = {
		2, 3, 4,
		3, 4, 3,
		5, 5, 6
	};

	struct matrix matrice_a = {3,3,a};
	struct matrix* ris = mat_transpose(&matrice_a);


	return 0;
}
