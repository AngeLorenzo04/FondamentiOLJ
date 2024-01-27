#include<math.h>
int soluzioni(double a, double b, double c, double* x1, double* x2) {
	double det = (b * b) - (4 * a * c);

	if (det < 0) {
		return 0;
	}

	else if (det == 0) {
		*x1 = -b / 2*a;
		*x2 = -b / 2 * a;
		return 1;
	
	}
	else {
		*x1 = (- b + sqrt(det)) / 2 * a;
		*x2 = (- b -sqrt(det))/ 2 * a;
		return 2;
	}
}