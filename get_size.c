#include "main.h"

/**
 * get_size - Calculates the size to cast the argument
 * @f: Formatted string in which to print the arguments
 * @t: List of arguments to be printed.
 *
 * Return: Precision.
 */
int get_size(const char *f, int *t)
{
	int curr_i = *t + 1;
	int size = 0;

	if (f[curr_i] == 'l')
		size = S_LONG;
	else if (f[curr_i] == 'h')
		size = S_SHORT;

	if (size == 0)
		*t = curr_i - 1;
	else
		*t = curr_i;

	return (size);
}
