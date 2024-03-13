#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

int _putchar(char c);
void print_str(const char *str);
void print_int(int n);
int min(int a, int b);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */