#ifndef _MAIN_H
#define _MAIN_H
#include <stdio.h>
#include <string.h>
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned n);                               
unsigned int _strspn(char *s, char *accept);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char);
void set_string(char **s, char *to);
void print_diagsums(int *a, int size);
#endif
