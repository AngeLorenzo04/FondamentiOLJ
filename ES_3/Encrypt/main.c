#include <stdlib.h>
extern void encrypt(char* s, unsigned int n);
int main(void) {

	unsigned int size = 3;
	char* s = malloc(3 * sizeof(char));
	s[0] = 'a'; s[1] = 'b', s[2] = 'c';

	encrypt(s, 3);

	free(s);

	return 0;
}