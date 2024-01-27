#include<stdlib.h>
#include<stdio.h>

size_t len(int x) {

	int tmp = x;
	size_t len = 0;

	while (tmp >= 1) {
		tmp /= 10;
		len++;
	}

	return len;
}

int* vettint(unsigned int val) {
	size_t lung = len(val);
	int tmp = val;
	int* ris = calloc(lung, sizeof(int));
	for (size_t i = lung - 1; tmp >= 1; i--) {
		ris[i] = tmp % 10;
		tmp /= 10;
	}

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
	int tmp = 0;
	size_t lung = len(elem);
	int* elems = vettint(elem);
	
	do {

		for (size_t i = 0; i < lung; i++) {
			tmp += elems[i];
			ris = tmp;
		}
		
		
		lung = len(tmp);
		elems = vettint(ris);
		tmp = 0;

	} while (lung != 1);
	
	fprintf(stdout, "%i", ris);
	free(elems);
	return 0;
}