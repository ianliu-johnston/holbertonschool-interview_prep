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
	int index = 0;
	int is_pal = 0;
	int success_count = 0;

#define ARR_END 20
	unsigned long test_cases[ARR_END] = {
		4774, 47474, 124842, 9842984, 9,
		99, 9999999999, 1351678391938761531, ULONG_MAX - 1, 11,
		101, 1001, 10001, 1010101, 1000000000000000001,
		10001001, 1030101, 1000004000001, 10000044000001, 0
	};
	int expected[ARR_END] = {
		1, 1, 0, 0, 1,
		1, 1, 1, 0, 1,
		1, 1, 1, 1, 1,
		0, 0, 1, 1, 1};

	printf("%lu is%s a palindrome.\n",
			test_cases[ARR_END],
			is_palindrome(test_cases[ARR_END]) == 0 ? " NOT" : "");

	while (test_cases[index] != test_cases[ARR_END])
	{
		printf("CASE: %lu is%s a palindrome.\n",
				test_cases[index], is_pal == 0 ? " NOT" : "");
		is_pal = is_palindrome(test_cases[index]);
		printf("\tResult: %d - Expected: %d = %sCORRECT\033[00m\n\n",
				is_pal, expected[index], is_pal == expected[index] ? "" : "\033[41mIN");
		if (is_pal == expected[index])
			success_count++;
		index++;
	}
	printf("----------------------------------------\n");
	if (success_count == ARR_END - 1)
		printf("Tests were successful\n");
	else
		printf("\033[41m%d of %d\033[00m Tests were \033[41mNOT\033[00m successful.\n", ARR_END - success_count - 1, ARR_END);
	return (0);
}
