#include<stdio.h>
#include<stdlib.h>
/**
*get_bit - print bit
*@n:theNumber
*@index: the index
*Return: (0)
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

    if (index >= sizeof(unsigned long int) * 8)
    {
        return -1;
    }
    
     mask = 1ul << index;
    return (n & mask) ? 1 : 0;
}
