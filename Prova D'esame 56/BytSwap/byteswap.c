#include "byteswap.h"
uint32_t byteswap(uint32_t n) {
    unsigned int risultato = 0;

    unsigned char byte1 = (n & 0x000000FF) >> 0;
    unsigned char byte2 = (n & 0x0000FF00) >> 8;
    unsigned char byte3 = (n & 0x00FF0000) >> 16;
    unsigned char byte4 = (n & 0xFF000000) >> 24;

    risultato = (byte1 << 24) | (byte2 << 16) | (byte3 << 8) | (byte4 << 0);

    return risultato;
}

