#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
char** extract_parole(const char* filename, size_t* n) {
	FILE* f = fopen(filename, "r");
	size_t count = 0;
	
	while (1){
		char valread = fgetc(f);
		if (valread == EOF) {
			break;
		}
		while (valread != ' ') {
			valread = fgetc(f);
			if (valread == ' ' && valread != EOF) {
				count++;
			}
		}
	}
	
	return 0;
}