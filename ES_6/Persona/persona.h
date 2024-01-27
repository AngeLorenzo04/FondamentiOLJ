#pragma once
struct persona {
    int anni;
    char nome[50];
};
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern struct persona* leggi_persone(const char* filename, size_t* size);
