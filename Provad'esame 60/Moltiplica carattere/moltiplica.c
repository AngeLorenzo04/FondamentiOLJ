#include<stdlib.h>
#include<stdio.h>
#include<string.h>
char* moltiplica_caratteri(const char* s, int n) {
	if (n == 0) {
		return NULL;
	}
	if (s == NULL) {
		return NULL;
	}
	size_t len = 0;

	while (s[len] != 0) {
		len++;
	}

	char* ris = calloc((len * n) + 1 , sizeof(char));

	size_t i = 0;
	size_t k = 0;
	while (s[i] != 0) {
		for (int j = 0; j < n; j++) {
			ris[k] = s[i];
			k++;
		}
		i++;
	}
	ris[(len * n) + 1] = 0;
	return ris;
}