#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert string to nnumber
 * @s: received string
 * Return: number
 */
int _atoi(char *s)
{
	int i = 0, l = 0, f = 1, num = 0, sign = 1;

	while (s[l] != '\0')
		l++;
	if (s[0] == '-')
		sign = -1;
	for (i = l - 1; i >= 0; i--)
	{
		if (s[i] == '-')
			continue;
		else if ((s[i] <= '9' && s[i] >= '0'))
		{
			num += (s[i] - '0') * f;
			f *= 10;
		}
	}

	return (num * sign);
}
