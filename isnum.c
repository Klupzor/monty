#include<stdio.h>

/**
 * isnum - evaluate if is a number
 *
 * @s: String.
 * Return: 1 if is number 0 if is not.
 */

int isnum(char *s)
{
	unsigned int i;

	if (!s)
		return (-1);
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (s[i] == '-')
			i++;
		if (!(s[i] >= 48 && s[i] <= 57))
		{
			return (0);
		}
	}
	return (1);
}
