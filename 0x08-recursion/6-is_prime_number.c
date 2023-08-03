/**
 * is_prime_helper - Recursive helper function to check if n is prime.
 * @n: The number to check for prime.
 * @divisor: The current divisor to check if n is divisible by.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (n < 2 || n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (is_prime_helper(n, divisor + 1));
}
/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check for prime.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}
