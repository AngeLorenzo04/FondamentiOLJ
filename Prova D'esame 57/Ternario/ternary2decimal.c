#include <math.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return -1;
	}


	char tmp = 1;
	size_t len = 0;

	while (tmp != 0) {
		tmp = argv[1][len];
		len++;
	}

	int* val = calloc((len - 1),sizeof(int));

	for (size_t i = 0; i < len - 1; i++) {
		if (argv[1][i] == '-') {
			val[i] = -1;
		}
		else if (argv[1][i] == '0') {
			val[i] = 0;
		}
		else if (argv[1][i] == '+') {
			val[i] = 1;
		}
		else {
			return 1;
		}
	}
	int sum = 0;
	double esp = (double)len - 2;
	for (size_t j = 0; j < len - 1; j++) {
		sum += val[j] * (int)pow(3, esp);
		esp--;
	}

	printf("%i\n", sum);
	free(val);
}