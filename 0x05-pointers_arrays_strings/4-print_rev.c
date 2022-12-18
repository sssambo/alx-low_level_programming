#include"main.h"

/**
<<<<<<< HEAD
 * print_rev - prints a string in reverse
 *
 * @s: string parameter input
 *
 * Return: Nothing
=======
* print_rev - prints a string in reverse
* @s: string to print
>>>>>>> d0b905b94cc9dff9fb349b3d080ae15194850a02
*/

void print_rev(char *s)
{
<<<<<<< HEAD
	int index;

	/*finds the length of string without null character*/
	for (index = 0; s[index] != '\0'; ++index)
		;

	/*print char from the last index as you decrement*/
	for (--index; index >= 0; --index)
		_putchar(s[index]);
	_putchar('\n');
=======
int len = 0, index = 0;
len = _strlen(s);

for (index = len - 1; index >= 0; index--)
_putchar(s[index]);

_putchar('\n');
}

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns lenght;
 */
int _strlen(char *s)
{
int count, inc;
inc = 0;
for (count = 0; s[count] != '\0'; count++)
inc++;

return (inc);
>>>>>>> d0b905b94cc9dff9fb349b3d080ae15194850a02
}
