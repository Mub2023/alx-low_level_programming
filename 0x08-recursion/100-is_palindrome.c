#include "main.h"
int checker_string(char *s, int x, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - checks if the string is plalindrome
 * @s: the pointer of string
 *
 * Return: 1 if it is , 0 it is not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (checker_string(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - return the length of a string
 * @s: the pointer of the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * checker_string - checks the character recursively for palindrome
 * @s: pointer of the string
 * @x: iterator
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not palindrome
 */
int checker_string(char *s, int x, int len)
{
	if (*(s + x) != *(s + len - 1))
		return (0);
	if (x >= len)
		return (1);

	return (checker_string(s, x + 1, len - 1));
}
