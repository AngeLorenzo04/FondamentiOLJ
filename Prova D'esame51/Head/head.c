#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}

	FILE* f = fopen(argv[1], "r");


	size_t count = 0;
	char carattere;
	while (count != 10) {
		size_t rh = fread(&carattere, sizeof(char), 1, f);
		if (rh != 1) {
			printf("\n");
			break;
		}
		if (carattere == '\n') {
			count++;
		}

		printf("%c", carattere);

	}

	
	fclose(f);
	return 0;

}