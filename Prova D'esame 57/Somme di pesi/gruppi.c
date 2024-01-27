#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int* read_gruppi(const char* filename, size_t* ngruppi) {
	FILE* f = fopen(filename, "r");

	if (f == NULL) {
		return NULL;
	}

	
	int elem = 0;
	int i = 0;
	int counter = 0;
	while (counter != 2) {
		char valread;

		fgets()
		if (valread != '\n') {
			counter = 0;
		}
		if (valread == '\n') {
			counter++;
		}
		i++;
		elem++;
		
	}


}