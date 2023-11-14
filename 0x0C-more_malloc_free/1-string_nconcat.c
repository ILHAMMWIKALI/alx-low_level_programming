#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - fuction to concent
 * @n: input value
 * @s1: string one
 * @s2: string two
 * Return: pointer to the new allocted memmory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *p;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
i = strlen(s1);
j = strlen(s2);
if (n >= j)
n = j;
p = malloc(i + n + 1);
if (p == NULL)
return (NULL);
for (i = 0; s1[i] != '\0'; i++)
p[i] = s1[i];
for (j = 0; j < n; j++)
p[i + j] = s2[j];
p[i + j] = '\0';
return (p);
}
