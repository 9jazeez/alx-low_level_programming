#ifndef _FUNCTION_POINTERS_H
#define _FUNCTION_POINTERS_H
void print_name(char *, void (*f)(char *));
int int_index(int *, int, int (*cmp)(int));

#endif /*FUNCTION_POINTERS_H*/
