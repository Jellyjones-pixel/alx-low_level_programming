#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints character
 * @c: a given variable value
 * Return: 1, &c, 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
