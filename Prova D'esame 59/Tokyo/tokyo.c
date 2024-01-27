#include<stdbool.h>
#include<stdlib.h>
int tokyo_confronta(char a[2], char b[2]) {
	
	int p1 = 0;
	int p2 = 0;
	bool p1t = false;
	bool p2t = false;
	
	for (int i = 0; i < 2; i++) {
		if (a[i] == NULL || b[i] == NULL) {
			return 0;
		}

		if (a[i] < 1 || a[i] > 6 || b[i] < 1 || b[i] > 6) {
			return 0;
		}

	}
	


	//calcola punteggio
	for (int i = 0; i < 2; i++) {
		if (a[i] > a[i + 1]) {
			p1 = a[i] * 10 + a[i+1];
			break;
		}
		p1 = a[i + 1] * 10 + a[i];
		break;
	}

	for (int i = 0; i < 2; i++) {
		if (b[i] > b[i + 1]) {
			p2 = b[i] * 10 + b[i + 1];
			break;
		}
		p2 = b[i + 1] * 10 + b[i];
		break;
	}

	//controlla tokyo

	if (p1 == 21) {
		p1t = true;
	}
	if(p2 == 21) {
		p2t = true;
	}

	//in caso di tokyo
	if (p1t && p2t) {
		return 0;
	}
	if (p1t && !p2t) {
		return 1;
	}
	if (!p1t && p2t) {
		return -1;
	}

	//in caso di doppia
	if (p1 % 11 == 0 && p2 % 11 == 0) {
		if (p1 > p2) {
			return 1;
		}
		if (p1 < p2) {
			return -1;
		}
		if (p1 == p2) {
			return 0;
		}
	}
	else if (p1 % 11 == 0 && p2 % 11 != 0) {
		return 1;
	}
	else if (p1 % 11 != 0 && p2 % 11 == 0) {
		return -1;
	}

	//in caso no tokyo no doppia
	if (p1 > p2) {
		return 1;
	}
	else if (p1 == p2) {
		return 0;
	}
	else {
		return -1;
	}


	return 0;
}