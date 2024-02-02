#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return -1;
	}
	char* endptr;
	int val = strtol(argv[1], &endptr, 10);
	if (*endptr != 0) {
		return -1;
	}

	if (val <= 0) {
		printf("%i", val);
		return 0;
	}
	int counter = 0;
	printf("%i, ", val);
	while (val != 1) {
		if (val % 2 == 0) {
			val = val / 2;
		}else if (val % 2 != 0) {
			val = 3 * val + 1;
			
		}
		printf("%i, ", val);
		counter++;
	}
	
	printf("%i", val);

	return counter;
 }