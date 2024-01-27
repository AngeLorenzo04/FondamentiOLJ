#include "matrix.h"
int main(void){ 
	double dati1[4] = {
		1,1,
		2,2
	};
	double dati2[9] = {
		1,1,1,
		2,2,2,
		3,3,3
	};
	struct matrix a = {2,2,dati1};
	struct matrix b = {3,3,dati2};
	mat_diffup(&a);
	mat_diffup(&b);
	return 0;
}