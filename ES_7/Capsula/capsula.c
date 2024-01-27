#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>

void capsula(FILE* f, unsigned char n) {

	for (unsigned char i = 0; i < n ; i++) {
		fputc(' ',f);
	}
	for (unsigned char i = 0; i < n; i++) {
		fputc('-', f);
	}

	fputc('\n', f);

	unsigned char j = n; //numero di spazi da stampare all' inizio + 1
	unsigned char k = 0;


	while (j != 0) {		//stampa la testa della capsula


		unsigned char tmp = j - 1;
		while (tmp != 0) {
			fputc(' ', f);
			tmp--;
		}

		fputc('/', f);

		for (unsigned char i = 0; i < n + k; i++) {
			fputc(' ', f);
		}

		fputc('\\', f);
		fputc('\n', f);

		j--;
		k += 2;
	}


	for (unsigned char i = 0; i < n; i++) {			//body della capsula
		fputc('|', f);
		for (unsigned char j = 0; j < n + k - 2; j++) {
			fputc(' ', f);
		}
		fputc('|', f);
		fputc('\n', f);
	}


	j = 0;


	while (j != n)			//gambe della capsula
	{

		for (unsigned char i = 0; i < j; i++) {
			fputc(' ', f);
		}
		fputc('\\', f);
		
		for (unsigned char i = 0; i < n + k - 2; i++) {
			fputc(' ', f);
		}
		fputc('/', f);
		fputc('\n', f);
		j++;
		k -= 2;
	}


	for (unsigned char i = 0; i < n; i++) {		//piedi della capsula
		fputc(' ', f);
	}
	for (unsigned char i = 0; i < n; i++) {
		fputc('-', f);
	}

}



/*

  ---   
 /   \
/     \
|     |
|     |
|     |
\     /
 \   /
  ---


*/