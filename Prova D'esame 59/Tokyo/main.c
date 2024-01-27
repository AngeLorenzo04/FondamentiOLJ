#include <stdlib.h>
extern int tokyo_confronta(char a[2], char b[2]);
int main(void) {

	char a[2] = { 2,9 };
	char b[2] = { 6,4 };

	int ris = tokyo_confronta(a, b);

	return 0;
}