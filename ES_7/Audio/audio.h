#pragma once
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
struct audio {
    size_t samples;
    short* left, * right;
};