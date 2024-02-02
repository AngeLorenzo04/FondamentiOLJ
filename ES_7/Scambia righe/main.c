#include "matrix.h"

int main(void) {
	double data1[9] = {
		1,2,3,
		4,5,6,
		7,8,9
	};

	double data2[6] = {
		1,2,
		4,5,
		7,8
	};

	struct matrix a = { 3,3,data1 };
	struct matrix b = { 3,2,data2 };

	mat_swaprows(&a, 2, 0);
	mat_swaprows(&b, 1, 2);
}