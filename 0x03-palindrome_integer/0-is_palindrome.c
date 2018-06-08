#include "palindrome.h"
#include <stdio.h>
#define PALINDROME 1
#define NOT_PALINDROME 0

unsigned long ex(unsigned long n, unsigned long power)
{
	if (power == 0)
		return (1);
	for (power-- ; power > 0; power--)
		n *= 10;
	return(n);
}

/**
  * is_palindrome - checks if an integer is a palindrome
  * @n: integer to check
  * Return: 0 if not a palindrome, 1 if it is a palindrome
  * note - not allowed to dynamically allocate memory.
  **/
int is_palindrome(unsigned long n)
{
	unsigned long i = 0;
	unsigned long exponent = 1;
	unsigned long count = 0;

	for(i = n; i > 10; i = i / 10, count++)
		exponent *= 10;
	for(i = count / 2; count > i; count--)
	{
		if (n / exponent != n % 10)
			return (NOT_PALINDROME);
		n -= (n / exponent) * exponent;
		n = n / 10;
		exponent = exponent / 100;
	}
	return (PALINDROME);
}
