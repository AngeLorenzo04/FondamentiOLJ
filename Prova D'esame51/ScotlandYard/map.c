#define _CRT_SECURE_NO_WARNINGS
#include"map.h"

struct connections* load_connections(const char* filename) {
	FILE* f = fopen(filename, "r");
	if (f == NULL) {
		return NULL;
	}
	
	int n;
	struct connections* ris = malloc(sizeof(struct connections));
	fscanf(f, "%i", &n);

	ris->n = n;
	ris->data = calloc(ris->n * ris->n, sizeof(bool));

	char valread = 0;
	int num;
	char *endptr;

	for (int i = 0; i < ris->n; i++) {  
		
		valread = fgetc(f);
		while (valread != '.') {
			valread = fgetc(f);
			
			if (valread != ' ' && valread != '.') {
				num = strtol(&valread, &endptr, 10);
				num--;
				d(ris, i, num) = true;
				d(ris, num , i) = true;
			}

		}
		
	}

	fclose(f);
	return ris;
}

/*

00 01 02  0 1
10 11 12  1 0
20 21 11
	
*/