#include<stdlib.h>
extern char* converti(unsigned int n);

int main(void) {
	unsigned int valore = 4355;
	char* s = converti(valore);

	free(s);

	return 0;
}