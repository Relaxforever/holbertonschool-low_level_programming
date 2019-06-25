#include "holberton.h"

/**
 * print_last_digit - print last number
 *@last :takes the number that will be used
 * Return: last number
 */
int print_last_digit(int last)
{
	int lasted;

	last = last % 10;
	lasted = _putchar('0' + last);
	return (lasted);
}
