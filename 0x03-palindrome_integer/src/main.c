#include <stdio.h>
#include <limits.h>
#include "palindrome.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
#define INT_ARR_LEN 15
	int index = 0;
	unsigned long m[INT_ARR_LEN] = {1234554321};
	unsigned long n[INT_ARR_LEN] = {4774, 47474, 124842, 9842984, 6, 99, 9999999999, 1351678391938761531, 11, 101, 1001, 10001, 1000000000000000001, ULONG_MAX - 1, 0};

	printf("0 is%s a palindrome.\n", is_palindrome(0) == 0 ? " NOT" : "");
	while (n[index] != 0)
	{
		printf("%lu is%s a palindrome.\n", n[index], is_palindrome(n[index]) == 0 ? " NOT" : "");
		index++;
	}
	m[0]++;
	return (0);
}
