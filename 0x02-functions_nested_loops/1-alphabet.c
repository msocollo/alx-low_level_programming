#include <stdio.h>
#inlude "main.h"
/**
 * Main carries the method
 *
 */
void print_alphabet(void)
{ 
	char alp = 'a';

	while (alp <= 'z')
	{
		_putchar (alp);
		alp++;

	}
	_putchar('\n');

}
