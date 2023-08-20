#include "shell.h"

/**
 * bfree - this rees a pointer and Nulls the address
 * @ptr: the address of the pointer to be freed
 *
 * Return: 1 if freed, otherwise 0.
 */
int bfree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
