#include<stdio.h>
/**
 *main - prints alphabets in lowercase, followed by a new line
 *Return: Always 0 (Success)
 */

int main(void)
{
	for (char alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
