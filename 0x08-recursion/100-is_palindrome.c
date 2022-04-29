#include "main.h"

int comparator(char *s, int i, int len);
int string_recur(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if it is, 0 it's not
 */
int is_palindrome(char *s)
{
if (*s == 0)
return (1);
return (comparator(s, 0, string_recur(s)));
}

/**
 * string_recur - returns the length of a string
 * @s: string to calculate the length of
 * Return: length of the string
 */
int string_recur(char *s)
{
if (*s == '\0')
return (0);
return (1 + string_recur(s + 1));
}

/**
 * comparator - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int comparator(char *s, int i, int len)
{
if (*(s + i) != *(s + len - 1))
return (0);
if (i >= len)
return (1);
return (comparator(s, i + 1, len - 1));
}

