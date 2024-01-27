#include "matrix.h"
int main(void) {
	double data[6] = {
		1,2,3,
		4,5,6,
	};

	struct matrix a = { 2,3,data };
	mat_diffleft(&a);

	return 0;
}