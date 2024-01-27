#include "matrix.h"

int main(void) {
	double data1[12] = {
		1,2,3,4,
		1,2,3,4,
		1,2,3,4
	};
	double data2[9] = {
		1,0,0,
		0,1,0,
		0,0,1
	};
	double data3[4] = {
		1,0,
		0,1
	};
	struct matrix a = { 3,4,data1 };
	struct matrix b = { 3,3,data2 };
	struct matrix c = { 2,2,data3 };
	struct matrix* ris1 = matrix_quadruplica(&a);
	struct matrix* ris2 = matrix_quadruplica(&b);
	struct matrix* ris3 = matrix_quadruplica(&c);
	return 0;
}