#include "matrix.h"

int main(void) {

	double dati[4] = {
		1,0,
		0,1
	};
	double dati1[9] = {
		1,0,0,
		0,1,0,
		0,0,1
	};


	struct matrix mtr1 = {2,2,dati };
	struct matrix mtr2 = { 3,3,dati1};
	struct matrix* ris = scambia_diagonali(&mtr1);
	struct matrix* ris1 = scambia_diagonali(&mtr2);

	return 0;
}