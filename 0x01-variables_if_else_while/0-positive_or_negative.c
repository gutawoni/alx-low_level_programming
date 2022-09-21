#include <stdlib.h>
#include <stdlio.h>
#include <time.h>

/**
* main - Entry point
* Return: Always success*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>0)
		printf("%d  positive \n")
	else if(n=0)
		printf("%d  zero \n")
	else
		printf("%d  negative \n")
	/* your code goes there */
	return (0);
}
