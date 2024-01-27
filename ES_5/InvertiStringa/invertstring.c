#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	size_t dim = strlen(argv[1]);
	char* s = calloc(dim +1, sizeof(char));
	int j = 0;

	for (size_t i = dim - 1; i >= 0; i--) {
		s[i] = argv[1][j];
		j++;
		if (i == 0) {
			break;
		}
	}

	fprintf(stdout, "%s", s);

	free(s);

	return 0;
}