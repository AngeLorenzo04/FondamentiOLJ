extern int soluzioni(double a, double b, double c, double* x1, double* x2);
int main(void){
	double a = 123.598;
	double b = 227.953;
	double c = 45.098;
	double ris1 = 0;
	double ris2 = 0;
	double* x1 = &ris1;
	double* x2 = &ris2;
	soluzioni(a, b, c, x1, x2);
	return 0;
}