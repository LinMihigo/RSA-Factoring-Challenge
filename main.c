#include "main.h"

/**
* isPrime - Checks if a given digit is a prime num
* @num: num to check
* Return: True or False
*/
int isPrime(long int num)
{
	long int i;

	if (num <= 1)
		return (0);

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
			return (0);
	}
	return (1);
}

/**
* getFactors - finds the two divisors of num
* @num: number to process
*/
void getFactors(long int num)
{
	long int i, j;

	for (i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0)
		{
			j = num / i;

			if (isPrime(i) && isPrime(j))
			{
				printf("%ld=%ld*%ld\n", num, j, i);
				return;
			}
		}
	}
	printf("%ld can't be factored into two prime nums!\n", num);
}

/**
* main - main function
* @ac: Count of args
* @av: array of pointer to args
* Return: 0 - Always
*/
int main(int ac, char **av)
{
	FILE *file;
	char buffer[128];
	long int num;

	if (ac != 2)
	{
		perror("Not strictly just one argument");
		exit(EXIT_FAILURE);
	}

	file = fopen(av[1], "r");
	if (!file)
		exit(EXIT_FAILURE);

	if (fgets(buffer, sizeof(buffer), file) != NULL)
	{
		num = atol(buffer);
		getFactors(num);
	}
	else
	{
		exit(EXIT_FAILURE);
	}

	return (0);
}
