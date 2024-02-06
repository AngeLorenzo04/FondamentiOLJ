#include<stdlib.h>
#include<stdint.h>
#include<stdbool.h>
extern bool primigemelli(uint32_t start, uint32_t* x, uint32_t* y);

int main(void)
{

	uint32_t a;
	uint32_t b;
	primigemelli(4294965673, &a, &b);
}