#include "main.h"

/**
 * alloc_grid - returns pointer to memory allocated for array of 2D.
 * @height: rows.
 * @width: colums.
 * Return: NULL it fails.
 *         NULL is rows or colums <= 0.
 *         pointer to memory allocated to array of 2D.
 */
int **alloc_grid(int width, int height)
{
int **s;
int i;

if (width <= 0 || height <= 0)
{
return (0);
}
s = malloc(height * sizeof(s));
if (s == NULL)
{
free(s);
return (NULL);
}
for (i = 0; i < height; i++)
{
s[i] = malloc(width * sizeof(s));
}
return (s);
}
