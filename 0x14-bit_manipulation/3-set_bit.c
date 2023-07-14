#include<stdio.h>
#include<stdlib.h>
/**
*set_bit - set bit
*@n:theNumber
*@index: the index
*Return: (0)
*/
int set_bit(unsigned long int *n, unsigned int index) {
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }

    *n |= 1ul << index;
    return 1;
}
