#include "main.h"
/**
* main - prints the minimum number of coins for an amount of money
* @argc: should count two arguments
* @argv: arguments given should be program name and amount of money
* Return: least number of coins, 0 if negative amount, 1 if amount not given
*/
int main(int argc, char *argv[])
{
	int coins = 0, cents = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	while (cents >= 1)
	{
		if (cents >= 25)
		{
			coins = coins + cents / 25;
			cents = cents % 25;
		}
		else if (cents >= 10)
		{
			coins = coins + (cents / 10);
			cents = cents % 10;
		}
		else if (cents >= 5)
		{
			coins = coins + (cents / 5);
			cents = cents % 5;
		}
		else if (cents >= 2)
		{
			coins = coins + (cents / 2);
			cents = (cents % 2);
		}
		else
		{
			coins++;
			cents = 0;
		}
	}
	printf("%d\n", coins);
	return (0);
}
