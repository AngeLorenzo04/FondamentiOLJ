#include <stdlib.h>
#include<stdio.h>
#include<stdbool.h>
int main(int argc, char* argv[]) {
	if (argc != 2) {
		return 1;
	}
	char* endptr;
	int n = strtol(argv[1], &endptr, 10);
	bool primo;
	
	if (*endptr != 0 || n <= 0) {
		return 1;
	}
	
	/*
	size_t i = 2;
	while (n > 1) {
		primo = true;
		for ( i ; i < n ; i++) {
		
			if (n  % i == 0) {
				n--;
				i = 2;
				primo = false;
				break;
			}
		
		
		}
		if (primo) {
			printf("%i ", i);
			n--;
			i = 2;
		}
		
	}*/
	for (int i = 2; i < n; i++) {
		primo = true;
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				primo = false;
				break;
			}

		}
		if (primo) {
			printf("%i ", i);
		}
	}

	printf("\n");
	return 0;
}