#include <stdlib.h>
size_t conta_parole(const char* s) {
	size_t i = 0;
	size_t count = 0;
	while (s[i] != '\0') {
		
		while (s[i] == ' ') {
			i++;
		}
		
		if (s[i] != ' ' && s[i] != '\0') {
			count++;
			while (s[i] != ' ' && s[i] != '\0') {
				i++;
			}
		}
	}

	return count;
}