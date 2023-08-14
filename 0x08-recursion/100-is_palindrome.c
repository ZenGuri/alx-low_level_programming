#include <stdbool.h>
#include <stddef.h>

/**
 * is_palindrome_helper - Recursive helper function to check if a string is a palindrome.
 * @s: Pointer to the string to check.
 * @start: Starting index of the current substring.
 * @end: Ending index of the current substring.
 *
 * Return: true if the substring is a palindrome, false otherwise.
 */
bool is_palindrome_helper(char *s, size_t start, size_t end)
{
	if (start >= end)
		return true;
	if (s[start] != s[end])
		return false;
	return is_palindrome_helper(s, start + 1, end - 1);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: Pointer to the string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	size_t length = str_length(s);
	if (length == 0)
	       	return 1;
	return (is_palindrome_helper(s, 0, length - 1) ? 1 : 0);
}
