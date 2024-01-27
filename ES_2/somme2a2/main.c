#include <stdint.h>
#include <stdlib.h>
extern uint32_t* somme_2a2(uint32_t* vett, size_t size);

int main(void)
{
    size_t n = 6;
    uint32_t* v = malloc(n * sizeof(uint32_t));
    v[0] = 4; v[1] = 2; v[2] = 6; v[3] = 7; v[4] = 8;
    uint32_t* somme = somme_2a2(v, n);
    free(v);
    free(somme);
    return 0;
}