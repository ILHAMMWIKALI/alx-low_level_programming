#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - the function to aceese the heap
 * @b: int value
 * Return:void
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
