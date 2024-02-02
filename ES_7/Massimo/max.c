#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[]) {

	if (argc == 1) {
		return 1;
	}
	
	int* val = malloc(argc -1 * sizeof(int));
	int j = 0;
	int max = val[0];

	for (int i = 1; i < argc; i++) {
		char* endptr;
		val[j] = strtol(argv[i], &endptr, 10);
		if (*endptr != 0 && *endptr != val[j]) {
			return 1;
		}
		j++;

	}

	for (int j = 0; j < argc - 1; j++) {

		
		if (max < val[j + 1]) {
			max = val[j + 1];
		}
	}

	printf("%i", max);

	return 0;
} 