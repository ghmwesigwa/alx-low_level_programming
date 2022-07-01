#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
*main-Entrypoint
*Return:Always0(success)
*/

intmain(void)
{
	intn;
	
	srand(time(0));
	n=rand()-RAND_MAX/2;
	if(n>0)
	{
		printf("%iispositive\n",n);
	}
	elseif(n==0)
	{
		printf("%iiszero\n",n);
	}
	else
	{
		printf("%iisnegative\n",n);
	}

	return(0);
}
