#include <stdlib.h>
#include <math.h>
#include<stdio.h>
int main(int argc, char* argv[]) {

	if (argc != 4) {
		return 1;
	}
	char* endptr;
	double a = strtod(argv[1], &endptr), b = strtod(argv[2], &endptr), c = strtod(argv[3], &endptr);
	 
	
	double area = sqrt((a + b + c) * (-a + b + c) * (a - b + c) * (a + b - c))/ 4.000000;
	
	fprintf(stdout, "%f", (area * pow(10, 6) / pow(10, 6)));
	return 0;
}