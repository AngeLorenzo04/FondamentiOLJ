#define _CRT_SECURE_NO_WARNINGS_
#define DIM 30
#include <stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	char s[DIM];
	fgets(s,DIM,stdin);

	for(size_t i = 0; i < strlen(s); i++){
		for (size_t j = 0; j < strlen(argv[1]); j++) {
			if (s[i] == argv[1][j]) {
				s[i] = 0;
			}
		}
	}

	printf(s);
		
	return 0;
}