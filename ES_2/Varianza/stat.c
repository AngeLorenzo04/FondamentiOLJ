#include "stat.h"

double pot(double base, unsigned int esp) {

	if (esp == 0) {
		return 1;
	}

	if (base != 0) {


		double tmp = base;
		for (unsigned int i = 1; i < esp; i++) {
			base *= tmp;
		}

		return base;
	}
	return 0;
}

double mean(double* val, unsigned int n) {

	double somma = 0;

	if (val != 0) {

		for (unsigned int i = 0; i < n; i++) {
			somma += val[i];
		}

		return somma / n;

	}

	return 0;

}

double varianza(double* x, unsigned int n) {

	if (x != NULL) {

		if (n < 2) {
			return 0;
		}

		double ris = 0;
		for (unsigned int i = 0; i < n; i++) {

			ris += pot(x[i] - mean(x, n), 2);

		}

		return ris / n;
	}

	return 0;
}