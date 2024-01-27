#include <stdlib.h>
#include<stdbool.h>
extern bool check_parenthesis(const char* s);

int main(void) {
	char s1[] = " ((((())))) ";
	char s2[] = "(()()()()())";
	bool ris1 = check_parenthesis(s1);
	bool ris2 = check_parenthesis(s2);
	return 0;
}



/*
*	(
	(
		)
	(
		(
	(
		)
		)
		)
		)
		)
	(
	(
		)
	(
	(	
	(
		)
	(
		)
		)
	(	
	(	)
		)
		)
* 
*/