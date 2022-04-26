#include "main.h"

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */
void print_chessboard(char (*a)[8])
{
	int a, i;

	for (a = 0; a[a][7]; a++)
	{
		for (i = 0; i < 8; i++)
			_putchar(a[a][i]);

		_putchar('\n');
	}
}
