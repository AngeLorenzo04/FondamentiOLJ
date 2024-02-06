#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>

uint32_t prossimoPrimo(uint32_t a) {
	
	uint32_t ris = a;
	uint32_t i = 2;



	while (i < ris) {


		if (ris % i == 0) {
			ris++;
			i = 2;
		}
		else {
			i++;
		}
		if (ris >= 4294967295) {
			return 4294967295;
		}

	}

	return ris;

}

bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y) {

	if (start >= 4294967295) {
		return false;
	}
	uint32_t a = prossimoPrimo(start);
	uint32_t b = prossimoPrimo(a);
	while (b - a != 2) {
		
		a = prossimoPrimo(a);

		if (a >= 4294967295) {
			return false;
		}

		b = prossimoPrimo(a);
	}

	*x = a;
	*y = b;
	return true;
}