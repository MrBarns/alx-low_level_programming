#ifndef _MAIN_
#define _MAIN_

int get_endianness(void);

int _putchar(char c);

unsigned int flip_bits(unsigned long int n, unsigned long int m);

int set_bit(unsigned long int *n, unsigned int index);

int get_bit(unsigned long int n, unsigned int index);

unsigned int power2(int index);

unsigned int binary_to_uint(const char *b);

void print_binary(unsigned long int n);

int clear_bit(unsigned long int *n, unsigned int index);

#endif
