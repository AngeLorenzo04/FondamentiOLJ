#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int* read_gruppi(const char* filename, size_t* ngruppi) {
	FILE* f = fopen(filename, "r");

	if (f == NULL) {
		return NULL;
	}

	
	char elem[100] ;
	int nelem = 1;
	int counter = 0;
	char rh = 0;

	while (fgets(elem, sizeof(elem), f) != NULL) {
		char* endptr;
		int val = strtol(elem, &endptr, 10);
		if (val == 0) {
			nelem++;
		}
	
	}

	rewind(f);

	int i = 0;
	int* ris = malloc(nelem * sizeof(int));
	*ngruppi = nelem;
	
	while (fgets(elem, sizeof(elem), f) != NULL) {
		char* endptr;
		int val = strtol(elem, &endptr, 10);
		if (val != 0) {
			counter += val;
		}
		else {
			ris[i] = counter;
			counter = 0;
			i++;
		}


	}

	if (counter != 0) {
		ris[i] = counter;
	}

	fclose(f);

}