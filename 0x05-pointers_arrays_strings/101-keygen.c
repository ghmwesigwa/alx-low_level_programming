#include "main.h"
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int myrand, count, total;

	srand(time(NULL));
	count = 0;
	total = 2500;
	while (total > 122)
	{
	 myrand = (rand() % 125) + 1;
	 printf("%c", myrand);
	 total -= myrand;
	 count++;
	
	}
	printf("%c", total);

	return (0);
}
