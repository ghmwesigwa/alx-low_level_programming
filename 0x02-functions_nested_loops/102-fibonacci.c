#include "main.h"
#include <stdio.h>
/**
* main - print first 50 Fibonacci numbers
* Return: 0
*/
int main(void)
{
long int i, sum;
long int x = 1, y = 2;
for (i = 0; i < 49; i++)
{
printf("%ld, ", x);
sum = x + y;
x = y;
y = sum;
if (i == 48)
{
printf("%ld\n", x);

}
}
return (0);
}
