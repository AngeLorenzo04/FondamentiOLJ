#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include <string.h>

char* concatena(const char* prima, const char* seconda) {

	size_t len = strlen(prima) + strlen(seconda) + 1;

	char* ris = calloc(len, sizeof(char));

	ris = strcat(ris, prima);
	ris = strcat(ris, seconda);


	return ris;
}