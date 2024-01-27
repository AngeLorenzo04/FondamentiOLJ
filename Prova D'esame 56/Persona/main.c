#include "persona.h"

int main(void) {
	char s[] = "file1.txt";
	char s1[] = "file2.txt";
	char s2[] = "file3.txt";
	char s3[] = "file4.txt";
	size_t nper;
	size_t nper1;
	size_t nper2;
	size_t nper3;
	leggi_persone(s, &nper);
	leggi_persone(s1, &nper1);
	leggi_persone(s2, &nper2);
	leggi_persone(s3, &nper3);
	return 0;
}