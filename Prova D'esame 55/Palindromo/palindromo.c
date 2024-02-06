#include"palindromo.h"
bool palindroma(const char* str) {
	if (str == NULL) {
		return false;
	}

	size_t len = 0;
	while (str[len] != 0) {
		len++;
	}

	if (len == 1) {
		return true;
	}
	else if (len == 0) {
		return false;
	}

	char* rts = calloc(len + 1, sizeof(char));
	size_t j = 0;

	for (size_t i = len; i > 0; i--) {
		rts[i] = str[j];
		j++;
	}
	if (strcmp(rts, str) != 0) {
		return false;
	}
	return true;
}