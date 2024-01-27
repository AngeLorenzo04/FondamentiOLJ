#pragma once
struct value {
    char Date[11];
    double Open, High, Low, Close, AdjClose;
    long long Volume;
};
#include<stdlib.h>
#include<stdio.h>
extern struct value* read_historical_series(const char* filename, size_t* n);
