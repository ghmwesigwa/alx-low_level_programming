#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* Return: Always 0 (success)
*/

int main (void)
{
	int n;
	
	srand (time(0));
	n = rand() - RAND_MAX / 2 ;
	if (n > 0)
	{
		printf ("%iispositive\n", n);
	}
	elseif (n == 0)
	{
		printf ("%iiszero\n", n);
	}
	else
	{
		printf ("%iisnegative\n",n);
	}

	return (0);
}
