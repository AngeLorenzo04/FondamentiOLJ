#include<stdlib.h>
extern int* read_gruppi(const char* filename, size_t* ngruppi);

int main(void) {
	char s[] = "file1.txt";
	size_t ngr;
	int * ris = read_gruppi(s, &ngr);
	free(ris);
	return 0;
}