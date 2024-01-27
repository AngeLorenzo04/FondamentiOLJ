#include <stdlib.h>
extern size_t lungh(const char* str);
int main(void)
{
    char s[] = "Ecco la stringa 0 di prova";
    char as[] = "0";
    char bs[] = "";
    size_t len, alen, blen;
    len = lungh(s);
    alen = lungh(as);
    blen = lungh(bs);
    return 0;
}