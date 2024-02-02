#include <stdlib.h>
#include <stdio.h>
void stampa_croce(FILE* f, size_t dim) {

	size_t j = 0;
	size_t k = 0;
	while (j != dim) {

		
		for (size_t i = 0; i < j; i++) {
			fputc(' ',f);
		}
		fputc('\\',f);
		for (size_t i = 0; i < dim  + 1 - k ; i++) {
			fputc(' ',f);
		}
		fputc('/',f);
		fputc( '\n',f);
		j++;
		k += 2;
	}
	k -= 2;
	while (j != 0) {


		for (size_t i = 0; i < j - 1; i++) {
			fputc(' ',f);
		}
		fputc( '/',f);
		for (size_t i = 0; i < dim + 1 - k; i++) {
			fputc(' ',f);
		}
		fputc( '\\',f);
		fputc( '\n',f);
		j--;
		k -= 2;
	}
	fclose(f);
 }
/*
	\    /
	 \  /
	  \/
	  /  

*/