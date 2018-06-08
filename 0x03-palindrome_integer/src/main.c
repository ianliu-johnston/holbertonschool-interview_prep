#include <stdio.h>
#include "palindrome.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("This is%s a palindrome.\n", is_palindrome(123321) == 0 ? " NOT" : "");
	return (0);
}
