#include"matrix.h"


int main(void) {
	
	double data[] = {
		1,2,3,
		4,5,6,
		7,8,9
	};
	
	struct matrix m = { 3,3,data };

	struct matrix* S = malloc(sizeof(struct matrix));
	struct matrix* A = malloc(sizeof(struct matrix));
	
	mat_symdecomp(&m, S, A);

	return 0;
}
