#include "cerca.h"
int cerca_primo(const char* s, char c) {
	
	size_t i = 0;

	while (s[i] != '\0') {

		if (s[i] == c) {
			return i;
		}
		
		i++;
	}
	return -1;
}