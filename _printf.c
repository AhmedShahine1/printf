#include "main.h"

void print_buffer(char buff[], int *buff_i);

/**
 * _printf - Printf function
 * @forma: format.
 * Return: Printed chars.
 */
int _printf(const char *forma, ...)
{
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_i = 0;
	va_list list;
	char buff[BUFF_SIZE];

	if (forma == NULL)
		return (-1);

	va_start(list, forma);

	for (i = 0; forma && forma[i] != '\0'; i++)
	{
		if (forma[i] != '%')
		{
			buff[buff_i++] = forma[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buff, &buff_i);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buff, &buff_i);
			flags = get_flags(forma, &i);
			width = get_width(forma, &i, list);
			precision = get_precision(forma, &i, list);
			size = get_size(forma, &i);
			++i;
			printed = handle_print(forma, &i, list, buff,
				flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buff, &buff_i);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buff: Array of chars
 * @buff_i: Index at which to add next char, represents the length.
 */
void print_buffer(char buff[], int *buff_i)
{
	if (*buff_i > 0)
		write(1, &buff[0], *buff_i);

	*buff_i = 0;
}
