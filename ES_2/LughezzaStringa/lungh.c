#include <stdlib.h>
size_t lungh(const char* str) {
	size_t i = 0;
	while (str[i] != 0) {
		i++;
	}

	return i;

}