#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void quadrati_progressivi(FILE* f, int n) {
	
	f = fopen("ris.txt", "w");
	if (f == NULL) {
		return NULL;
	}



	for (int i = 1; i < n + 1; i++) {
		int counter = 1;
		while (counter != i + 1) {
			if (i >= 10) {
				fprintf(f,"%i ", i % 10);
			}
			else {
				fprintf(f,"%i ", i);
			}
				counter++;
		}
		while (n + 1 - counter != 0) {
			if (counter != n) {
				if (counter >= 10) {
					fprintf(f, "%i ", counter % 10);
				}
				else {
					fprintf(f, "%i ", counter);
				}
			}
			else {
				if (counter >= 10) {
					fprintf(f, "%i", counter % 10);
				}
				else {
					fprintf(f, "%i", counter);
				}
			}
			counter++;
		}
		fprintf(f,"\n");
	}

	fclose(f);

}

/*

	1 2 3 4
	2 2 3 4
	3 3 3 4
	4 4 4 4



*/