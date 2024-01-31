#include <stdlib.h>
#include "main.h"
/**
 * Itoa - changes from integer to string
 * @n: the number
 * Return: a string of the number
 */
char *Itoa(int n);
char *Itoa(int n)
{
	unsigned int n1;
	char *buffer;
	int i, length = 0;
	unsigned int temp;

	if (n == 0)
	{
		buffer = malloc(2 * sizeof(char));
		if (buffer == NULL)
			return (NULL);
		buffer[0] = '0';
		buffer[1] = '\0';
		return (buffer);
	}


	if (n < 0)
	{
		length++;
		n1 = (unsigned int)(-n);
	}
	else
	{
		n1 = (unsigned int)n;
	}

	temp = n1;
	while (temp > 0)
	{
		length++;
		temp /= 10;
	}

	buffer = malloc((length + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}

	buffer[length] = '\0';
	for (i = length - 1; i >= 0; i--)
	{
		buffer[i] = (n1 % 10) + '0';
		n1 /= 10;
	}

	if (n < 0)
	{
		buffer[0] = '-';
	}

	return (buffer);
}

/**
 * bin_convert - prints binary equivalent of a decimal number
 * @n: number to print in binary
 * Return: a string of binary characters
 */
char *bin_convert(unsigned long int n)
{
	int i, count = 0;
	unsigned long int current;
	char *string;

	string = malloc(64 + 1);
	if (string == NULL)
		return (NULL);

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			string[count] = '1';
			count++;
		}
		else if (count)
		{
			string[count] = '0';
			count++;
		}
	}
	if (!count)
	{
		string[count] = '0';
		count++;
	}
	string[count] = '\0';
	return (string);
}
