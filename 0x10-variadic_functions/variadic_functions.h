#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib>
#include <stdarg.h>


int _putchar(char c);

/*Basic tasks */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /* MAIN_H */