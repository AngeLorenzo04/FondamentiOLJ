#include "matrix.h"
int main(void) {
	double data1[6] = {
		1,2,3,
		4,5,6
	};
	double data2[8] = {
		7,5,
		3,12,
		0,0,
		11,8
	};
	struct matrix a = {2,3,data1};
	struct matrix b = {4,2,data2};


	mat_normalize_rows(&a);
	mat_normalize_rows(&b);
	return 0;
}