#include "main.h"
#include <unistd.h>

/**
 *Write a program that prints _putchar, followed by a new line
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

