#include "main.h"

/**
 * _isdigit - Check if a character is a digit
 * @x: The number to be Checked
 * Return: 1 for a character that  will be a digit or 0 for any size
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
