#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
struct connections {
    size_t n;
    bool* data;
};
extern struct connections* load_connections(const char* filename);
#define d(m,r,c) m->data[r * m->n + c]
