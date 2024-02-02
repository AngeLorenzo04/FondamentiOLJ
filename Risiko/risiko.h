#pragma once
#include <stdlib.h>
struct lancio {
    char valori[3];
    char n_dadi;
};

extern void confronta_lanci(const struct lancio* attacco, const struct lancio* difesa,
    char* perse_attacco, char* perse_difesa);