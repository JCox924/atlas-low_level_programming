#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
void print_array(int *array, size_t left, size_t right);
int binary_search(int *array, size_t size, int value);

#endif
