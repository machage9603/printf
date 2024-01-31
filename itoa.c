#include "main.h"
/**
 * Itoa- changes from integer to string
 * @n: the number
 * Return: a string of the number
 */

char *Itoa(int n)
{
	unsigned int n1, temp;
	char *buffer;
	int i, length = 1;

	if (n < 0)
	{
		length++, n1 = (unsigned int)(-n);
	}
	else
	{
		n1 = (unsigned int)n;
	}
	temp = n1;
	while (temp /= 10)
	{
		length++;
	}
	buffer = (char *)malloc((length + 1) * sizeof(char));
	if (buffer == NULL)
	{
		return (NULL);
	}
	buffer[length] = '\0';
	if (n < 0)
	{
		buffer[0] = '-';
	}
	for (i = length - 1; i >= 0; i--)
	{
		buffer[i] = (n1 % 10) + '0', n1 /= 10;
	}

	return (buffer);
}
