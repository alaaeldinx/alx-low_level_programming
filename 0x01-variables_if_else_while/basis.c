#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -
 *
 * Description:
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num1, num2;
	for(num1=0; num<=9; ++num)
	{
		for(num2=0, num<=9; ++num)
			{
				if (num1 < num2)
					putchar(num1);
					putchar(num2);
			}
	}
	putchar(10);
	return (0);
}
