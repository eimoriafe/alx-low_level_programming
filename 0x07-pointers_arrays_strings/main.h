#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
int _putchar(char c);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
/**void reverse_array(int *a, int n);
char *cap_string(char *);
char *leet(char *);
 * char *rot13(char *);
 * void puts2(char *str);
 * void puts_half(char *str);
 * void print_array(int *a, int n);
 * char *_strcpy(char *dest, char *src);
 */

#endif
