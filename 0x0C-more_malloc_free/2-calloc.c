#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - function allocates memory for an array
 * @nmemb: no of bloc of memory
 * @size: size of the element (int)
 * return : void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
memset(p, 0, nmemb * size);
return (p);
}
