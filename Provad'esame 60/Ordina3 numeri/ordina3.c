#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]) {
	if (argc != 4) {
		return 1;
	}

	char* endptr;
	int* elem = malloc(3 * sizeof(int));
	size_t j = 0;
	for (size_t i = 1; i < 4; i++) {
		elem[j] = strtol(argv[i], &endptr, 10);
		if (*endptr != 0 && *endptr != argv[i]) {
			return 1;
		}

		if (&endptr == NULL) {
			return 1;
		}
		j++;

	}
	int a = elem[0], b = elem[1], c = elem[2];

	if (a > b && a > c) {
		printf("%i ", a);
		if (b > c) {
			printf("%i ", b);
			printf("%i", c);
			printf("\n");
		}
		if (c > b) {
			printf("%i ", c);
			printf("%i", b);
			printf("\n");
		}
	}

	if (b > c && b > a) {
		printf("%i ", b);
		if (a > c) {
			printf("%i ", a);
			printf("%i", c);
			printf("\n");
		}
		if (c > a) {
			printf("%i ", c);
			printf("%i", a);
			printf("\n");
		}
	}

	if (c > a && c > b) {
		printf("%i ", c);
		if (a > b) {
			printf("%i ", a);
			printf("%i", b);
			printf("\n");
		}
		if (b > a) {
			printf("%i ", b);
			printf("%i", a);
			printf("\n");
		}
	}

	free(elem);
	return 0;
}