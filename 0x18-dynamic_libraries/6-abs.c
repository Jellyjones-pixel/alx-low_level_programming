#include <stdio.h>
#include "main.h"

/**
 * _abs - calculates the absolute value of an integer
 * @n: a variable argument
 * Return: n -n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
