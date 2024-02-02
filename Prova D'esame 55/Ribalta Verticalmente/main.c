#include "matrix.h"
int main(void) {
	double data1[9] = {
		1,2,3,
		4,5,6,
		7,8,9
	};
	struct matrix a = { 3,3,data1 };
	matrix_flip_v(&a);
	return 0;
}