#include<stdint.h>
#include<stdlib.h>
unsigned int conta_spazi(const char* s) {
	size_t spazi = 0;
	int i = 0;
	while (s[i] != '\0') {
		if (s[i] == ' ') {
			spazi++;
		}
		i++;
	}
	return spazi;
}