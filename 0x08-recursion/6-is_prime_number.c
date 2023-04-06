#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: the number to be cheked
 *
 * Return: 1 if prime 0 if not.
 */
int is_prime_number(int n)
{
	int x;

	if (n <= 1)
		return (0);

	for (x = 5; x * x <= n; x++)
	{
		if (n % x == 0)
			return (0);
	}

	return (1);
}
