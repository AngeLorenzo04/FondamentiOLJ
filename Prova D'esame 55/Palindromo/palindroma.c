#include"palindroma.h"
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
	size_t j = len - 1;

	for (size_t i = 0; i < len; i++) {
		rts[j] = str[i];
		j--;
	}
	if (strcmp(rts, str) != 0) {
		return false;
	}
	return true;
}