#include<stdlib.h>
#include<stdbool.h>
#include<string.h>

bool check_parenthesis(const char* s) {
	
	size_t pa = 0;
	size_t pc = 0;

	for (size_t i = 0; s[i] != 0; i++) {
		
		if (s[i] == '(') {
			pa++;
		}
		
		if (s[i] == ')') {
			pc++;
		}

		if (pa < pc) {
			return false;
		}
	}

	if (pc == pa) {
		return true;
	}

	return false;

}

/*
			

*/