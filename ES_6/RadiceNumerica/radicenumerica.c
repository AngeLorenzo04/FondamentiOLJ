#include<stdlib.h>
#include<stdio.h>

size_t len(int x) {

	int tmp = x;
	size_t len = 0;

	while (tmp > 1) {
		tmp /= 10;
		len++;
	}

	return len;
}

int* vettint(unsigned int val,size_t lung) {
	int tmp = val;
	int* ris = calloc(lung, sizeof(int));


	return ris;
}


int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}

	char* endptr;
	int elem = strtol(argv[1], &endptr, 10);

	if (elem < 0) {
		return 1;
	}

	int ris = 0;
	size_t lung = len(elem);
	int* elems = vettint(elem,lung);

	for (size_t i = 0; i < lung; i++) {
		ris += elems[i];
	}
	fprintf(stdout, "%i", ris);
	free(elems);
	return 0;
}