#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: string that contains characters
 * Return: Returns the number of characters printed
 */
int _printf(const char *format, ...)
{
int len = 0;
va_list arg_list;
va_start(arg_list, format);
	for (int i = 0; format[i] != '\0'; i++)
	{
	if (format[i] == '%')
	{
	i++;
	if (format[i] == 'c')
	{
	i++;
	if (format[i] == 's')
	{
	char *str
		str = va_arg(arg_list, char *);
	int j;

	for (j = 0; str[j] != '\0'; j++)

	{
	putchar(str[j])
	len++;
	}
	}
	}
	}
	else
	{
	putchar (format[i]);
	len++;
	}
	}
va_end(arg_list);

	return (len);
}

