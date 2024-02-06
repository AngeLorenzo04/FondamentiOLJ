#include "audio.h"
int main(void)
{

	char s[] = "test.raw";
	struct audio a;

	audio_read(s,&a);
	return 0;
}