#include "stat.h"
double media(double* x, unsigned int n) {
	
	if (x != NULL) {
		double somma = 0;
		double media = 0;

		if (n == 0) {
			return media;
		}

		for (unsigned i = 0; i < n; i++) {
			somma += *x;
			x++;
			media = somma / n;
		}

		return media;
	}

	return 0;

}