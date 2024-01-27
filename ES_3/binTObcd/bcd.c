#include "bcd.h"

unsigned short dec2bin(unsigned short val) {

	unsigned short ris = 0b0000;
	unsigned short indice = 0;
	while (val != 0) {
		unsigned short bit = val % 2;
		ris = ris | bit << indice;
		indice++;

		val /= 2;
	}
	return ris;
}

unsigned short bin2bcd(unsigned short val) {
	dec2bin(val);
	unsigned short ris = 0b0000000000000000;
	unsigned short tmp = val; 
	int i = 12;
	while (i != 0 ) {
		
		while (tmp > 1) {
			tmp /= 10;
			tmp = dec2bin(tmp);
			break;
		}

		tmp = tmp >> i;
		tmp = tmp | ris;
		
		i = i - 4;

	}
	return tmp;
}