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

