#include <stddef.h>

/**
 * is_palindrome_helper - Recursive helper function.
 * @s: Pointer to the string to check.
 * @start: Starting index of the current substring.
 * @end: Ending index of the current substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (is_palindrome_helper(s, 0, length - 1));
}
