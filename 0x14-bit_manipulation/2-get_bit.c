#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: The index to set the value at - indices start at 0.
 *
 * Return: If an error occurs - -1.
 *         Otherwise - 1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_val;

if (index > 63)
Return (-1);

bit_val = (n >> index) & 1;

return (bit_val);
}
