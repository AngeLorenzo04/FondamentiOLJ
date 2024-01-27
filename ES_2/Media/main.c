#include "stat.h"
#include "stat.h"
int main(void) {
	unsigned int size = 5;
	double* vett = malloc(5 * sizeof(double));
	vett[0] = 10; vett[1] = 3; vett[2] = 6; vett[3] = 17; vett[4] = 19;
	double ris = media(vett, size);
	free(vett);
	return 0;
}