#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*main print if number is positive, zero or negative 
 *Return: always success  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("%d id positive\n", n);
	}
	else if  (n == 0)
	{printf("%d is zero\n", n);}
else 
{
printf("%d id negative\n",n);
}
	return (0);
}
