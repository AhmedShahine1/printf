#include "main.h"

/**
 * get_precision - Calculates the precision for printing
 * @f: Formatted string in which to print the arguments
 * @t: List of arguments to be printed.
 * @list: list of arguments.
 *
 * Return: Precision.
 */
int get_precision(const char *f, int *t, va_list list)
{
	int curr_i = *t + 1;
	int precision = -1;

	if (f[curr_i] != '.')
		return (precision);

	precision = 0;

	for (curr_i += 1; f[curr_i] != '\0'; curr_i++)
	{
		if (is_digit(f[curr_i]))
		{
			precision *= 10;
			precision += f[curr_i] - '0';
		}
		else if (f[curr_i] == '*')
		{
			curr_i++;
			precision = va_arg(list, int);
			break;
		}
		else
			break;
	}

	*t = curr_i - 1;

	return (precision);
}
