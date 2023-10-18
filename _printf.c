#include "main.h"

/**
 * _printf - Printf function
 * @format: string character.
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	va_start(list, format);
	
	while(format[count] != '\0')
	{
		if(format[count] != ' ' && format[count] != '\t' && format[count] != '\n')
		{
			write(1, format[count], 1);
			count++;
		}else
		{
			if(*format == '%')
			{
				write(1, format, 1);
				return (-1);
			}
		}
	}
	va_end(list);
	return count;
}
