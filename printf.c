#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: a string that contains characters
 * Return: Returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int j, i, len = 0, p;
	char *str;
	char c;
	unsigned int bin;
	va_list arg_list;

	va_start(arg_list, format);
	if (format == NULL || strlen(format) == 1)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(arg_list, int);
				putchar(c);
				len++;
			}
			else if (format[i] == 's')
			{
				str = va_arg(arg_list, char *);
				if (str == NULL)
					str = "(null)";
				for (j = 0; str[j] != '\0'; j++)
				{
					putchar(str[j]);
					len++;
				}
			}
			else if (format[i] == '%')
			{
				putchar('%');
				len++;
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				p = va_arg(arg_list, int);
				str = Itoa(p);
				for (j = 0; str[j] != '\0'; j++)
				{
					putchar(str[j]);
					len++;
				}
				free(str);
			}
			else if (format[i] == 'b')
			{
				bin = va_arg(arg_list, unsigned int);
				str = bin_convert(bin);
				for (j = 0; str[j] != '\0'; j++)
				{
					putchar(str[j]);
					len++;
				}
				free(str);
			}


			else
			{
				putchar('%');
				len++;
				putchar(format[i]);
				len++;
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
