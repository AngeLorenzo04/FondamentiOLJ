#include "matrix.h"

int main(void) {
	double data[9] = {
		1,2,3,
		4,5,6,
		7,8,9
	};
	struct matrix m = { 3,3,data };
	matrix_quadruplica(&m);
	return 0;
}