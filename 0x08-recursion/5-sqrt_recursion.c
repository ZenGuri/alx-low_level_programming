/**
 * sqrt_helper - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: Square root of n (if found), otherwise -1 (if not found).
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
		return (guess);

	if (guess * guess > n)
		return (-1);

	return (sqrt_helper(n, guess + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to find the square root.
 *
 * Return: Square root of n (if found), otherwise -1 (if not found).
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (sqrt_helper(n, 1));
}
