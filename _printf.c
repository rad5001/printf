#include "main.h"

/**
 * _printf - Printf function
 * @format: string character.
 * Return: the number of characters printed
 */
int _printf(const char* format, ...)
{
	int count = 0;
	
	while(*format != '\0')
	{
		if(*format != ' ' && *format != '\t' && *format != '\n')
		{
			count++;
		}
		format++;
	}
	return count;
}
