#include "function_pointers.h"
/* print_name: Function that prints a name
 * @name: name to be printed
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
