#include<stdlib.h>
#include<stdbool.h>
extern bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c);

int main(void) {
	bool ris = is_terna_pitagorica(5, 4, 3);
	return 0;
}