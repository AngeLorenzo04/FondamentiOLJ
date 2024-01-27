#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[]) {

	if (argc != 2) {
		return 1;
	}
	char* endptr;
	int elems = strtol(argv[1], &endptr,10);

	if (elems < 0) {
		return 1;
	}

	if (elems == 1 || elems == 0) {
		fprintf(stdout, "false");
		return 0;
	}

	for (int i = 2; i < elems; i++) {
		if (elems % i == 0) {
			fprintf(stdout, "false");
			return 0;
		}
		
	}
	fprintf(stdout, "true");
	return 0;
}