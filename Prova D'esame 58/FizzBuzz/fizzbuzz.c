#include<stdlib.h>
#include<stdio.h>

int main(int argc, char*argv[]) {

	if (argc != 2) {
		return 1;
	}


	char* endptr;

	int val = strtol(argv[1], &endptr, 10);

	if (endptr != 0 || val <= 0) {
		return 1;
	}

	for (int i = 1; i < val+1; i++) {
		if (i % 5 == 0 && i % 3 != 0) {
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 != 0) {
			printf("Fizz");
		}
		else if (i % 3 == 0 && i % 5 == 0) {
			printf("FizzBuzz");
		}
		else {
			printf("%i", i);
		}
		
		printf("\n");
	}

	return 0;
}