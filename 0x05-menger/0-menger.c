#include "menger.h"
#include <stdio.h>

/**
  * pow - calculates the power of a number
  * @base: base number
  * @power: raise base to this power
  * Return: calculated power
  */
double power(int base, int power)
{
	double r;

	r = base;
	for ( ; power > 0; power--)
		r *= (double) base;
	return (r);
}

/**
  * menger - draws a menger sponge
  * @level: depth of sponge to draw
  **/
void menger(int level)
{
	int i, j;

	printf("%d\n", level);
	i = 3;
	j = level;
	printf("%0f\n", power(i, j));

	/*

	for(i = 0; i < (int)pow(level, 3); i++)
	{
		for(j = 0; j < (int)pow(level, 3); j++)
			printf("#");
		putchar('\n');
	}
	*/
}
