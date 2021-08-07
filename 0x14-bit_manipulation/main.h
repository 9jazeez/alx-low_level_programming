#ifndef _MAIN_H
#define _MAIN_H

unsigned int flip_bits(unsigned long int, unsigned long int);
int clear_bit(unsigned long int *, unsigned int);
int set_bit(unsigned long int *, unsigned int);
int get_bit(unsigned long int, unsigned int);
void print_binary(unsigned long int);
unsigned int binary_to_uint(const char *);

#endif /*MAIN_H*/
