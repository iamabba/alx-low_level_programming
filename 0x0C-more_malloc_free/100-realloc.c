#include "main.h"

/**
 * _realloc -  reallocates a memory block using malloc and free
 * @pntr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *pntr, unsigned int old_size, unsigned int new_size)
{
	char *clone, *relloc;
	unsigned int i;

	if (pntr != NULL)
	clone = pntr;

	else

	{ return (malloc(new_size)); }

	if (new_size == old_size)

	return (pntr);

	if (new_size == 0 && pntr != NULL)

	{ free(pntr);

	return (0); }

	relloc = malloc(new_size);

	if (relloc == NULL)

	return (0);

	for (i = 0; i < (old_size || i < new_size); i++)

	{

		*(relloc + i) = clone[i];

	}

	free(pntr);

return (relloc);
}
