#pragma once
struct element {
    char* first;
    char* second;
    char* product;
};

extern const char* combine(const char* first, const char* second, const struct element* elems, size_t n);
#include <stdlib.h>
#include <string.h>