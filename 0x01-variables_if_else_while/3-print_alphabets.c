#include <stdio.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char ch = 'A';

	while (c <= 'z' && ch <= 'Z')
	{
		if (c != '1' && c != '2')
		{
			putchar(c);
			putchar(ch);
		}
		c++;
		ch++;
	}
	/*
			*while (ch <= 'Z')
			*{
				*if (ch != 'e' && ch != 'q')
				*{
				*	putchar(ch);
				*}
				*ch++;
			}
			*/

	putchar('\n');
	return (0);
}
