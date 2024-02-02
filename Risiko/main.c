#include "risiko.h"
int main(void)
{
	char armtpersea;
	char armtpersed;
	struct lancio attacco = { { 6,3 },2};
	struct lancio difesa = { { 5,3,1 },3};

	confronta_lanci(&attacco, &difesa, &armtpersea, &armtpersed);
	return 0;
}