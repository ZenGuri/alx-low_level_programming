#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: Pointer to the string to be printed.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') // Base case: If the current character is '\0', it's the end of the string.
    {
        _putchar('\n'); // Print a new line character.
        return; // End the recursion.
    }

    _putchar(*s); // Print the current character.
    _puts_recursion(s + 1); // Recursively call the function with the next character in the string.
}

