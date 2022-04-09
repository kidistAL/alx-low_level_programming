#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main- generate random number
 *
 * Return: return the value
 * Description: description of the code
 */
int main(void)
{
	char alphabet, alpha;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar (alphabet);
	}
	for (alpha = 'A'; alpha <= 'Z'; alpha++)
	{
		putchar (alpha);
	}
	putchar ('\n');
	return (0);
}
