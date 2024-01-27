#include<stdio.h>
#include<stdlib.h>
void plotter(const char* p) {
	size_t len = 0;
	while (p[len] != 0) {
		len++;
	}

	size_t neg = 0;
	
	for (size_t i = 0; i < len; i++) {
		while (p[i] < 0) {
			for (char j = 0; j < abs(p[i]); j++) {
				if (p[i + 1] == '\n') {
					printf("\n");
				}
				else {
					printf("%c", p[i + 1]);
				}
				
			}

			i ++;
			break;

		}
		while (p[i] > 0) {

			if (p[i] == '\n') {
				printf("\n");
			}
			else {
				printf("%c", p[i]);
			}
			break;
		}
		if (p[i] == 0) {
			break;
		}

	}

}