#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if ((n>0)){
	printf("The number: is positive");}
		else if ((n=0)){
		printf("The number: is zero");}
			else {printf("The number: is negative");}	

	return (0);
}
