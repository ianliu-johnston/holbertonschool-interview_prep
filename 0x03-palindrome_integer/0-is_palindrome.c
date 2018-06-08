#include "palindrome.h"
#define PALINDROME 1
#define NOT_PALINDROME 0

/**
  * is_palindrome - checks if an integer is a palindrome
  * @n: integer to check
  * Return: 0 if not a palindrome, 1 if it is a palindrome
  * note - not allowed to dynamically allocate memory.
  **/
int is_palindrome(unsigned long n)
{
	unsigned long i = 0;
	unsigned long digits = 0;
	unsigned long exponent = 1;

	for (i = n; i >= 10; i = i / 10, digits++)
		exponent *= 10;
	for (i = digits / 2; digits > i; digits--)
	{
		if (n / exponent != n % 10)
			return (NOT_PALINDROME);
		n = (n - (n / exponent) * exponent) / 10;
		exponent = exponent / 100;
	}
	return (PALINDROME);
}
