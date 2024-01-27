#include "stat.h"
int main(void) {
	
	double* valore = malloc(3 * sizeof(double));
	valore[0] = 1; valore[1] = 3; valore[2] = 9;

	double media = mean(valore, 3);
	double potenza = pot(4, 3);
	double varianza = (valore, 3);

	free(valore);

	return 0;
}