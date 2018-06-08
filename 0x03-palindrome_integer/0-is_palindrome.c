#include "palindrome.h"
#include <stdio.h>
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
	int stop_loop = 50;

	for(i = n; i > 0; i = i / 10)
	{
		printf("%lu\n", i);

		printf("start: %lu - ", (unsigned long) 0);
		printf("end: %lu\n", i % 10);

		if (stop_loop > 1)
			stop_loop--;
		else
			break;
	}
	printf("%lu - ", n);
	return (PALINDROME);
}
